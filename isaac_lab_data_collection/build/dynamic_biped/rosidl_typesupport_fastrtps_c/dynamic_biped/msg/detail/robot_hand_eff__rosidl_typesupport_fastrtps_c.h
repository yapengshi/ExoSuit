// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from dynamic_biped:msg/RobotHandEff.idl
// generated code does not contain a copyright notice
#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_biped/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamic_biped/msg/detail/robot_hand_eff__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_dynamic_biped__msg__RobotHandEff(
  const dynamic_biped__msg__RobotHandEff * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_deserialize_dynamic_biped__msg__RobotHandEff(
  eprosima::fastcdr::Cdr &,
  dynamic_biped__msg__RobotHandEff * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_dynamic_biped__msg__RobotHandEff(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_dynamic_biped__msg__RobotHandEff(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
bool cdr_serialize_key_dynamic_biped__msg__RobotHandEff(
  const dynamic_biped__msg__RobotHandEff * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t get_serialized_size_key_dynamic_biped__msg__RobotHandEff(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
size_t max_serialized_size_key_dynamic_biped__msg__RobotHandEff(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, msg, RobotHandEff)();

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_EFF__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
