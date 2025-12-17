// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/robot_torso_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__RobotTorsoState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x52, 0x72, 0xd7, 0xeb, 0x10, 0xc6, 0x6d,
      0x3c, 0xbe, 0x0d, 0x3d, 0x4e, 0x63, 0x6f, 0xef,
      0xee, 0x1b, 0x86, 0x0c, 0x93, 0xc5, 0x64, 0xa8,
      0x01, 0x85, 0xbe, 0x62, 0x78, 0x59, 0x5e, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char dynamic_biped__msg__RobotTorsoState__TYPE_NAME[] = "dynamic_biped/msg/RobotTorsoState";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char dynamic_biped__msg__RobotTorsoState__FIELD_NAME__torso_r[] = "torso_r";
static char dynamic_biped__msg__RobotTorsoState__FIELD_NAME__torso_rd[] = "torso_rd";
static char dynamic_biped__msg__RobotTorsoState__FIELD_NAME__torso_rdd[] = "torso_rdd";
static char dynamic_biped__msg__RobotTorsoState__FIELD_NAME__r[] = "r";
static char dynamic_biped__msg__RobotTorsoState__FIELD_NAME__rd[] = "rd";
static char dynamic_biped__msg__RobotTorsoState__FIELD_NAME__rdd[] = "rdd";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__RobotTorsoState__FIELDS[] = {
  {
    {dynamic_biped__msg__RobotTorsoState__FIELD_NAME__torso_r, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotTorsoState__FIELD_NAME__torso_rd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotTorsoState__FIELD_NAME__torso_rdd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotTorsoState__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotTorsoState__FIELD_NAME__rd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RobotTorsoState__FIELD_NAME__rdd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamic_biped__msg__RobotTorsoState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__msg__RobotTorsoState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__RobotTorsoState__TYPE_NAME, 33, 33},
      {dynamic_biped__msg__RobotTorsoState__FIELDS, 6, 6},
    },
    {dynamic_biped__msg__RobotTorsoState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Vector3 torso_r\n"
  "geometry_msgs/Vector3 torso_rd\n"
  "geometry_msgs/Vector3 torso_rdd\n"
  "geometry_msgs/Vector3 r\n"
  "geometry_msgs/Vector3 rd\n"
  "geometry_msgs/Vector3 rdd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__RobotTorsoState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__RobotTorsoState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 167, 167},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__RobotTorsoState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__RobotTorsoState__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
