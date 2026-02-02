// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:srv/ChangeAMBACCtrlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/change_ambac_ctrl_mode.h"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__STRUCT_H_
#define DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeAMBACCtrlMode in the package dynamic_biped.
typedef struct dynamic_biped__srv__ChangeAMBACCtrlMode_Request
{
  bool control_mode;
} dynamic_biped__srv__ChangeAMBACCtrlMode_Request;

// Struct for a sequence of dynamic_biped__srv__ChangeAMBACCtrlMode_Request.
typedef struct dynamic_biped__srv__ChangeAMBACCtrlMode_Request__Sequence
{
  dynamic_biped__srv__ChangeAMBACCtrlMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__ChangeAMBACCtrlMode_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ChangeAMBACCtrlMode in the package dynamic_biped.
typedef struct dynamic_biped__srv__ChangeAMBACCtrlMode_Response
{
  bool result;
} dynamic_biped__srv__ChangeAMBACCtrlMode_Response;

// Struct for a sequence of dynamic_biped__srv__ChangeAMBACCtrlMode_Response.
typedef struct dynamic_biped__srv__ChangeAMBACCtrlMode_Response__Sequence
{
  dynamic_biped__srv__ChangeAMBACCtrlMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__ChangeAMBACCtrlMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamic_biped__srv__ChangeAMBACCtrlMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamic_biped__srv__ChangeAMBACCtrlMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ChangeAMBACCtrlMode in the package dynamic_biped.
typedef struct dynamic_biped__srv__ChangeAMBACCtrlMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamic_biped__srv__ChangeAMBACCtrlMode_Request__Sequence request;
  dynamic_biped__srv__ChangeAMBACCtrlMode_Response__Sequence response;
} dynamic_biped__srv__ChangeAMBACCtrlMode_Event;

// Struct for a sequence of dynamic_biped__srv__ChangeAMBACCtrlMode_Event.
typedef struct dynamic_biped__srv__ChangeAMBACCtrlMode_Event__Sequence
{
  dynamic_biped__srv__ChangeAMBACCtrlMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__ChangeAMBACCtrlMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__STRUCT_H_
