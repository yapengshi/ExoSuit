// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:msg/QuaternionArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_biped/msg/detail/quaternion_array__functions.h"
#include "dynamic_biped/msg/detail/quaternion_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_biped
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void QuaternionArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_biped::msg::QuaternionArray(_init);
}

void QuaternionArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_biped::msg::QuaternionArray *>(message_memory);
  typed_message->~QuaternionArray();
}

size_t size_function__QuaternionArray__quaternions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuaternionArray__quaternions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return &member[index];
}

void * get_function__QuaternionArray__quaternions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuaternionArray__quaternions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Quaternion *>(
    get_const_function__QuaternionArray__quaternions(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Quaternion *>(untyped_value);
  value = item;
}

void assign_function__QuaternionArray__quaternions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Quaternion *>(
    get_function__QuaternionArray__quaternions(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Quaternion *>(untyped_value);
  item = value;
}

void resize_function__QuaternionArray__quaternions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QuaternionArray_message_member_array[1] = {
  {
    "quaternions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::QuaternionArray, quaternions),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuaternionArray__quaternions,  // size() function pointer
    get_const_function__QuaternionArray__quaternions,  // get_const(index) function pointer
    get_function__QuaternionArray__quaternions,  // get(index) function pointer
    fetch_function__QuaternionArray__quaternions,  // fetch(index, &value) function pointer
    assign_function__QuaternionArray__quaternions,  // assign(index, value) function pointer
    resize_function__QuaternionArray__quaternions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QuaternionArray_message_members = {
  "dynamic_biped::msg",  // message namespace
  "QuaternionArray",  // message name
  1,  // number of fields
  sizeof(dynamic_biped::msg::QuaternionArray),
  false,  // has_any_key_member_
  QuaternionArray_message_member_array,  // message members
  QuaternionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  QuaternionArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QuaternionArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QuaternionArray_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__QuaternionArray__get_type_hash,
  &dynamic_biped__msg__QuaternionArray__get_type_description,
  &dynamic_biped__msg__QuaternionArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamic_biped


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::msg::QuaternionArray>()
{
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::QuaternionArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, msg, QuaternionArray)() {
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::QuaternionArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
