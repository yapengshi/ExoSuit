#!/usr/bin/env python3
import time
from typing import List, Tuple, Dict

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from rcl_interfaces.msg import SetParametersResult
from sensor_msgs.msg import JointState


class JointStateMerger(Node):
    """
    Merges JointState streams:
      - Arms: incoming from /joint_states_arms (typically from servos)
      - Static joints (head + legs): parameters (names + positions in radians)
    Publishes the merged JointState to /joint_states.
    """

    def __init__(self) -> None:
        super().__init__("joint_state_merger")

        # Parameters
        self.declare_parameter("publish_rate", 30.0)
        self.declare_parameter("arms_topic", "/joint_states_arms")
        self.declare_parameter("out_topic", "/joint_states")
        self.declare_parameter("publish_static_when_no_arms", True)
        self.declare_parameter("arms_stale_timeout_sec", 0.5)

        # Static joints (head + legs) in radians
        # NOTE: In ROS2 Jazzy, declaring empty lists like [] may be inferred as BYTE_ARRAY.
        # Declare these parameters as statically typed arrays to avoid type mismatch. (EN)
        self.declare_parameter("static_joint_names", rclpy.Parameter.Type.STRING_ARRAY)   # Added (EN)
        self.declare_parameter("static_joint_positions", rclpy.Parameter.Type.DOUBLE_ARRAY)  # Added (EN)

        self._arms_topic = str(self.get_parameter("arms_topic").value)
        self._out_topic = str(self.get_parameter("out_topic").value)

        self._publish_static_when_no_arms = bool(
            self.get_parameter("publish_static_when_no_arms").value
        )
        self._arms_stale_timeout_sec = float(
            self.get_parameter("arms_stale_timeout_sec").value
        )

        self._static_names, self._static_pos = self._read_static_params()

        self._last_arms_msg: JointState = JointState()
        self._last_arms_rx_time: float = 0.0
        self._got_arms: bool = False

        # ROS interfaces
        self._sub = self.create_subscription(
            JointState, self._arms_topic, self._on_arms, 10
        )
        self._pub = self.create_publisher(JointState, self._out_topic, 10)

        self._timer = None
        self._create_timer_from_rate(float(self.get_parameter("publish_rate").value))

        # Allow runtime tuning via parameters
        self.add_on_set_parameters_callback(self._on_set_parameters)

        self.get_logger().info(
            f"JointStateMerger started. arms_topic={self._arms_topic}, out_topic={self._out_topic}"
        )

    def _read_static_params(self) -> Tuple[List[str], List[float]]:
        names_val = self.get_parameter("static_joint_names").value
        pos_val = self.get_parameter("static_joint_positions").value

        # For statically typed arrays, rclpy normally returns [] when not set. (EN)
        names = list(names_val) if names_val is not None else []
        pos = list(pos_val) if pos_val is not None else []

        if len(names) != len(pos):
            raise RuntimeError(
                "static_joint_names and static_joint_positions must have the same length"
            )

        # Basic sanitation
        names = [str(n).strip() for n in names if str(n).strip()]
        pos = [float(p) for p in pos]

        return names, pos

    def _create_timer_from_rate(self, rate_hz: float) -> None:
        if rate_hz <= 0.0:
            raise RuntimeError("publish_rate must be > 0")

        if self._timer is not None:
            self._timer.cancel()

        period = 1.0 / rate_hz
        self._timer = self.create_timer(period, self._publish)

    def _on_arms(self, msg: JointState) -> None:
        self._last_arms_msg = msg
        self._last_arms_rx_time = time.time()
        self._got_arms = True

    @staticmethod
    def _build_map(names: List[str], pos: List[float]) -> Dict[str, float]:
        out = {}
        for n, p in zip(names, pos):
            if n:
                out[n] = float(p)
        return out

    def _arms_fresh(self) -> bool:
        if not self._got_arms:
            return False
        age = time.time() - self._last_arms_rx_time
        return age <= self._arms_stale_timeout_sec

    def _publish(self) -> None:
        arms_ok = self._arms_fresh()

        if not arms_ok and not self._publish_static_when_no_arms:
            return

        merged = self._build_map(self._static_names, self._static_pos)

        arms_names = []
        arms_pos = []
        if arms_ok:
            arms_names = list(self._last_arms_msg.name)
            arms_pos = list(self._last_arms_msg.position)

        if len(arms_names) == len(arms_pos) and len(arms_names) > 0:
            merged.update(self._build_map(arms_names, arms_pos))
        elif arms_ok and (len(arms_names) != len(arms_pos)):
            self.get_logger().warn(
                "Received arms JointState with name/position length mismatch; ignoring arms update."
            )

        ordered_names: List[str] = []
        seen = set()

        for n in arms_names:
            if n and n in merged and n not in seen:
                ordered_names.append(n)
                seen.add(n)

        for n in self._static_names:
            if n and n in merged and n not in seen:
                ordered_names.append(n)
                seen.add(n)

        out = JointState()
        out.header.stamp = self.get_clock().now().to_msg()
        out.name = ordered_names
        out.position = [merged[n] for n in ordered_names]

        self._pub.publish(out)

    def _on_set_parameters(self, params: List[Parameter]) -> SetParametersResult:
        publish_rate = None
        static_names = None
        static_pos = None
        arms_topic = None
        out_topic = None
        publish_static_when_no_arms = None
        stale_timeout = None

        for p in params:
            if p.name == "publish_rate":
                publish_rate = float(p.value)
            elif p.name == "static_joint_names":
                static_names = [str(x).strip() for x in list(p.value)]
            elif p.name == "static_joint_positions":
                static_pos = [float(x) for x in list(p.value)]
            elif p.name == "arms_topic":
                arms_topic = str(p.value)
            elif p.name == "out_topic":
                out_topic = str(p.value)
            elif p.name == "publish_static_when_no_arms":
                publish_static_when_no_arms = bool(p.value)
            elif p.name == "arms_stale_timeout_sec":
                stale_timeout = float(p.value)

        if static_names is not None or static_pos is not None:
            new_names = static_names if static_names is not None else self._static_names
            new_pos = static_pos if static_pos is not None else self._static_pos
            if len(new_names) != len(new_pos):
                return SetParametersResult(
                    successful=False,
                    reason="static_joint_names and static_joint_positions must have the same length",
                )
            self._static_names = new_names
            self._static_pos = new_pos

        if publish_rate is not None:
            try:
                self._create_timer_from_rate(publish_rate)
            except Exception as e:
                return SetParametersResult(successful=False, reason=str(e))

        if arms_topic is not None:
            self._arms_topic = arms_topic
        if out_topic is not None:
            self._out_topic = out_topic
        if publish_static_when_no_arms is not None:
            self._publish_static_when_no_arms = publish_static_when_no_arms
        if stale_timeout is not None:
            self._arms_stale_timeout_sec = stale_timeout

        return SetParametersResult(successful=True)


def main() -> None:
    rclpy.init()
    node = JointStateMerger()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
