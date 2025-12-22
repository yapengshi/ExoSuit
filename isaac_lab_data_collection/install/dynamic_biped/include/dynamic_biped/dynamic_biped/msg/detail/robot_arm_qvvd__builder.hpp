// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotArmQVVD.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_arm_qvvd.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_QVVD__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_QVVD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_arm_qvvd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotArmQVVD_vd
{
public:
  explicit Init_RobotArmQVVD_vd(::dynamic_biped::msg::RobotArmQVVD & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotArmQVVD vd(::dynamic_biped::msg::RobotArmQVVD::_vd_type arg)
  {
    msg_.vd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmQVVD msg_;
};

class Init_RobotArmQVVD_v
{
public:
  explicit Init_RobotArmQVVD_v(::dynamic_biped::msg::RobotArmQVVD & msg)
  : msg_(msg)
  {}
  Init_RobotArmQVVD_vd v(::dynamic_biped::msg::RobotArmQVVD::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_RobotArmQVVD_vd(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmQVVD msg_;
};

class Init_RobotArmQVVD_q
{
public:
  explicit Init_RobotArmQVVD_q(::dynamic_biped::msg::RobotArmQVVD & msg)
  : msg_(msg)
  {}
  Init_RobotArmQVVD_v q(::dynamic_biped::msg::RobotArmQVVD::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_RobotArmQVVD_v(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmQVVD msg_;
};

class Init_RobotArmQVVD_header
{
public:
  Init_RobotArmQVVD_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmQVVD_q header(::dynamic_biped::msg::RobotArmQVVD::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArmQVVD_q(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmQVVD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotArmQVVD>()
{
  return dynamic_biped::msg::builder::Init_RobotArmQVVD_header();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_QVVD__BUILDER_HPP_
