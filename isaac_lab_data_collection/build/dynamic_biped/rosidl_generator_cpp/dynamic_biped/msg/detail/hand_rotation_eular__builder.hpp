// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/HandRotationEular.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation_eular.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/hand_rotation_eular__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_HandRotationEular_euler_angles
{
public:
  Init_HandRotationEular_euler_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::msg::HandRotationEular euler_angles(::dynamic_biped::msg::HandRotationEular::_euler_angles_type arg)
  {
    msg_.euler_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::HandRotationEular msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::HandRotationEular>()
{
  return dynamic_biped::msg::builder::Init_HandRotationEular_euler_angles();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__BUILDER_HPP_
