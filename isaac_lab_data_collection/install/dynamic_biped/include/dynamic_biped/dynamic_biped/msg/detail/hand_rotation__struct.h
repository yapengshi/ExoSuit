// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/HandRotation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'quaternions'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/HandRotation in the package dynamic_biped.
typedef struct dynamic_biped__msg__HandRotation
{
  geometry_msgs__msg__Quaternion__Sequence quaternions;
} dynamic_biped__msg__HandRotation;

// Struct for a sequence of dynamic_biped__msg__HandRotation.
typedef struct dynamic_biped__msg__HandRotation__Sequence
{
  dynamic_biped__msg__HandRotation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__HandRotation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__STRUCT_H_
