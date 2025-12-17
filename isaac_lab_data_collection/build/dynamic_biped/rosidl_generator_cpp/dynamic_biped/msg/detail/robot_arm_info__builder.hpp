// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotArmInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_arm_info.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_INFO__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_arm_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotArmInfo_tau
{
public:
  explicit Init_RobotArmInfo_tau(::dynamic_biped::msg::RobotArmInfo & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotArmInfo tau(::dynamic_biped::msg::RobotArmInfo::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmInfo msg_;
};

class Init_RobotArmInfo_vd
{
public:
  explicit Init_RobotArmInfo_vd(::dynamic_biped::msg::RobotArmInfo & msg)
  : msg_(msg)
  {}
  Init_RobotArmInfo_tau vd(::dynamic_biped::msg::RobotArmInfo::_vd_type arg)
  {
    msg_.vd = std::move(arg);
    return Init_RobotArmInfo_tau(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmInfo msg_;
};

class Init_RobotArmInfo_v
{
public:
  explicit Init_RobotArmInfo_v(::dynamic_biped::msg::RobotArmInfo & msg)
  : msg_(msg)
  {}
  Init_RobotArmInfo_vd v(::dynamic_biped::msg::RobotArmInfo::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_RobotArmInfo_vd(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmInfo msg_;
};

class Init_RobotArmInfo_q
{
public:
  explicit Init_RobotArmInfo_q(::dynamic_biped::msg::RobotArmInfo & msg)
  : msg_(msg)
  {}
  Init_RobotArmInfo_v q(::dynamic_biped::msg::RobotArmInfo::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_RobotArmInfo_v(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmInfo msg_;
};

class Init_RobotArmInfo_header
{
public:
  Init_RobotArmInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmInfo_q header(::dynamic_biped::msg::RobotArmInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArmInfo_q(msg_);
  }

private:
  ::dynamic_biped::msg::RobotArmInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotArmInfo>()
{
  return dynamic_biped::msg::builder::Init_RobotArmInfo_header();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_INFO__BUILDER_HPP_
