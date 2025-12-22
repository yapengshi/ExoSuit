// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/ec_joint_motordata.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ECJointMotordata in the package dynamic_biped.
typedef struct dynamic_biped__msg__ECJointMotordata
{
  int32_t l_pos_pitch;
  int32_t l_pos_yaw;
  int32_t l_pos_end;
  int32_t r_pos_pitch;
  int32_t r_pos_yaw;
  int32_t r_pos_end;
} dynamic_biped__msg__ECJointMotordata;

// Struct for a sequence of dynamic_biped__msg__ECJointMotordata.
typedef struct dynamic_biped__msg__ECJointMotordata__Sequence
{
  dynamic_biped__msg__ECJointMotordata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__ECJointMotordata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__STRUCT_H_
