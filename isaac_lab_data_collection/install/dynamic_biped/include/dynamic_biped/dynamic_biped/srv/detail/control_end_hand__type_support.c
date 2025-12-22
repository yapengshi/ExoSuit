// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:srv/ControlEndHand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/srv/detail/control_end_hand__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/srv/detail/control_end_hand__functions.h"
#include "dynamic_biped/srv/detail/control_end_hand__struct.h"


// Include directives for member types
// Member `left_hand_position`
// Member `right_hand_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__srv__ControlEndHand_Request__init(message_memory);
}

void dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_fini_function(void * message_memory)
{
  dynamic_biped__srv__ControlEndHand_Request__fini(message_memory);
}

size_t dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Request__left_hand_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Request__left_hand_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Request__left_hand_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Request__left_hand_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Request__left_hand_position(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Request__left_hand_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Request__left_hand_position(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Request__left_hand_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Request__right_hand_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Request__right_hand_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Request__right_hand_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Request__right_hand_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Request__right_hand_position(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Request__right_hand_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Request__right_hand_position(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Request__right_hand_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_member_array[2] = {
  {
    "left_hand_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__srv__ControlEndHand_Request, left_hand_position),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Request__left_hand_position,  // size() function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Request__left_hand_position,  // get_const(index) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Request__left_hand_position,  // get(index) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Request__left_hand_position,  // fetch(index, &value) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Request__left_hand_position,  // assign(index, value) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Request__left_hand_position  // resize(index) function pointer
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
    offsetof(dynamic_biped__srv__ControlEndHand_Request, right_hand_position),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Request__right_hand_position,  // size() function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Request__right_hand_position,  // get_const(index) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Request__right_hand_position,  // get(index) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Request__right_hand_position,  // fetch(index, &value) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Request__right_hand_position,  // assign(index, value) function pointer
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Request__right_hand_position  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_members = {
  "dynamic_biped__srv",  // message namespace
  "ControlEndHand_Request",  // message name
  2,  // number of fields
  sizeof(dynamic_biped__srv__ControlEndHand_Request),
  false,  // has_any_key_member_
  dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_member_array,  // message members
  dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_type_support_handle = {
  0,
  &dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Request__get_type_hash,
  &dynamic_biped__srv__ControlEndHand_Request__get_type_description,
  &dynamic_biped__srv__ControlEndHand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Request)() {
  if (!dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__functions.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__srv__ControlEndHand_Response__init(message_memory);
}

void dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_fini_function(void * message_memory)
{
  dynamic_biped__srv__ControlEndHand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__srv__ControlEndHand_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_members = {
  "dynamic_biped__srv",  // message namespace
  "ControlEndHand_Response",  // message name
  1,  // number of fields
  sizeof(dynamic_biped__srv__ControlEndHand_Response),
  false,  // has_any_key_member_
  dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_member_array,  // message members
  dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle = {
  0,
  &dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Response__get_type_hash,
  &dynamic_biped__srv__ControlEndHand_Response__get_type_description,
  &dynamic_biped__srv__ControlEndHand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Response)() {
  if (!dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__functions.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "dynamic_biped/srv/control_end_hand.h"
// Member `request`
// Member `response`
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__srv__ControlEndHand_Event__init(message_memory);
}

void dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_fini_function(void * message_memory)
{
  dynamic_biped__srv__ControlEndHand_Event__fini(message_memory);
}

size_t dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Event__request(
  const void * untyped_member)
{
  const dynamic_biped__srv__ControlEndHand_Request__Sequence * member =
    (const dynamic_biped__srv__ControlEndHand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Event__request(
  const void * untyped_member, size_t index)
{
  const dynamic_biped__srv__ControlEndHand_Request__Sequence * member =
    (const dynamic_biped__srv__ControlEndHand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Event__request(
  void * untyped_member, size_t index)
{
  dynamic_biped__srv__ControlEndHand_Request__Sequence * member =
    (dynamic_biped__srv__ControlEndHand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynamic_biped__srv__ControlEndHand_Request * item =
    ((const dynamic_biped__srv__ControlEndHand_Request *)
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Event__request(untyped_member, index));
  dynamic_biped__srv__ControlEndHand_Request * value =
    (dynamic_biped__srv__ControlEndHand_Request *)(untyped_value);
  *value = *item;
}

void dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynamic_biped__srv__ControlEndHand_Request * item =
    ((dynamic_biped__srv__ControlEndHand_Request *)
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Event__request(untyped_member, index));
  const dynamic_biped__srv__ControlEndHand_Request * value =
    (const dynamic_biped__srv__ControlEndHand_Request *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Event__request(
  void * untyped_member, size_t size)
{
  dynamic_biped__srv__ControlEndHand_Request__Sequence * member =
    (dynamic_biped__srv__ControlEndHand_Request__Sequence *)(untyped_member);
  dynamic_biped__srv__ControlEndHand_Request__Sequence__fini(member);
  return dynamic_biped__srv__ControlEndHand_Request__Sequence__init(member, size);
}

size_t dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Event__response(
  const void * untyped_member)
{
  const dynamic_biped__srv__ControlEndHand_Response__Sequence * member =
    (const dynamic_biped__srv__ControlEndHand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Event__response(
  const void * untyped_member, size_t index)
{
  const dynamic_biped__srv__ControlEndHand_Response__Sequence * member =
    (const dynamic_biped__srv__ControlEndHand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Event__response(
  void * untyped_member, size_t index)
{
  dynamic_biped__srv__ControlEndHand_Response__Sequence * member =
    (dynamic_biped__srv__ControlEndHand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynamic_biped__srv__ControlEndHand_Response * item =
    ((const dynamic_biped__srv__ControlEndHand_Response *)
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Event__response(untyped_member, index));
  dynamic_biped__srv__ControlEndHand_Response * value =
    (dynamic_biped__srv__ControlEndHand_Response *)(untyped_value);
  *value = *item;
}

void dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynamic_biped__srv__ControlEndHand_Response * item =
    ((dynamic_biped__srv__ControlEndHand_Response *)
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Event__response(untyped_member, index));
  const dynamic_biped__srv__ControlEndHand_Response * value =
    (const dynamic_biped__srv__ControlEndHand_Response *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Event__response(
  void * untyped_member, size_t size)
{
  dynamic_biped__srv__ControlEndHand_Response__Sequence * member =
    (dynamic_biped__srv__ControlEndHand_Response__Sequence *)(untyped_member);
  dynamic_biped__srv__ControlEndHand_Response__Sequence__fini(member);
  return dynamic_biped__srv__ControlEndHand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__srv__ControlEndHand_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(dynamic_biped__srv__ControlEndHand_Event, request),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Event__request,  // size() function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Event__request,  // get_const(index) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Event__request,  // get(index) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Event__request,  // fetch(index, &value) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Event__request,  // assign(index, value) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(dynamic_biped__srv__ControlEndHand_Event, response),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__size_function__ControlEndHand_Event__response,  // size() function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_const_function__ControlEndHand_Event__response,  // get_const(index) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__get_function__ControlEndHand_Event__response,  // get(index) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__fetch_function__ControlEndHand_Event__response,  // fetch(index, &value) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__assign_function__ControlEndHand_Event__response,  // assign(index, value) function pointer
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__resize_function__ControlEndHand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_members = {
  "dynamic_biped__srv",  // message namespace
  "ControlEndHand_Event",  // message name
  3,  // number of fields
  sizeof(dynamic_biped__srv__ControlEndHand_Event),
  false,  // has_any_key_member_
  dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_member_array,  // message members
  dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_type_support_handle = {
  0,
  &dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Event__get_type_hash,
  &dynamic_biped__srv__ControlEndHand_Event__get_type_description,
  &dynamic_biped__srv__ControlEndHand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Event)() {
  dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Request)();
  dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Response)();
  if (!dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_members = {
  "dynamic_biped__srv",  // service namespace
  "ControlEndHand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_type_support_handle,
  NULL,  // response message
  // dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle
  NULL  // event_message
  // dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle
};


static rosidl_service_type_support_t dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_type_support_handle = {
  0,
  &dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_members,
  get_service_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Request__rosidl_typesupport_introspection_c__ControlEndHand_Request_message_type_support_handle,
  &dynamic_biped__srv__ControlEndHand_Response__rosidl_typesupport_introspection_c__ControlEndHand_Response_message_type_support_handle,
  &dynamic_biped__srv__ControlEndHand_Event__rosidl_typesupport_introspection_c__ControlEndHand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamic_biped,
    srv,
    ControlEndHand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamic_biped,
    srv,
    ControlEndHand
  ),
  &dynamic_biped__srv__ControlEndHand__get_type_hash,
  &dynamic_biped__srv__ControlEndHand__get_type_description,
  &dynamic_biped__srv__ControlEndHand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand)(void) {
  if (!dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_type_support_handle.typesupport_identifier) {
    dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Event)()->data;
  }

  return &dynamic_biped__srv__detail__control_end_hand__rosidl_typesupport_introspection_c__ControlEndHand_service_type_support_handle;
}
