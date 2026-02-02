// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__ArmHandPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0xc7, 0x54, 0x92, 0x7d, 0x50, 0x89, 0x31,
      0x3e, 0xe2, 0x43, 0xa7, 0xde, 0x12, 0x2f, 0x91,
      0x86, 0x91, 0xaf, 0xa9, 0xe1, 0x8a, 0x64, 0xb9,
      0xab, 0x8c, 0x41, 0x02, 0xdb, 0x3d, 0xb8, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamic_biped__msg__ArmHandPose__TYPE_NAME[] = "dynamic_biped/msg/ArmHandPose";

// Define type names, field names, and default values
static char dynamic_biped__msg__ArmHandPose__FIELD_NAME__pos_xyz[] = "pos_xyz";
static char dynamic_biped__msg__ArmHandPose__FIELD_NAME__quat_xyzw[] = "quat_xyzw";
static char dynamic_biped__msg__ArmHandPose__FIELD_NAME__joint_angles[] = "joint_angles";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__ArmHandPose__FIELDS[] = {
  {
    {dynamic_biped__msg__ArmHandPose__FIELD_NAME__pos_xyz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ArmHandPose__FIELD_NAME__quat_xyzw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ArmHandPose__FIELD_NAME__joint_angles, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__msg__ArmHandPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__ArmHandPose__TYPE_NAME, 29, 29},
      {dynamic_biped__msg__ArmHandPose__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[3] pos_xyz\n"
  "float64[4] quat_xyzw\n"
  "\n"
  "float64[7] joint_angles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__ArmHandPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__ArmHandPose__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__ArmHandPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__ArmHandPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
