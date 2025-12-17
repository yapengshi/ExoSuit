cmake_minimum_required(VERSION 3.8)
project(dynamic_biped)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ArmHandPose.msg"
  "msg/ECJointMotordata.msg"
  "msg/HandRotationEular.msg"
  "msg/HandRotation.msg"
  "msg/QuaternionArray.msg"
  "msg/RecordArmHandPose.msg"
  "msg/RobotArmInfo.msg"
  "msg/RobotArmQVVD.msg"
  "msg/RobotHandEff.msg"
  "msg/RobotHandPosition.msg"
  "msg/RobotHeadMotionData.msg"
  "msg/RobotPhase.msg"
  "msg/RobotQVTau.msg"
  "msg/RobotTorsoState.msg"
  "msg/WalkCommand.msg"
  "srv/ChangeAMBACCtrlMode.srv"
  "srv/ChangeArmCtrlMode.srv"
  "srv/ControlEndHand.srv"
  "srv/SrvChangeCtlMode.srv"
  "srv/SrvChangeJoller.srv"
  "srv/SrvChangePhases.srv"
  "srv/SrvClearPositionCMD.srv"
  "srv/SrvManiInst.srv"
  DEPENDENCIES std_msgs geometry_msgs
)


ament_export_dependencies(rosidl_default_runtime)
ament_package()
