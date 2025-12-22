// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_torso_state.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_torso_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotTorsoState_rdd
{
public:
  explicit Init_RobotTorsoState_rdd(::dynamic_biped::msg::RobotTorsoState & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotTorsoState rdd(::dynamic_biped::msg::RobotTorsoState::_rdd_type arg)
  {
    msg_.rdd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotTorsoState msg_;
};

class Init_RobotTorsoState_rd
{
public:
  explicit Init_RobotTorsoState_rd(::dynamic_biped::msg::RobotTorsoState & msg)
  : msg_(msg)
  {}
  Init_RobotTorsoState_rdd rd(::dynamic_biped::msg::RobotTorsoState::_rd_type arg)
  {
    msg_.rd = std::move(arg);
    return Init_RobotTorsoState_rdd(msg_);
  }

private:
  ::dynamic_biped::msg::RobotTorsoState msg_;
};

class Init_RobotTorsoState_r
{
public:
  explicit Init_RobotTorsoState_r(::dynamic_biped::msg::RobotTorsoState & msg)
  : msg_(msg)
  {}
  Init_RobotTorsoState_rd r(::dynamic_biped::msg::RobotTorsoState::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_RobotTorsoState_rd(msg_);
  }

private:
  ::dynamic_biped::msg::RobotTorsoState msg_;
};

class Init_RobotTorsoState_torso_rdd
{
public:
  explicit Init_RobotTorsoState_torso_rdd(::dynamic_biped::msg::RobotTorsoState & msg)
  : msg_(msg)
  {}
  Init_RobotTorsoState_r torso_rdd(::dynamic_biped::msg::RobotTorsoState::_torso_rdd_type arg)
  {
    msg_.torso_rdd = std::move(arg);
    return Init_RobotTorsoState_r(msg_);
  }

private:
  ::dynamic_biped::msg::RobotTorsoState msg_;
};

class Init_RobotTorsoState_torso_rd
{
public:
  explicit Init_RobotTorsoState_torso_rd(::dynamic_biped::msg::RobotTorsoState & msg)
  : msg_(msg)
  {}
  Init_RobotTorsoState_torso_rdd torso_rd(::dynamic_biped::msg::RobotTorsoState::_torso_rd_type arg)
  {
    msg_.torso_rd = std::move(arg);
    return Init_RobotTorsoState_torso_rdd(msg_);
  }

private:
  ::dynamic_biped::msg::RobotTorsoState msg_;
};

class Init_RobotTorsoState_torso_r
{
public:
  Init_RobotTorsoState_torso_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTorsoState_torso_rd torso_r(::dynamic_biped::msg::RobotTorsoState::_torso_r_type arg)
  {
    msg_.torso_r = std::move(arg);
    return Init_RobotTorsoState_torso_rd(msg_);
  }

private:
  ::dynamic_biped::msg::RobotTorsoState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotTorsoState>()
{
  return dynamic_biped::msg::builder::Init_RobotTorsoState_torso_r();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__BUILDER_HPP_
