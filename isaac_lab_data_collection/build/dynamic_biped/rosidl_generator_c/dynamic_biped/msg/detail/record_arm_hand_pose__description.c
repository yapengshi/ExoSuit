// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:msg/RecordArmHandPose.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/msg/detail/record_arm_hand_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__msg__RecordArmHandPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x24, 0x4d, 0xb9, 0x7f, 0x5a, 0x25, 0xfd,
      0x1e, 0xc4, 0x9a, 0xed, 0x76, 0xfd, 0x15, 0x53,
      0x2e, 0x84, 0x40, 0x23, 0x33, 0x89, 0x37, 0x16,
      0x6b, 0x4b, 0x81, 0x3d, 0xd8, 0x2f, 0x73, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dynamic_biped__msg__ArmHandPose__EXPECTED_HASH = {1, {
    0x29, 0xc7, 0x54, 0x92, 0x7d, 0x50, 0x89, 0x31,
    0x3e, 0xe2, 0x43, 0xa7, 0xde, 0x12, 0x2f, 0x91,
    0x86, 0x91, 0xaf, 0xa9, 0xe1, 0x8a, 0x64, 0xb9,
    0xab, 0x8c, 0x41, 0x02, 0xdb, 0x3d, 0xb8, 0x36,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dynamic_biped__msg__RecordArmHandPose__TYPE_NAME[] = "dynamic_biped/msg/RecordArmHandPose";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dynamic_biped__msg__ArmHandPose__TYPE_NAME[] = "dynamic_biped/msg/ArmHandPose";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dynamic_biped__msg__RecordArmHandPose__FIELD_NAME__header[] = "header";
static char dynamic_biped__msg__RecordArmHandPose__FIELD_NAME__left_pose[] = "left_pose";
static char dynamic_biped__msg__RecordArmHandPose__FIELD_NAME__right_pose[] = "right_pose";

static rosidl_runtime_c__type_description__Field dynamic_biped__msg__RecordArmHandPose__FIELDS[] = {
  {
    {dynamic_biped__msg__RecordArmHandPose__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RecordArmHandPose__FIELD_NAME__left_pose, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamic_biped__msg__ArmHandPose__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__RecordArmHandPose__FIELD_NAME__right_pose, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamic_biped__msg__ArmHandPose__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamic_biped__msg__RecordArmHandPose__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__msg__ArmHandPose__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__msg__RecordArmHandPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__msg__RecordArmHandPose__TYPE_NAME, 35, 35},
      {dynamic_biped__msg__RecordArmHandPose__FIELDS, 3, 3},
    },
    {dynamic_biped__msg__RecordArmHandPose__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dynamic_biped__msg__ArmHandPose__EXPECTED_HASH, dynamic_biped__msg__ArmHandPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dynamic_biped__msg__ArmHandPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ArmHandPose left_pose\n"
  "ArmHandPose right_pose";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__msg__RecordArmHandPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__msg__RecordArmHandPose__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__msg__RecordArmHandPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__msg__RecordArmHandPose__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamic_biped__msg__ArmHandPose__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
