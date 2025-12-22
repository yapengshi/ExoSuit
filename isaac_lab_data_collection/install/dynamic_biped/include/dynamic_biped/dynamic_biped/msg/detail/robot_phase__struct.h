// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_phase.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotPhase in the package dynamic_biped.
typedef struct dynamic_biped__msg__RobotPhase
{
  uint8_t main_phase;
  uint8_t sub_phase;
} dynamic_biped__msg__RobotPhase;

// Struct for a sequence of dynamic_biped__msg__RobotPhase.
typedef struct dynamic_biped__msg__RobotPhase__Sequence
{
  dynamic_biped__msg__RobotPhase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RobotPhase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__STRUCT_H_
