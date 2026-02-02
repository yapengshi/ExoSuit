// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RecordArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/record_arm_hand_pose.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/record_arm_hand_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RecordArmHandPose_right_pose
{
public:
  explicit Init_RecordArmHandPose_right_pose(::dynamic_biped::msg::RecordArmHandPose & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RecordArmHandPose right_pose(::dynamic_biped::msg::RecordArmHandPose::_right_pose_type arg)
  {
    msg_.right_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RecordArmHandPose msg_;
};

class Init_RecordArmHandPose_left_pose
{
public:
  explicit Init_RecordArmHandPose_left_pose(::dynamic_biped::msg::RecordArmHandPose & msg)
  : msg_(msg)
  {}
  Init_RecordArmHandPose_right_pose left_pose(::dynamic_biped::msg::RecordArmHandPose::_left_pose_type arg)
  {
    msg_.left_pose = std::move(arg);
    return Init_RecordArmHandPose_right_pose(msg_);
  }

private:
  ::dynamic_biped::msg::RecordArmHandPose msg_;
};

class Init_RecordArmHandPose_header
{
public:
  Init_RecordArmHandPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordArmHandPose_left_pose header(::dynamic_biped::msg::RecordArmHandPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordArmHandPose_left_pose(msg_);
  }

private:
  ::dynamic_biped::msg::RecordArmHandPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RecordArmHandPose>()
{
  return dynamic_biped::msg::builder::Init_RecordArmHandPose_header();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__BUILDER_HPP_
