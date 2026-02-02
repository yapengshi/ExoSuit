// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_phase.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/robot_phase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_RobotPhase_sub_phase
{
public:
  explicit Init_RobotPhase_sub_phase(::dynamic_biped::msg::RobotPhase & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::RobotPhase sub_phase(::dynamic_biped::msg::RobotPhase::_sub_phase_type arg)
  {
    msg_.sub_phase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::RobotPhase msg_;
};

class Init_RobotPhase_main_phase
{
public:
  Init_RobotPhase_main_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPhase_sub_phase main_phase(::dynamic_biped::msg::RobotPhase::_main_phase_type arg)
  {
    msg_.main_phase = std::move(arg);
    return Init_RobotPhase_sub_phase(msg_);
  }

private:
  ::dynamic_biped::msg::RobotPhase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::RobotPhase>()
{
  return dynamic_biped::msg::builder::Init_RobotPhase_main_phase();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__BUILDER_HPP_
