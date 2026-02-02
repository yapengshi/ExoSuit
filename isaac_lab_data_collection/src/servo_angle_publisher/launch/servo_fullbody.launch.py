from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Keep your conda PYTHONPATH injection (same as your existing launch).
    conda_site = "/opt/conda/envs/exo_suit_jazzy_v2_3/lib/python3.12/site-packages"

    py_path = conda_site
    if os.environ.get("PYTHONPATH"):
        py_path = conda_site + os.pathsep + os.environ["PYTHONPATH"]

    pkg_share = get_package_share_directory("servo_angle_publisher")
    defaults_yaml = os.path.join(pkg_share, "config", "fullbody_defaults.yaml")

    servo_arms = Node(
        package="servo_angle_publisher",
        executable="servo_angle_node_rad",
        name="servo_angle_publisher_rad",
        output="screen",
        additional_env={"PYTHONPATH": py_path},
        # Remap: publish arms into a separate topic so /joint_states is owned by the merger. (EN)
        remappings=[("/joint_states", "/joint_states_arms")],
    )

    merger = Node(
        package="servo_angle_publisher",
        executable="joint_state_merger",
        name="joint_state_merger",
        output="screen",
        parameters=[defaults_yaml],
    )

    return LaunchDescription([servo_arms, merger])
