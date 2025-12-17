// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/QuaternionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/quaternion_array.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/quaternion_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_QuaternionArray_quaternions
{
public:
  Init_QuaternionArray_quaternions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::msg::QuaternionArray quaternions(::dynamic_biped::msg::QuaternionArray::_quaternions_type arg)
  {
    msg_.quaternions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::QuaternionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::QuaternionArray>()
{
  return dynamic_biped::msg::builder::Init_QuaternionArray_quaternions();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__BUILDER_HPP_
