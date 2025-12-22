// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotHandPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_hand_position.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_hand_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotHandPosition_right_hand_position
{
public:
  explicit Init_RobotHandPosition_right_hand_position(::dynamic_biped::msg::RobotHandPosition & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotHandPosition right_hand_position(::dynamic_biped::msg::RobotHandPosition::_right_hand_position_type arg)
  {
    msg_.right_hand_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotHandPosition msg_;
};

class Init_RobotHandPosition_left_hand_position
{
public:
  explicit Init_RobotHandPosition_left_hand_position(::dynamic_biped::msg::RobotHandPosition & msg)
  : msg_(msg)
  {}
  Init_RobotHandPosition_right_hand_position left_hand_position(::dynamic_biped::msg::RobotHandPosition::_left_hand_position_type arg)
  {
    msg_.left_hand_position = std::move(arg);
    return Init_RobotHandPosition_right_hand_position(msg_);
  }

private:
  ::dynamic_biped::msg::RobotHandPosition msg_;
};

class Init_RobotHandPosition_header
{
public:
  Init_RobotHandPosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHandPosition_left_hand_position header(::dynamic_biped::msg::RobotHandPosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHandPosition_left_hand_position(msg_);
  }

private:
  ::dynamic_biped::msg::RobotHandPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotHandPosition>()
{
  return dynamic_biped::msg::builder::Init_RobotHandPosition_header();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__BUILDER_HPP_
