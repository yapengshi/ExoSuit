// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:msg/RobotHandPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/msg/detail/robot_hand_position__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/msg/detail/robot_hand_position__functions.h"
#include "dynamic_biped/msg/detail/robot_hand_position__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `left_hand_position`
// Member `right_hand_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__msg__RobotHandPosition__init(message_memory);
}

void dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_fini_function(void * message_memory)
{
  dynamic_biped__msg__RobotHandPosition__fini(message_memory);
}

size_t dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__size_function__RobotHandPosition__left_hand_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_const_function__RobotHandPosition__left_hand_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_function__RobotHandPosition__left_hand_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__fetch_function__RobotHandPosition__left_hand_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_const_function__RobotHandPosition__left_hand_position(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__assign_function__RobotHandPosition__left_hand_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_function__RobotHandPosition__left_hand_position(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__resize_function__RobotHandPosition__left_hand_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__size_function__RobotHandPosition__right_hand_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_const_function__RobotHandPosition__right_hand_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_function__RobotHandPosition__right_hand_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__fetch_function__RobotHandPosition__right_hand_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_const_function__RobotHandPosition__right_hand_position(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__assign_function__RobotHandPosition__right_hand_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_function__RobotHandPosition__right_hand_position(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__resize_function__RobotHandPosition__right_hand_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotHandPosition, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_hand_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotHandPosition, left_hand_position),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__size_function__RobotHandPosition__left_hand_position,  // size() function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_const_function__RobotHandPosition__left_hand_position,  // get_const(index) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_function__RobotHandPosition__left_hand_position,  // get(index) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__fetch_function__RobotHandPosition__left_hand_position,  // fetch(index, &value) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__assign_function__RobotHandPosition__left_hand_position,  // assign(index, value) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__resize_function__RobotHandPosition__left_hand_position  // resize(index) function pointer
  },
  {
    "right_hand_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotHandPosition, right_hand_position),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__size_function__RobotHandPosition__right_hand_position,  // size() function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_const_function__RobotHandPosition__right_hand_position,  // get_const(index) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__get_function__RobotHandPosition__right_hand_position,  // get(index) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__fetch_function__RobotHandPosition__right_hand_position,  // fetch(index, &value) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__assign_function__RobotHandPosition__right_hand_position,  // assign(index, value) function pointer
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__resize_function__RobotHandPosition__right_hand_position  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_members = {
  "dynamic_biped__msg",  // message namespace
  "RobotHandPosition",  // message name
  3,  // number of fields
  sizeof(dynamic_biped__msg__RobotHandPosition),
  false,  // has_any_key_member_
  dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_member_array,  // message members
  dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_type_support_handle = {
  0,
  &dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RobotHandPosition__get_type_hash,
  &dynamic_biped__msg__RobotHandPosition__get_type_description,
  &dynamic_biped__msg__RobotHandPosition__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, msg, RobotHandPosition)() {
  dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__msg__RobotHandPosition__rosidl_typesupport_introspection_c__RobotHandPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
