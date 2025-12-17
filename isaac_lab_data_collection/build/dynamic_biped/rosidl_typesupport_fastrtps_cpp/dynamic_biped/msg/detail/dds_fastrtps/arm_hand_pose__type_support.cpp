// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/arm_hand_pose__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"
#include "dynamic_biped/msg/detail/arm_hand_pose__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dynamic_biped
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
cdr_serialize(
  const dynamic_biped::msg::ArmHandPose & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_xyz
  {
    cdr << ros_message.pos_xyz;
  }

  // Member: quat_xyzw
  {
    cdr << ros_message.quat_xyzw;
  }

  // Member: joint_angles
  {
    cdr << ros_message.joint_angles;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamic_biped::msg::ArmHandPose & ros_message)
{
  // Member: pos_xyz
  {
    cdr >> ros_message.pos_xyz;
  }

  // Member: quat_xyzw
  {
    cdr >> ros_message.quat_xyzw;
  }

  // Member: joint_angles
  {
    cdr >> ros_message.joint_angles;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
get_serialized_size(
  const dynamic_biped::msg::ArmHandPose & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_xyz
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pos_xyz[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: quat_xyzw
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.quat_xyzw[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_angles
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
max_serialized_size_ArmHandPose(
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

  // Member: pos_xyz
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: quat_xyzw
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: joint_angles
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamic_biped::msg::ArmHandPose;
    is_plain =
      (
      offsetof(DataType, joint_angles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
cdr_serialize_key(
  const dynamic_biped::msg::ArmHandPose & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_xyz
  {
    cdr << ros_message.pos_xyz;
  }

  // Member: quat_xyzw
  {
    cdr << ros_message.quat_xyzw;
  }

  // Member: joint_angles
  {
    cdr << ros_message.joint_angles;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
get_serialized_size_key(
  const dynamic_biped::msg::ArmHandPose & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_xyz
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pos_xyz[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: quat_xyzw
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.quat_xyzw[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_angles
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamic_biped
max_serialized_size_key_ArmHandPose(
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

  // Member: pos_xyz
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: quat_xyzw
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_angles
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamic_biped::msg::ArmHandPose;
    is_plain =
      (
      offsetof(DataType, joint_angles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ArmHandPose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamic_biped::msg::ArmHandPose *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmHandPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamic_biped::msg::ArmHandPose *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmHandPose__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamic_biped::msg::ArmHandPose *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmHandPose__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmHandPose(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmHandPose__callbacks = {
  "dynamic_biped::msg",
  "ArmHandPose",
  _ArmHandPose__cdr_serialize,
  _ArmHandPose__cdr_deserialize,
  _ArmHandPose__get_serialized_size,
  _ArmHandPose__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ArmHandPose__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmHandPose__callbacks,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__ArmHandPose__get_type_hash,
  &dynamic_biped__msg__ArmHandPose__get_type_description,
  &dynamic_biped__msg__ArmHandPose__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynamic_biped

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::msg::ArmHandPose>()
{
  return &dynamic_biped::msg::typesupport_fastrtps_cpp::_ArmHandPose__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamic_biped, msg, ArmHandPose)() {
  return &dynamic_biped::msg::typesupport_fastrtps_cpp::_ArmHandPose__handle;
}

#ifdef __cplusplus
}
#endif
