// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/WalkCommand.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/walk_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__WalkCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x50, 0xef, 0x0a, 0x6b, 0xe6, 0x46, 0x94,
      0xa5, 0x0b, 0xbb, 0xba, 0x4a, 0x30, 0xb6, 0x22,
      0xd5, 0xa7, 0xf5, 0x9c, 0xa7, 0x21, 0x8a, 0x41,
      0x1d, 0xc4, 0x4b, 0x56, 0xf0, 0x6f, 0x31, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamic_biped__msg__WalkCommand__TYPE_NAME[] = "dynamic_biped/msg/WalkCommand";

// Define type names, field names, and default values
static char dynamic_biped__msg__WalkCommand__FIELD_NAME__mode[] = "mode";
static char dynamic_biped__msg__WalkCommand__FIELD_NAME__values[] = "values";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__WalkCommand__FIELDS[] = {
  {
    {dynamic_biped__msg__WalkCommand__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__WalkCommand__FIELD_NAME__values, 6, 6},
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
dynamic_biped__msg__WalkCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__WalkCommand__TYPE_NAME, 29, 29},
      {dynamic_biped__msg__WalkCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# mode: 0->PositionCommand | 1->VelocityCommand\n"
  "uint8 mode\n"
  "float64[] values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__WalkCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__WalkCommand__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__WalkCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__WalkCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
