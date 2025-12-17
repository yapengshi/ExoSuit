// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:srv/ControlEndHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/control_end_hand.h"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__STRUCT_H_
#define DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_hand_position'
// Member 'right_hand_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ControlEndHand in the package dynamic_biped.
typedef struct dynamic_biped__srv__ControlEndHand_Request
{
  rosidl_runtime_c__uint8__Sequence left_hand_position;
  rosidl_runtime_c__uint8__Sequence right_hand_position;
} dynamic_biped__srv__ControlEndHand_Request;

// Struct for a sequence of dynamic_biped__srv__ControlEndHand_Request.
typedef struct dynamic_biped__srv__ControlEndHand_Request__Sequence
{
  dynamic_biped__srv__ControlEndHand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__ControlEndHand_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ControlEndHand in the package dynamic_biped.
typedef struct dynamic_biped__srv__ControlEndHand_Response
{
  bool result;
} dynamic_biped__srv__ControlEndHand_Response;

// Struct for a sequence of dynamic_biped__srv__ControlEndHand_Response.
typedef struct dynamic_biped__srv__ControlEndHand_Response__Sequence
{
  dynamic_biped__srv__ControlEndHand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__ControlEndHand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamic_biped__srv__ControlEndHand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamic_biped__srv__ControlEndHand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ControlEndHand in the package dynamic_biped.
typedef struct dynamic_biped__srv__ControlEndHand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamic_biped__srv__ControlEndHand_Request__Sequence request;
  dynamic_biped__srv__ControlEndHand_Response__Sequence response;
} dynamic_biped__srv__ControlEndHand_Event;

// Struct for a sequence of dynamic_biped__srv__ControlEndHand_Event.
typedef struct dynamic_biped__srv__ControlEndHand_Event__Sequence
{
  dynamic_biped__srv__ControlEndHand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__ControlEndHand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__STRUCT_H_
