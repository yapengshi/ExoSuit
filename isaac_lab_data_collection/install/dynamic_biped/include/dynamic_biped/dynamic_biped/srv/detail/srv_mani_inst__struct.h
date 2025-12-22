// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:srv/SrvManiInst.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_mani_inst.h"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_MANI_INST__STRUCT_H_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_MANI_INST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'intruction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SrvManiInst in the package dynamic_biped.
typedef struct dynamic_biped__srv__SrvManiInst_Request
{
  rosidl_runtime_c__String intruction;
} dynamic_biped__srv__SrvManiInst_Request;

// Struct for a sequence of dynamic_biped__srv__SrvManiInst_Request.
typedef struct dynamic_biped__srv__SrvManiInst_Request__Sequence
{
  dynamic_biped__srv__SrvManiInst_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__SrvManiInst_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SrvManiInst in the package dynamic_biped.
typedef struct dynamic_biped__srv__SrvManiInst_Response
{
  int8_t state_res;
} dynamic_biped__srv__SrvManiInst_Response;

// Struct for a sequence of dynamic_biped__srv__SrvManiInst_Response.
typedef struct dynamic_biped__srv__SrvManiInst_Response__Sequence
{
  dynamic_biped__srv__SrvManiInst_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__SrvManiInst_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamic_biped__srv__SrvManiInst_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamic_biped__srv__SrvManiInst_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SrvManiInst in the package dynamic_biped.
typedef struct dynamic_biped__srv__SrvManiInst_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamic_biped__srv__SrvManiInst_Request__Sequence request;
  dynamic_biped__srv__SrvManiInst_Response__Sequence response;
} dynamic_biped__srv__SrvManiInst_Event;

// Struct for a sequence of dynamic_biped__srv__SrvManiInst_Event.
typedef struct dynamic_biped__srv__SrvManiInst_Event__Sequence
{
  dynamic_biped__srv__SrvManiInst_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__srv__SrvManiInst_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_MANI_INST__STRUCT_H_
