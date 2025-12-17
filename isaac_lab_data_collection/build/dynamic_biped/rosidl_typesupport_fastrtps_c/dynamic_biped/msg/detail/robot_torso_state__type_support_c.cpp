// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/robot_torso_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamic_biped/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamic_biped/msg/detail/robot_torso_state__struct.h"
#include "dynamic_biped/msg/detail/robot_torso_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // r, rd, rdd, torso_r, torso_rd, torso_rdd

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _RobotTorsoState__ros_msg_type = dynamic_biped__msg__RobotTorsoState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_dynamic_biped__msg__RobotTorsoState(
  const dynamic_biped__msg__RobotTorsoState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: torso_r
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->torso_r, cdr);
  }

  // Field name: torso_rd
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->torso_rd, cdr);
  }

  // Field name: torso_rdd
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->torso_rdd, cdr);
  }

  // Field name: r
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->r, cdr);
  }

  // Field name: rd
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->rd, cdr);
  }

  // Field name: rdd
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->rdd, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_deserialize_dynamic_biped__msg__RobotTorsoState(
  eprosima::fastcdr::Cdr & cdr,
  dynamic_biped__msg__RobotTorsoState * ros_message)
{
  // Field name: torso_r
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->torso_r);
  }

  // Field name: torso_rd
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->torso_rd);
  }

  // Field name: torso_rdd
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->torso_rdd);
  }

  // Field name: r
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->r);
  }

  // Field name: rd
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->rd);
  }

  // Field name: rdd
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->rdd);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_dynamic_biped__msg__RobotTorsoState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotTorsoState__ros_msg_type * ros_message = static_cast<const _RobotTorsoState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: torso_r
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->torso_r), current_alignment);

  // Field name: torso_rd
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->torso_rd), current_alignment);

  // Field name: torso_rdd
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->torso_rdd), current_alignment);

  // Field name: r
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->r), current_alignment);

  // Field name: rd
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->rd), current_alignment);

  // Field name: rdd
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->rdd), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_dynamic_biped__msg__RobotTorsoState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: torso_r
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: torso_rd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: torso_rdd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: r
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rdd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamic_biped__msg__RobotTorsoState;
    is_plain =
      (
      offsetof(DataType, rdd) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_key_dynamic_biped__msg__RobotTorsoState(
  const dynamic_biped__msg__RobotTorsoState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: torso_r
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->torso_r, cdr);
  }

  // Field name: torso_rd
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->torso_rd, cdr);
  }

  // Field name: torso_rdd
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->torso_rdd, cdr);
  }

  // Field name: r
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->r, cdr);
  }

  // Field name: rd
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->rd, cdr);
  }

  // Field name: rdd
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->rdd, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_key_dynamic_biped__msg__RobotTorsoState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotTorsoState__ros_msg_type * ros_message = static_cast<const _RobotTorsoState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: torso_r
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->torso_r), current_alignment);

  // Field name: torso_rd
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->torso_rd), current_alignment);

  // Field name: torso_rdd
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->torso_rdd), current_alignment);

  // Field name: r
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->r), current_alignment);

  // Field name: rd
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->rd), current_alignment);

  // Field name: rdd
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->rdd), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_key_dynamic_biped__msg__RobotTorsoState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: torso_r
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: torso_rd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: torso_rdd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: r
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rdd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamic_biped__msg__RobotTorsoState;
    is_plain =
      (
      offsetof(DataType, rdd) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotTorsoState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dynamic_biped__msg__RobotTorsoState * ros_message = static_cast<const dynamic_biped__msg__RobotTorsoState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dynamic_biped__msg__RobotTorsoState(ros_message, cdr);
}

static bool _RobotTorsoState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dynamic_biped__msg__RobotTorsoState * ros_message = static_cast<dynamic_biped__msg__RobotTorsoState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dynamic_biped__msg__RobotTorsoState(cdr, ros_message);
}

static uint32_t _RobotTorsoState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamic_biped__msg__RobotTorsoState(
      untyped_ros_message, 0));
}

static size_t _RobotTorsoState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamic_biped__msg__RobotTorsoState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotTorsoState = {
  "dynamic_biped::msg",
  "RobotTorsoState",
  _RobotTorsoState__cdr_serialize,
  _RobotTorsoState__cdr_deserialize,
  _RobotTorsoState__get_serialized_size,
  _RobotTorsoState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotTorsoState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotTorsoState,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RobotTorsoState__get_type_hash,
  &dynamic_biped__msg__RobotTorsoState__get_type_description,
  &dynamic_biped__msg__RobotTorsoState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, msg, RobotTorsoState)() {
  return &_RobotTorsoState__type_support;
}

#if defined(__cplusplus)
}
#endif
