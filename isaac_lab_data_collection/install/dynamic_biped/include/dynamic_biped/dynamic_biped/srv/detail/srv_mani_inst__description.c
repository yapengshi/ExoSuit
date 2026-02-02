// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamic_biped:srv/SrvManiInst.idl
// generated code does not contain a copyright notice

#include "dynamic_biped/srv/detail/srv_mani_inst__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvManiInst__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0x10, 0x6d, 0xa5, 0x9f, 0x08, 0xc7, 0x95,
      0xd9, 0x1b, 0x0a, 0xe2, 0x94, 0x01, 0x0d, 0xb2,
      0x5d, 0xd3, 0x07, 0x82, 0xb7, 0x41, 0x33, 0xc2,
      0x5a, 0x96, 0x58, 0x8f, 0xff, 0x38, 0x51, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvManiInst_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x45, 0xf2, 0xd1, 0x92, 0x31, 0x4a, 0xb9,
      0xe8, 0x0b, 0x3b, 0x89, 0xf0, 0xa2, 0x17, 0x0b,
      0x09, 0x38, 0x5e, 0xa9, 0x43, 0x2c, 0xe3, 0xb8,
      0xb1, 0x8b, 0x7a, 0xf2, 0x1b, 0x37, 0x87, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvManiInst_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x80, 0xdf, 0x25, 0x83, 0xd8, 0xdd, 0x49,
      0xfa, 0xe2, 0x8d, 0x73, 0x59, 0x2b, 0x19, 0xb0,
      0xc8, 0x82, 0xd8, 0x95, 0x7c, 0x32, 0x26, 0xd3,
      0xe5, 0xca, 0x7c, 0x78, 0x43, 0x1f, 0x4d, 0xbf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvManiInst_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x4f, 0xa4, 0x4c, 0x7c, 0x06, 0xc6, 0x7f,
      0x91, 0x7c, 0x30, 0x8f, 0x05, 0x3b, 0x2d, 0xb7,
      0x94, 0x71, 0x41, 0x66, 0xa6, 0x79, 0x58, 0xae,
      0xde, 0x70, 0xb0, 0x2f, 0x4e, 0xb8, 0xa1, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dynamic_biped__srv__SrvManiInst__TYPE_NAME[] = "dynamic_biped/srv/SrvManiInst";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dynamic_biped__srv__SrvManiInst_Event__TYPE_NAME[] = "dynamic_biped/srv/SrvManiInst_Event";
static char dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME[] = "dynamic_biped/srv/SrvManiInst_Request";
static char dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME[] = "dynamic_biped/srv/SrvManiInst_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dynamic_biped__srv__SrvManiInst__FIELD_NAME__request_message[] = "request_message";
static char dynamic_biped__srv__SrvManiInst__FIELD_NAME__response_message[] = "response_message";
static char dynamic_biped__srv__SrvManiInst__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dynamic_biped__srv__SrvManiInst__FIELDS[] = {
  {
    {dynamic_biped__srv__SrvManiInst__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamic_biped__srv__SrvManiInst_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamic_biped__srv__SrvManiInst__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvManiInst__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__srv__SrvManiInst__TYPE_NAME, 29, 29},
      {dynamic_biped__srv__SrvManiInst__FIELDS, 3, 3},
    },
    {dynamic_biped__srv__SrvManiInst__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamic_biped__srv__SrvManiInst_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamic_biped__srv__SrvManiInst_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dynamic_biped__srv__SrvManiInst_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamic_biped__srv__SrvManiInst_Request__FIELD_NAME__intruction[] = "intruction";

static rosidl_runtime_c__type_description__Field dynamic_biped__srv__SrvManiInst_Request__FIELDS[] = {
  {
    {dynamic_biped__srv__SrvManiInst_Request__FIELD_NAME__intruction, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvManiInst_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME, 37, 37},
      {dynamic_biped__srv__SrvManiInst_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamic_biped__srv__SrvManiInst_Response__FIELD_NAME__state_res[] = "state_res";

static rosidl_runtime_c__type_description__Field dynamic_biped__srv__SrvManiInst_Response__FIELDS[] = {
  {
    {dynamic_biped__srv__SrvManiInst_Response__FIELD_NAME__state_res, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvManiInst_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME, 38, 38},
      {dynamic_biped__srv__SrvManiInst_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamic_biped__srv__SrvManiInst_Event__FIELD_NAME__info[] = "info";
static char dynamic_biped__srv__SrvManiInst_Event__FIELD_NAME__request[] = "request";
static char dynamic_biped__srv__SrvManiInst_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dynamic_biped__srv__SrvManiInst_Event__FIELDS[] = {
  {
    {dynamic_biped__srv__SrvManiInst_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamic_biped__srv__SrvManiInst_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvManiInst_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamic_biped__srv__SrvManiInst_Event__TYPE_NAME, 35, 35},
      {dynamic_biped__srv__SrvManiInst_Event__FIELDS, 3, 3},
    },
    {dynamic_biped__srv__SrvManiInst_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamic_biped__srv__SrvManiInst_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamic_biped__srv__SrvManiInst_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string intruction\n"
  "---\n"
  "int8 state_res";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvManiInst__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__srv__SrvManiInst__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvManiInst_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__srv__SrvManiInst_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvManiInst_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__srv__SrvManiInst_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvManiInst_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamic_biped__srv__SrvManiInst_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvManiInst__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__srv__SrvManiInst__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamic_biped__srv__SrvManiInst_Event__get_individual_type_description_source(NULL);
    sources[3] = *dynamic_biped__srv__SrvManiInst_Request__get_individual_type_description_source(NULL);
    sources[4] = *dynamic_biped__srv__SrvManiInst_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvManiInst_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__srv__SrvManiInst_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvManiInst_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__srv__SrvManiInst_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvManiInst_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamic_biped__srv__SrvManiInst_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamic_biped__srv__SrvManiInst_Request__get_individual_type_description_source(NULL);
    sources[3] = *dynamic_biped__srv__SrvManiInst_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
