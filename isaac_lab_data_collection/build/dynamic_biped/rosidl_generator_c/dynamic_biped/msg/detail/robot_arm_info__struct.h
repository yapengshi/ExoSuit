// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RobotArmInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_arm_info.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_INFO__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_INFO__STRUCT_H_

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
// Member 'q'
// Member 'v'
// Member 'vd'
// Member 'tau'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotArmInfo in the package dynamic_biped.
typedef struct dynamic_biped__msg__RobotArmInfo
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence q;
  rosidl_runtime_c__double__Sequence v;
  rosidl_runtime_c__double__Sequence vd;
  rosidl_runtime_c__double__Sequence tau;
} dynamic_biped__msg__RobotArmInfo;

// Struct for a sequence of dynamic_biped__msg__RobotArmInfo.
typedef struct dynamic_biped__msg__RobotArmInfo__Sequence
{
  dynamic_biped__msg__RobotArmInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RobotArmInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_ARM_INFO__STRUCT_H_
