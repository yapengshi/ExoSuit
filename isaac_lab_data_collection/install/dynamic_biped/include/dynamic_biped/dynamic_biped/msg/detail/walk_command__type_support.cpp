// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:msg/WalkCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_biped/msg/detail/walk_command__functions.h"
#include "dynamic_biped/msg/detail/walk_command__struct.hpp"
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

void WalkCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_biped::msg::WalkCommand(_init);
}

void WalkCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_biped::msg::WalkCommand *>(message_memory);
  typed_message->~WalkCommand();
}

size_t size_function__WalkCommand__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WalkCommand__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WalkCommand__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WalkCommand__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WalkCommand__values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WalkCommand__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WalkCommand__values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WalkCommand__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WalkCommand_message_member_array[2] = {
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::WalkCommand, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::WalkCommand, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__WalkCommand__values,  // size() function pointer
    get_const_function__WalkCommand__values,  // get_const(index) function pointer
    get_function__WalkCommand__values,  // get(index) function pointer
    fetch_function__WalkCommand__values,  // fetch(index, &value) function pointer
    assign_function__WalkCommand__values,  // assign(index, value) function pointer
    resize_function__WalkCommand__values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WalkCommand_message_members = {
  "dynamic_biped::msg",  // message namespace
  "WalkCommand",  // message name
  2,  // number of fields
  sizeof(dynamic_biped::msg::WalkCommand),
  false,  // has_any_key_member_
  WalkCommand_message_member_array,  // message members
  WalkCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  WalkCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WalkCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WalkCommand_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__WalkCommand__get_type_hash,
  &dynamic_biped__msg__WalkCommand__get_type_description,
  &dynamic_biped__msg__WalkCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamic_biped


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::msg::WalkCommand>()
{
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::WalkCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, msg, WalkCommand)() {
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::WalkCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
