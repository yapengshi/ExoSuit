// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/arm_hand_pose.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArmHandPose in the package dynamic_biped.
typedef struct dynamic_biped__msg__ArmHandPose
{
  double pos_xyz[3];
  double quat_xyzw[4];
  double joint_angles[7];
} dynamic_biped__msg__ArmHandPose;

// Struct for a sequence of dynamic_biped__msg__ArmHandPose.
typedef struct dynamic_biped__msg__ArmHandPose__Sequence
{
  dynamic_biped__msg__ArmHandPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__ArmHandPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__STRUCT_H_
