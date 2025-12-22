// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotHeadMotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_head_motion_data.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_head_motion_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotHeadMotionData_joint_data
{
public:
  Init_RobotHeadMotionData_joint_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::msg::RobotHeadMotionData joint_data(::dynamic_biped::msg::RobotHeadMotionData::_joint_data_type arg)
  {
    msg_.joint_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotHeadMotionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotHeadMotionData>()
{
  return dynamic_biped::msg::builder::Init_RobotHeadMotionData_joint_data();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__BUILDER_HPP_
