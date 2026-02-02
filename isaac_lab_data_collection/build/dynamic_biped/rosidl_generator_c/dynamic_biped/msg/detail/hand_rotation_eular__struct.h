// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/HandRotationEular.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation_eular.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'euler_angles'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/HandRotationEular in the package dynamic_biped.
typedef struct dynamic_biped__msg__HandRotationEular
{
  geometry_msgs__msg__Vector3__Sequence euler_angles;
} dynamic_biped__msg__HandRotationEular;

// Struct for a sequence of dynamic_biped__msg__HandRotationEular.
typedef struct dynamic_biped__msg__HandRotationEular__Sequence
{
  dynamic_biped__msg__HandRotationEular * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__HandRotationEular__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__STRUCT_H_
