// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_torso_state.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'torso_r'
// Member 'torso_rd'
// Member 'torso_rdd'
// Member 'r'
// Member 'rd'
// Member 'rdd'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/RobotTorsoState in the package dynamic_biped.
typedef struct dynamic_biped__msg__RobotTorsoState
{
  geometry_msgs__msg__Vector3 torso_r;
  geometry_msgs__msg__Vector3 torso_rd;
  geometry_msgs__msg__Vector3 torso_rdd;
  geometry_msgs__msg__Vector3 r;
  geometry_msgs__msg__Vector3 rd;
  geometry_msgs__msg__Vector3 rdd;
} dynamic_biped__msg__RobotTorsoState;

// Struct for a sequence of dynamic_biped__msg__RobotTorsoState.
typedef struct dynamic_biped__msg__RobotTorsoState__Sequence
{
  dynamic_biped__msg__RobotTorsoState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RobotTorsoState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__STRUCT_H_
