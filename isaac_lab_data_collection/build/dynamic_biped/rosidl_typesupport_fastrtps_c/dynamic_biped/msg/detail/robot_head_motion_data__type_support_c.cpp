// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamic_biped:msg/RobotHeadMotionData.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/robot_head_motion_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamic_biped/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamic_biped/msg/detail/robot_head_motion_data__struct.h"
#include "dynamic_biped/msg/detail/robot_head_motion_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // joint_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_data

// forward declare type support functions


using _RobotHeadMotionData__ros_msg_type = dynamic_biped__msg__RobotHeadMotionData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_dynamic_biped__msg__RobotHeadMotionData(
  const dynamic_biped__msg__RobotHeadMotionData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint_data
  {
    size_t size = ros_message->joint_data.size;
    auto array_ptr = ros_message->joint_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_deserialize_dynamic_biped__msg__RobotHeadMotionData(
  eprosima::fastcdr::Cdr & cdr,
  dynamic_biped__msg__RobotHeadMotionData * ros_message)
{
  // Field name: joint_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->joint_data.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_data);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_data, size)) {
      fprintf(stderr, "failed to create array for field 'joint_data'");
      return false;
    }
    auto array_ptr = ros_message->joint_data.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_dynamic_biped__msg__RobotHeadMotionData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotHeadMotionData__ros_msg_type * ros_message = static_cast<const _RobotHeadMotionData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint_data
  {
    size_t array_size = ros_message->joint_data.size;
    auto array_ptr = ros_message->joint_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_dynamic_biped__msg__RobotHeadMotionData(
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

  // Field name: joint_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamic_biped__msg__RobotHeadMotionData;
    is_plain =
      (
      offsetof(DataType, joint_data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_key_dynamic_biped__msg__RobotHeadMotionData(
  const dynamic_biped__msg__RobotHeadMotionData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint_data
  {
    size_t size = ros_message->joint_data.size;
    auto array_ptr = ros_message->joint_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_key_dynamic_biped__msg__RobotHeadMotionData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotHeadMotionData__ros_msg_type * ros_message = static_cast<const _RobotHeadMotionData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint_data
  {
    size_t array_size = ros_message->joint_data.size;
    auto array_ptr = ros_message->joint_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_key_dynamic_biped__msg__RobotHeadMotionData(
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
  // Field name: joint_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamic_biped__msg__RobotHeadMotionData;
    is_plain =
      (
      offsetof(DataType, joint_data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotHeadMotionData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dynamic_biped__msg__RobotHeadMotionData * ros_message = static_cast<const dynamic_biped__msg__RobotHeadMotionData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dynamic_biped__msg__RobotHeadMotionData(ros_message, cdr);
}

static bool _RobotHeadMotionData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dynamic_biped__msg__RobotHeadMotionData * ros_message = static_cast<dynamic_biped__msg__RobotHeadMotionData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dynamic_biped__msg__RobotHeadMotionData(cdr, ros_message);
}

static uint32_t _RobotHeadMotionData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamic_biped__msg__RobotHeadMotionData(
      untyped_ros_message, 0));
}

static size_t _RobotHeadMotionData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamic_biped__msg__RobotHeadMotionData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotHeadMotionData = {
  "dynamic_biped::msg",
  "RobotHeadMotionData",
  _RobotHeadMotionData__cdr_serialize,
  _RobotHeadMotionData__cdr_deserialize,
  _RobotHeadMotionData__get_serialized_size,
  _RobotHeadMotionData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotHeadMotionData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotHeadMotionData,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__RobotHeadMotionData__get_type_hash,
  &dynamic_biped__msg__RobotHeadMotionData__get_type_description,
  &dynamic_biped__msg__RobotHeadMotionData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, msg, RobotHeadMotionData)() {
  return &_RobotHeadMotionData__type_support;
}

#if defined(__cplusplus)
}
#endif
