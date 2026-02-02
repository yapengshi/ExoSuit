// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/HandRotation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/hand_rotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_HandRotation_quaternions
{
public:
  Init_HandRotation_quaternions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::msg::HandRotation quaternions(::dynamic_biped::msg::HandRotation::_quaternions_type arg)
  {
    msg_.quaternions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::HandRotation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::HandRotation>()
{
  return dynamic_biped::msg::builder::Init_HandRotation_quaternions();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__BUILDER_HPP_
