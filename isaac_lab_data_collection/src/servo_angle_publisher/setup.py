from setuptools import setup
import glob

package_name = "servo_angle_publisher"

setup(
    name=package_name,
    version="0.0.1",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/servo_angle_publisher"]),
        ("share/" + package_name, ["package.xml"]),
        ("share/" + package_name + "/launch", glob.glob("launch/*.launch.py")),
        ("share/" + package_name + "/config", glob.glob("config/*.yaml")),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    entry_points={
        "console_scripts": [
            "servo_angle_node = servo_angle_publisher.node:main",
            "servo_angle_node_rad = servo_angle_publisher.node_rad:main",
            "joint_state_merger = servo_angle_publisher.joint_state_merger:main",
        ],
    },
)
