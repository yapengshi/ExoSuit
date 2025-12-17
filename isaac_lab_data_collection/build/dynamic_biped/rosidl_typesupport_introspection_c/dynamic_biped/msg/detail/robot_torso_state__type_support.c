// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/msg/detail/robot_torso_state__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/msg/detail/robot_torso_state__functions.h"
#include "dynamic_biped/msg/detail/robot_torso_state__struct.h"


// Include directives for member types
// Member `torso_r`
// Member `torso_rd`
// Member `torso_rdd`
// Member `r`
// Member `rd`
// Member `rdd`
#include "geometry_msgs/msg/vector3.h"
// Member `torso_r`
// Member `torso_rd`
// Member `torso_rdd`
// Member `r`
// Member `rd`
// Member `rdd`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__msg__RobotTorsoState__init(message_memory);
}

void dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_fini_function(void * message_memory)
{
  dynamic_biped__msg__RobotTorsoState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[6] = {
  {
    "torso_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotTorsoState, torso_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torso_rd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotTorsoState, torso_rd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torso_rdd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotTorsoState, torso_rdd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotTorsoState, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotTorsoState, rd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rdd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__RobotTorsoState, rdd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_members = {
  "dynamic_biped__msg",  // message namespace
  "RobotTorsoState",  // message name
  6,  // number of fields
  sizeof(dynamic_biped__msg__RobotTorsoState),
  false,  // has_any_key_member_
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array,  // message members
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_type_support_handle = {
  0,
  &dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RobotTorsoState__get_type_hash,
  &dynamic_biped__msg__RobotTorsoState__get_type_description,
  &dynamic_biped__msg__RobotTorsoState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, msg, RobotTorsoState)() {
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__msg__RobotTorsoState__rosidl_typesupport_introspection_c__RobotTorsoState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
