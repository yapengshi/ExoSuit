// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotHandEff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_hand_eff.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_hand_eff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotHandEff_data
{
public:
  explicit Init_RobotHandEff_data(::dynamic_biped::msg::RobotHandEff & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotHandEff data(::dynamic_biped::msg::RobotHandEff::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotHandEff msg_;
};

class Init_RobotHandEff_header
{
public:
  Init_RobotHandEff_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHandEff_data header(::dynamic_biped::msg::RobotHandEff::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHandEff_data(msg_);
  }

private:
  ::dynamic_biped::msg::RobotHandEff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotHandEff>()
{
  return dynamic_biped::msg::builder::Init_RobotHandEff_header();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__BUILDER_HPP_
