// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RobotHandPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_hand_position.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'left_hand_position'
// Member 'right_hand_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotHandPosition in the package dynamic_biped.
typedef struct dynamic_biped__msg__RobotHandPosition
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence left_hand_position;
  rosidl_runtime_c__uint8__Sequence right_hand_position;
} dynamic_biped__msg__RobotHandPosition;

// Struct for a sequence of dynamic_biped__msg__RobotHandPosition.
typedef struct dynamic_biped__msg__RobotHandPosition__Sequence
{
  dynamic_biped__msg__RobotHandPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RobotHandPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__STRUCT_H_
