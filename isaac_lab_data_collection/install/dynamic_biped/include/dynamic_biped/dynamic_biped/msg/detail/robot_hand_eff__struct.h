// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RobotHandEff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_hand_eff.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotHandEff in the package dynamic_biped.
typedef struct dynamic_biped__msg__RobotHandEff
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence data;
} dynamic_biped__msg__RobotHandEff;

// Struct for a sequence of dynamic_biped__msg__RobotHandEff.
typedef struct dynamic_biped__msg__RobotHandEff__Sequence
{
  dynamic_biped__msg__RobotHandEff * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RobotHandEff__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__STRUCT_H_
