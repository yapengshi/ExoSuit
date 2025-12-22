// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_biped/msg/detail/robot_phase__functions.h"
#include "dynamic_biped/msg/detail/robot_phase__struct.hpp"
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

void RobotPhase_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_biped::msg::RobotPhase(_init);
}

void RobotPhase_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_biped::msg::RobotPhase *>(message_memory);
  typed_message->~RobotPhase();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotPhase_message_member_array[2] = {
  {
    "main_phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::RobotPhase, main_phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sub_phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::RobotPhase, sub_phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotPhase_message_members = {
  "dynamic_biped::msg",  // message namespace
  "RobotPhase",  // message name
  2,  // number of fields
  sizeof(dynamic_biped::msg::RobotPhase),
  false,  // has_any_key_member_
  RobotPhase_message_member_array,  // message members
  RobotPhase_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotPhase_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotPhase_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotPhase_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RobotPhase__get_type_hash,
  &dynamic_biped__msg__RobotPhase__get_type_description,
  &dynamic_biped__msg__RobotPhase__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamic_biped


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::msg::RobotPhase>()
{
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::RobotPhase_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, msg, RobotPhase)() {
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::RobotPhase_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
