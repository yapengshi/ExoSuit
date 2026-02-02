// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from dynamic_biped:srv/ChangeAMBACCtrlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/change_ambac_ctrl_mode.h"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__TYPE_SUPPORT_H_
#define DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "dynamic_biped/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  dynamic_biped,
  srv,
  ChangeAMBACCtrlMode_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  dynamic_biped,
  srv,
  ChangeAMBACCtrlMode_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  dynamic_biped,
  srv,
  ChangeAMBACCtrlMode_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  dynamic_biped,
  srv,
  ChangeAMBACCtrlMode
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  dynamic_biped,
  srv,
  ChangeAMBACCtrlMode
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  dynamic_biped,
  srv,
  ChangeAMBACCtrlMode
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__TYPE_SUPPORT_H_
