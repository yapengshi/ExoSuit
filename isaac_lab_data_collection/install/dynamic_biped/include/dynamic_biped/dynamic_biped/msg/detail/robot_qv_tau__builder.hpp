// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotQVTau.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_qv_tau.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_QV_TAU__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_QV_TAU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_qv_tau__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotQVTau_tau
{
public:
  explicit Init_RobotQVTau_tau(::dynamic_biped::msg::RobotQVTau & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotQVTau tau(::dynamic_biped::msg::RobotQVTau::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotQVTau msg_;
};

class Init_RobotQVTau_v
{
public:
  explicit Init_RobotQVTau_v(::dynamic_biped::msg::RobotQVTau & msg)
  : msg_(msg)
  {}
  Init_RobotQVTau_tau v(::dynamic_biped::msg::RobotQVTau::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_RobotQVTau_tau(msg_);
  }

private:
  ::dynamic_biped::msg::RobotQVTau msg_;
};

class Init_RobotQVTau_q
{
public:
  Init_RobotQVTau_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotQVTau_v q(::dynamic_biped::msg::RobotQVTau::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_RobotQVTau_v(msg_);
  }

private:
  ::dynamic_biped::msg::RobotQVTau msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotQVTau>()
{
  return dynamic_biped::msg::builder::Init_RobotQVTau_q();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_QV_TAU__BUILDER_HPP_
