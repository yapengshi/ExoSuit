// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RobotHeadMotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_head_motion_data.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'joint_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotHeadMotionData in the package dynamic_biped.
typedef struct dynamic_biped__msg__RobotHeadMotionData
{
  rosidl_runtime_c__double__Sequence joint_data;
} dynamic_biped__msg__RobotHeadMotionData;

// Struct for a sequence of dynamic_biped__msg__RobotHeadMotionData.
typedef struct dynamic_biped__msg__RobotHeadMotionData__Sequence
{
  dynamic_biped__msg__RobotHeadMotionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RobotHeadMotionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__STRUCT_H_
