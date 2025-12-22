// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/RecordArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/record_arm_hand_pose.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__STRUCT_H_

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
// Member 'left_pose'
// Member 'right_pose'
#include "dynamic_biped/msg/detail/arm_hand_pose__struct.h"

/// Struct defined in msg/RecordArmHandPose in the package dynamic_biped.
typedef struct dynamic_biped__msg__RecordArmHandPose
{
  std_msgs__msg__Header header;
  dynamic_biped__msg__ArmHandPose left_pose;
  dynamic_biped__msg__ArmHandPose right_pose;
} dynamic_biped__msg__RecordArmHandPose;

// Struct for a sequence of dynamic_biped__msg__RecordArmHandPose.
typedef struct dynamic_biped__msg__RecordArmHandPose__Sequence
{
  dynamic_biped__msg__RecordArmHandPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__RecordArmHandPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__STRUCT_H_
