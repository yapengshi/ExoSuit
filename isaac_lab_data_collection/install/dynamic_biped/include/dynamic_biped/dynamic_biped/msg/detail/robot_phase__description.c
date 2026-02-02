// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/robot_phase__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__RobotPhase__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x1a, 0x96, 0xcf, 0xa5, 0xca, 0x07, 0xec,
      0x1e, 0xce, 0xda, 0x2d, 0x74, 0x04, 0xf8, 0x2e,
      0x43, 0x9b, 0x3c, 0xca, 0x49, 0x9d, 0xcf, 0xcd,
      0x8b, 0x86, 0x15, 0x0c, 0x85, 0x2d, 0x99, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamic_biped__msg__RobotPhase__TYPE_NAME[] = "dynamic_biped/msg/RobotPhase";

// Define type names, field names, and default values
static char dynamic_biped__msg__RobotPhase__FIELD_NAME__main_phase[] = "main_phase";
static char dynamic_biped__msg__RobotPhase__FIELD_NAME__sub_phase[] = "sub_phase";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__RobotPhase__FIELDS[] = {
  {
    {dynamic_biped__msg__RobotPhase__FIELD_NAME__main_phase, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotPhase__FIELD_NAME__sub_phase, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__msg__RobotPhase__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__RobotPhase__TYPE_NAME, 28, 28},
      {dynamic_biped__msg__RobotPhase__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 main_phase\n"
  "uint8 sub_phase";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__RobotPhase__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__RobotPhase__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__RobotPhase__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__RobotPhase__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
