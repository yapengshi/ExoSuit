// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/WalkCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/walk_command.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__WALK_COMMAND__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__WALK_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/walk_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_WalkCommand_values
{
public:
  explicit Init_WalkCommand_values(::dynamic_biped::msg::WalkCommand & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::WalkCommand values(::dynamic_biped::msg::WalkCommand::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::WalkCommand msg_;
};

class Init_WalkCommand_mode
{
public:
  Init_WalkCommand_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WalkCommand_values mode(::dynamic_biped::msg::WalkCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_WalkCommand_values(msg_);
  }

private:
  ::dynamic_biped::msg::WalkCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::WalkCommand>()
{
  return dynamic_biped::msg::builder::Init_WalkCommand_mode();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__WALK_COMMAND__BUILDER_HPP_
