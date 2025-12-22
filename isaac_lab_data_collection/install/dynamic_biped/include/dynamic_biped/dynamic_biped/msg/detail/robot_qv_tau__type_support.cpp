// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:msg/RobotQVTau.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_biped/msg/detail/robot_qv_tau__functions.h"
#include "dynamic_biped/msg/detail/robot_qv_tau__struct.hpp"
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

void RobotQVTau_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_biped::msg::RobotQVTau(_init);
}

void RobotQVTau_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_biped::msg::RobotQVTau *>(message_memory);
  typed_message->~RobotQVTau();
}

size_t size_function__RobotQVTau__q(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotQVTau__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotQVTau__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotQVTau__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RobotQVTau__q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RobotQVTau__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RobotQVTau__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RobotQVTau__q(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotQVTau__v(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotQVTau__v(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotQVTau__v(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotQVTau__v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RobotQVTau__v(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RobotQVTau__v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RobotQVTau__v(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RobotQVTau__v(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotQVTau__tau(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotQVTau__tau(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotQVTau__tau(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotQVTau__tau(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RobotQVTau__tau(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RobotQVTau__tau(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RobotQVTau__tau(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RobotQVTau__tau(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotQVTau_message_member_array[3] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::RobotQVTau, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotQVTau__q,  // size() function pointer
    get_const_function__RobotQVTau__q,  // get_const(index) function pointer
    get_function__RobotQVTau__q,  // get(index) function pointer
    fetch_function__RobotQVTau__q,  // fetch(index, &value) function pointer
    assign_function__RobotQVTau__q,  // assign(index, value) function pointer
    resize_function__RobotQVTau__q  // resize(index) function pointer
  },
  {
    "v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::RobotQVTau, v),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotQVTau__v,  // size() function pointer
    get_const_function__RobotQVTau__v,  // get_const(index) function pointer
    get_function__RobotQVTau__v,  // get(index) function pointer
    fetch_function__RobotQVTau__v,  // fetch(index, &value) function pointer
    assign_function__RobotQVTau__v,  // assign(index, value) function pointer
    resize_function__RobotQVTau__v  // resize(index) function pointer
  },
  {
    "tau",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::RobotQVTau, tau),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotQVTau__tau,  // size() function pointer
    get_const_function__RobotQVTau__tau,  // get_const(index) function pointer
    get_function__RobotQVTau__tau,  // get(index) function pointer
    fetch_function__RobotQVTau__tau,  // fetch(index, &value) function pointer
    assign_function__RobotQVTau__tau,  // assign(index, value) function pointer
    resize_function__RobotQVTau__tau  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotQVTau_message_members = {
  "dynamic_biped::msg",  // message namespace
  "RobotQVTau",  // message name
  3,  // number of fields
  sizeof(dynamic_biped::msg::RobotQVTau),
  false,  // has_any_key_member_
  RobotQVTau_message_member_array,  // message members
  RobotQVTau_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotQVTau_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotQVTau_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotQVTau_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RobotQVTau__get_type_hash,
  &dynamic_biped__msg__RobotQVTau__get_type_description,
  &dynamic_biped__msg__RobotQVTau__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamic_biped


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::msg::RobotQVTau>()
{
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::RobotQVTau_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, msg, RobotQVTau)() {
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::RobotQVTau_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
