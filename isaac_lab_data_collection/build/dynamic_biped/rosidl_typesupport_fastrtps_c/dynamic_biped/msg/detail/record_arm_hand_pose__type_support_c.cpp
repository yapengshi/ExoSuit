// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamic_biped:msg/RecordArmHandPose.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/record_arm_hand_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamic_biped/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamic_biped/msg/detail/record_arm_hand_pose__struct.h"
#include "dynamic_biped/msg/detail/record_arm_hand_pose__functions.h"
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

#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"  // left_pose, right_pose
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_dynamic_biped__msg__ArmHandPose(
  const dynamic_biped__msg__ArmHandPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dynamic_biped__msg__ArmHandPose(
  eprosima::fastcdr::Cdr & cdr,
  dynamic_biped__msg__ArmHandPose * ros_message);

size_t get_serialized_size_dynamic_biped__msg__ArmHandPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dynamic_biped__msg__ArmHandPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dynamic_biped__msg__ArmHandPose(
  const dynamic_biped__msg__ArmHandPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dynamic_biped__msg__ArmHandPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dynamic_biped__msg__ArmHandPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, msg, ArmHandPose)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dynamic_biped
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RecordArmHandPose__ros_msg_type = dynamic_biped__msg__RecordArmHandPose;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_dynamic_biped__msg__RecordArmHandPose(
  const dynamic_biped__msg__RecordArmHandPose * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: left_pose
  {
    cdr_serialize_dynamic_biped__msg__ArmHandPose(
      &ros_message->left_pose, cdr);
  }

  // Field name: right_pose
  {
    cdr_serialize_dynamic_biped__msg__ArmHandPose(
      &ros_message->right_pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_deserialize_dynamic_biped__msg__RecordArmHandPose(
  eprosima::fastcdr::Cdr & cdr,
  dynamic_biped__msg__RecordArmHandPose * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: left_pose
  {
    cdr_deserialize_dynamic_biped__msg__ArmHandPose(cdr, &ros_message->left_pose);
  }

  // Field name: right_pose
  {
    cdr_deserialize_dynamic_biped__msg__ArmHandPose(cdr, &ros_message->right_pose);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_dynamic_biped__msg__RecordArmHandPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RecordArmHandPose__ros_msg_type * ros_message = static_cast<const _RecordArmHandPose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: left_pose
  current_alignment += get_serialized_size_dynamic_biped__msg__ArmHandPose(
    &(ros_message->left_pose), current_alignment);

  // Field name: right_pose
  current_alignment += get_serialized_size_dynamic_biped__msg__ArmHandPose(
    &(ros_message->right_pose), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_dynamic_biped__msg__RecordArmHandPose(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: left_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dynamic_biped__msg__ArmHandPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dynamic_biped__msg__ArmHandPose(
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
    using DataType = dynamic_biped__msg__RecordArmHandPose;
    is_plain =
      (
      offsetof(DataType, right_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_key_dynamic_biped__msg__RecordArmHandPose(
  const dynamic_biped__msg__RecordArmHandPose * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: left_pose
  {
    cdr_serialize_key_dynamic_biped__msg__ArmHandPose(
      &ros_message->left_pose, cdr);
  }

  // Field name: right_pose
  {
    cdr_serialize_key_dynamic_biped__msg__ArmHandPose(
      &ros_message->right_pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_key_dynamic_biped__msg__RecordArmHandPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RecordArmHandPose__ros_msg_type * ros_message = static_cast<const _RecordArmHandPose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: left_pose
  current_alignment += get_serialized_size_key_dynamic_biped__msg__ArmHandPose(
    &(ros_message->left_pose), current_alignment);

  // Field name: right_pose
  current_alignment += get_serialized_size_key_dynamic_biped__msg__ArmHandPose(
    &(ros_message->right_pose), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_key_dynamic_biped__msg__RecordArmHandPose(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: left_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dynamic_biped__msg__ArmHandPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dynamic_biped__msg__ArmHandPose(
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
    using DataType = dynamic_biped__msg__RecordArmHandPose;
    is_plain =
      (
      offsetof(DataType, right_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RecordArmHandPose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dynamic_biped__msg__RecordArmHandPose * ros_message = static_cast<const dynamic_biped__msg__RecordArmHandPose *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dynamic_biped__msg__RecordArmHandPose(ros_message, cdr);
}

static bool _RecordArmHandPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dynamic_biped__msg__RecordArmHandPose * ros_message = static_cast<dynamic_biped__msg__RecordArmHandPose *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dynamic_biped__msg__RecordArmHandPose(cdr, ros_message);
}

static uint32_t _RecordArmHandPose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamic_biped__msg__RecordArmHandPose(
      untyped_ros_message, 0));
}

static size_t _RecordArmHandPose__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamic_biped__msg__RecordArmHandPose(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RecordArmHandPose = {
  "dynamic_biped::msg",
  "RecordArmHandPose",
  _RecordArmHandPose__cdr_serialize,
  _RecordArmHandPose__cdr_deserialize,
  _RecordArmHandPose__get_serialized_size,
  _RecordArmHandPose__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RecordArmHandPose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RecordArmHandPose,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RecordArmHandPose__get_type_hash,
  &dynamic_biped__msg__RecordArmHandPose__get_type_description,
  &dynamic_biped__msg__RecordArmHandPose__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, msg, RecordArmHandPose)() {
  return &_RecordArmHandPose__type_support;
}

#if defined(__cplusplus)
}
#endif
