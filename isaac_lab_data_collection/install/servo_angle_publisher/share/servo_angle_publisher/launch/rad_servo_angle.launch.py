from launch import LaunchDescription
from launch_ros.actions import Node
import os


def generate_launch_description():
    conda_site = "/opt/conda/envs/exo_suit_jazzy_v2_3/lib/python3.12/site-packages"

    py_path = conda_site
    if os.environ.get("PYTHONPATH"):
        py_path = conda_site + os.pathsep + os.environ["PYTHONPATH"]

    return LaunchDescription([
        Node(
            package="servo_angle_publisher",
            executable="servo_angle_node_rad", 
            name="servo_angle_publisher_rad",   
            output="screen",
            additional_env={"PYTHONPATH": py_path},
        )
    ])
