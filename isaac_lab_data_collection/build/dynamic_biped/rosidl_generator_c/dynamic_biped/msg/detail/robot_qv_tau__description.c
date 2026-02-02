// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/RobotQVTau.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/robot_qv_tau__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__RobotQVTau__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x21, 0xe3, 0x04, 0x1d, 0x47, 0xc3, 0xfd,
      0xf9, 0xac, 0x17, 0x35, 0x53, 0xc8, 0xfa, 0x3c,
      0xcd, 0x75, 0x2c, 0x29, 0x54, 0x00, 0xdd, 0xb1,
      0xfd, 0x3f, 0xaa, 0x14, 0x0e, 0x1b, 0x5f, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamic_biped__msg__RobotQVTau__TYPE_NAME[] = "dynamic_biped/msg/RobotQVTau";

// Define type names, field names, and default values
static char dynamic_biped__msg__RobotQVTau__FIELD_NAME__q[] = "q";
static char dynamic_biped__msg__RobotQVTau__FIELD_NAME__v[] = "v";
static char dynamic_biped__msg__RobotQVTau__FIELD_NAME__tau[] = "tau";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__RobotQVTau__FIELDS[] = {
  {
    {dynamic_biped__msg__RobotQVTau__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotQVTau__FIELD_NAME__v, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotQVTau__FIELD_NAME__tau, 3, 3},
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
dynamic_biped__msg__RobotQVTau__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__RobotQVTau__TYPE_NAME, 28, 28},
      {dynamic_biped__msg__RobotQVTau__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] q\n"
  "float64[] v\n"
  "float64[] tau";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__RobotQVTau__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__RobotQVTau__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__RobotQVTau__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__RobotQVTau__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
