// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/msg/detail/arm_hand_pose__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"
#include "dynamic_biped/msg/detail/arm_hand_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__msg__ArmHandPose__init(message_memory);
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_fini_function(void * message_memory)
{
  dynamic_biped__msg__ArmHandPose__fini(message_memory);
}

size_t dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__size_function__ArmHandPose__pos_xyz(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__pos_xyz(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__pos_xyz(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__fetch_function__ArmHandPose__pos_xyz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__pos_xyz(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__assign_function__ArmHandPose__pos_xyz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__pos_xyz(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__size_function__ArmHandPose__quat_xyzw(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__quat_xyzw(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__quat_xyzw(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__fetch_function__ArmHandPose__quat_xyzw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__quat_xyzw(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__assign_function__ArmHandPose__quat_xyzw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__quat_xyzw(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__size_function__ArmHandPose__joint_angles(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__joint_angles(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__joint_angles(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__fetch_function__ArmHandPose__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__joint_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__assign_function__ArmHandPose__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__joint_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_member_array[3] = {
  {
    "pos_xyz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__ArmHandPose, pos_xyz),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__size_function__ArmHandPose__pos_xyz,  // size() function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__pos_xyz,  // get_const(index) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__pos_xyz,  // get(index) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__fetch_function__ArmHandPose__pos_xyz,  // fetch(index, &value) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__assign_function__ArmHandPose__pos_xyz,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quat_xyzw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__ArmHandPose, quat_xyzw),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__size_function__ArmHandPose__quat_xyzw,  // size() function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__quat_xyzw,  // get_const(index) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__quat_xyzw,  // get(index) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__fetch_function__ArmHandPose__quat_xyzw,  // fetch(index, &value) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__assign_function__ArmHandPose__quat_xyzw,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__ArmHandPose, joint_angles),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__size_function__ArmHandPose__joint_angles,  // size() function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_const_function__ArmHandPose__joint_angles,  // get_const(index) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__get_function__ArmHandPose__joint_angles,  // get(index) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__fetch_function__ArmHandPose__joint_angles,  // fetch(index, &value) function pointer
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__assign_function__ArmHandPose__joint_angles,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_members = {
  "dynamic_biped__msg",  // message namespace
  "ArmHandPose",  // message name
  3,  // number of fields
  sizeof(dynamic_biped__msg__ArmHandPose),
  false,  // has_any_key_member_
  dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_member_array,  // message members
  dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_type_support_handle = {
  0,
  &dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__ArmHandPose__get_type_hash,
  &dynamic_biped__msg__ArmHandPose__get_type_description,
  &dynamic_biped__msg__ArmHandPose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, msg, ArmHandPose)() {
  if (!dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__msg__ArmHandPose__rosidl_typesupport_introspection_c__ArmHandPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
