// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:msg/WalkCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/msg/detail/walk_command__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/msg/detail/walk_command__functions.h"
#include "dynamic_biped/msg/detail/walk_command__struct.h"


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__msg__WalkCommand__init(message_memory);
}

void dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_fini_function(void * message_memory)
{
  dynamic_biped__msg__WalkCommand__fini(message_memory);
}

size_t dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__size_function__WalkCommand__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__get_const_function__WalkCommand__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__get_function__WalkCommand__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__fetch_function__WalkCommand__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__get_const_function__WalkCommand__values(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__assign_function__WalkCommand__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__get_function__WalkCommand__values(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__resize_function__WalkCommand__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_member_array[2] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__WalkCommand, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__WalkCommand, values),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__size_function__WalkCommand__values,  // size() function pointer
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__get_const_function__WalkCommand__values,  // get_const(index) function pointer
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__get_function__WalkCommand__values,  // get(index) function pointer
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__fetch_function__WalkCommand__values,  // fetch(index, &value) function pointer
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__assign_function__WalkCommand__values,  // assign(index, value) function pointer
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__resize_function__WalkCommand__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_members = {
  "dynamic_biped__msg",  // message namespace
  "WalkCommand",  // message name
  2,  // number of fields
  sizeof(dynamic_biped__msg__WalkCommand),
  false,  // has_any_key_member_
  dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_member_array,  // message members
  dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_type_support_handle = {
  0,
  &dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__WalkCommand__get_type_hash,
  &dynamic_biped__msg__WalkCommand__get_type_description,
  &dynamic_biped__msg__WalkCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, msg, WalkCommand)() {
  if (!dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__msg__WalkCommand__rosidl_typesupport_introspection_c__WalkCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
