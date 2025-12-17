// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamic_biped:msg/WalkCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/walk_command.h"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__WALK_COMMAND__STRUCT_H_
#define DYNAMIC_BIPED__MSG__DETAIL__WALK_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WalkCommand in the package dynamic_biped.
/**
  * mode: 0->PositionCommand | 1->VelocityCommand
 */
typedef struct dynamic_biped__msg__WalkCommand
{
  uint8_t mode;
  rosidl_runtime_c__double__Sequence values;
} dynamic_biped__msg__WalkCommand;

// Struct for a sequence of dynamic_biped__msg__WalkCommand.
typedef struct dynamic_biped__msg__WalkCommand__Sequence
{
  dynamic_biped__msg__WalkCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamic_biped__msg__WalkCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__WALK_COMMAND__STRUCT_H_
