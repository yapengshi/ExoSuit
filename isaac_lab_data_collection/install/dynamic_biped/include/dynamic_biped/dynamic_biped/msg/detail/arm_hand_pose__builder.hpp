// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/arm_hand_pose.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/arm_hand_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_ArmHandPose_joint_angles
{
public:
  explicit Init_ArmHandPose_joint_angles(::dynamic_biped::msg::ArmHandPose & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::ArmHandPose joint_angles(::dynamic_biped::msg::ArmHandPose::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::ArmHandPose msg_;
};

class Init_ArmHandPose_quat_xyzw
{
public:
  explicit Init_ArmHandPose_quat_xyzw(::dynamic_biped::msg::ArmHandPose & msg)
  : msg_(msg)
  {}
  Init_ArmHandPose_joint_angles quat_xyzw(::dynamic_biped::msg::ArmHandPose::_quat_xyzw_type arg)
  {
    msg_.quat_xyzw = std::move(arg);
    return Init_ArmHandPose_joint_angles(msg_);
  }

private:
  ::dynamic_biped::msg::ArmHandPose msg_;
};

class Init_ArmHandPose_pos_xyz
{
public:
  Init_ArmHandPose_pos_xyz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmHandPose_quat_xyzw pos_xyz(::dynamic_biped::msg::ArmHandPose::_pos_xyz_type arg)
  {
    msg_.pos_xyz = std::move(arg);
    return Init_ArmHandPose_quat_xyzw(msg_);
  }

private:
  ::dynamic_biped::msg::ArmHandPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::ArmHandPose>()
{
  return dynamic_biped::msg::builder::Init_ArmHandPose_pos_xyz();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__BUILDER_HPP_
