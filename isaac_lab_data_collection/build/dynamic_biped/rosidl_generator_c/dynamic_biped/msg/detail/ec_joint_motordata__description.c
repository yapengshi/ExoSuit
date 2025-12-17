// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/ec_joint_motordata__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__ECJointMotordata__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x72, 0x37, 0x70, 0x85, 0x62, 0x70, 0xa6,
      0xb6, 0xf8, 0x57, 0xf8, 0x1e, 0xfd, 0x3e, 0x0d,
      0x05, 0xb7, 0xb4, 0xd5, 0x5e, 0x8f, 0x4d, 0xe8,
      0x02, 0x25, 0x9f, 0x4a, 0xfa, 0x49, 0x41, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamic_biped__msg__ECJointMotordata__TYPE_NAME[] = "dynamic_biped/msg/ECJointMotordata";

// Define type names, field names, and default values
static char dynamic_biped__msg__ECJointMotordata__FIELD_NAME__l_pos_pitch[] = "l_pos_pitch";
static char dynamic_biped__msg__ECJointMotordata__FIELD_NAME__l_pos_yaw[] = "l_pos_yaw";
static char dynamic_biped__msg__ECJointMotordata__FIELD_NAME__l_pos_end[] = "l_pos_end";
static char dynamic_biped__msg__ECJointMotordata__FIELD_NAME__r_pos_pitch[] = "r_pos_pitch";
static char dynamic_biped__msg__ECJointMotordata__FIELD_NAME__r_pos_yaw[] = "r_pos_yaw";
static char dynamic_biped__msg__ECJointMotordata__FIELD_NAME__r_pos_end[] = "r_pos_end";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__ECJointMotordata__FIELDS[] = {
  {
    {dynamic_biped__msg__ECJointMotordata__FIELD_NAME__l_pos_pitch, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ECJointMotordata__FIELD_NAME__l_pos_yaw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ECJointMotordata__FIELD_NAME__l_pos_end, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ECJointMotordata__FIELD_NAME__r_pos_pitch, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ECJointMotordata__FIELD_NAME__r_pos_yaw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ECJointMotordata__FIELD_NAME__r_pos_end, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__msg__ECJointMotordata__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__ECJointMotordata__TYPE_NAME, 34, 34},
      {dynamic_biped__msg__ECJointMotordata__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 l_pos_pitch \n"
  "int32 l_pos_yaw\n"
  "int32 l_pos_end\n"
  "int32 r_pos_pitch \n"
  "int32 r_pos_yaw\n"
  "int32 r_pos_end";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__ECJointMotordata__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__ECJointMotordata__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 101, 101},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__ECJointMotordata__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__ECJointMotordata__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
