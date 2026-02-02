// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/QuaternionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/quaternion_array.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__STRUCT_H_

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

/// Struct defined in msg/QuaternionArray in the package dynamic_biped.
typedef struct dynamic_biped__msg__QuaternionArray
{
  geometry_msgs__msg__Quaternion__Sequence quaternions;
} dynamic_biped__msg__QuaternionArray;

// Struct for a sequence of dynamic_biped__msg__QuaternionArray.
typedef struct dynamic_biped__msg__QuaternionArray__Sequence
{
  dynamic_biped__msg__QuaternionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__QuaternionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__STRUCT_H_
