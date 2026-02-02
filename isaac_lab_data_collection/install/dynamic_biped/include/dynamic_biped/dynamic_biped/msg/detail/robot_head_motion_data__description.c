// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/RobotHeadMotionData.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/robot_head_motion_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__RobotHeadMotionData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0xbb, 0xdc, 0x2b, 0x11, 0x7d, 0x98, 0xfb,
      0x60, 0xd3, 0xe3, 0x52, 0x91, 0x8d, 0x30, 0x64,
      0xe1, 0x4d, 0x7f, 0x47, 0x7d, 0xb7, 0x04, 0x3a,
      0x18, 0x5f, 0x57, 0x32, 0x9f, 0x74, 0x09, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamic_biped__msg__RobotHeadMotionData__TYPE_NAME[] = "dynamic_biped/msg/RobotHeadMotionData";

// Define type names, field names, and default values
static char dynamic_biped__msg__RobotHeadMotionData__FIELD_NAME__joint_data[] = "joint_data";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__RobotHeadMotionData__FIELDS[] = {
  {
    {dynamic_biped__msg__RobotHeadMotionData__FIELD_NAME__joint_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__msg__RobotHeadMotionData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__RobotHeadMotionData__TYPE_NAME, 37, 37},
      {dynamic_biped__msg__RobotHeadMotionData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] joint_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__RobotHeadMotionData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__RobotHeadMotionData__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__RobotHeadMotionData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__RobotHeadMotionData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
