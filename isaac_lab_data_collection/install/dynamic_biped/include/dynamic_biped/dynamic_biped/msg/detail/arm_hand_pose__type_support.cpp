// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"
#include "dynamic_biped/msg/detail/arm_hand_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_biped
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmHandPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_biped::msg::ArmHandPose(_init);
}

void ArmHandPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_biped::msg::ArmHandPose *>(message_memory);
  typed_message->~ArmHandPose();
}

size_t size_function__ArmHandPose__pos_xyz(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ArmHandPose__pos_xyz(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmHandPose__pos_xyz(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmHandPose__pos_xyz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmHandPose__pos_xyz(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmHandPose__pos_xyz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmHandPose__pos_xyz(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmHandPose__quat_xyzw(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ArmHandPose__quat_xyzw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmHandPose__quat_xyzw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmHandPose__quat_xyzw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmHandPose__quat_xyzw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmHandPose__quat_xyzw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmHandPose__quat_xyzw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmHandPose__joint_angles(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmHandPose__joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmHandPose__joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmHandPose__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmHandPose__joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmHandPose__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmHandPose__joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmHandPose_message_member_array[3] = {
  {
    "pos_xyz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::ArmHandPose, pos_xyz),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmHandPose__pos_xyz,  // size() function pointer
    get_const_function__ArmHandPose__pos_xyz,  // get_const(index) function pointer
    get_function__ArmHandPose__pos_xyz,  // get(index) function pointer
    fetch_function__ArmHandPose__pos_xyz,  // fetch(index, &value) function pointer
    assign_function__ArmHandPose__pos_xyz,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quat_xyzw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::ArmHandPose, quat_xyzw),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmHandPose__quat_xyzw,  // size() function pointer
    get_const_function__ArmHandPose__quat_xyzw,  // get_const(index) function pointer
    get_function__ArmHandPose__quat_xyzw,  // get(index) function pointer
    fetch_function__ArmHandPose__quat_xyzw,  // fetch(index, &value) function pointer
    assign_function__ArmHandPose__quat_xyzw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped::msg::ArmHandPose, joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmHandPose__joint_angles,  // size() function pointer
    get_const_function__ArmHandPose__joint_angles,  // get_const(index) function pointer
    get_function__ArmHandPose__joint_angles,  // get(index) function pointer
    fetch_function__ArmHandPose__joint_angles,  // fetch(index, &value) function pointer
    assign_function__ArmHandPose__joint_angles,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmHandPose_message_members = {
  "dynamic_biped::msg",  // message namespace
  "ArmHandPose",  // message name
  3,  // number of fields
  sizeof(dynamic_biped::msg::ArmHandPose),
  false,  // has_any_key_member_
  ArmHandPose_message_member_array,  // message members
  ArmHandPose_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmHandPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmHandPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmHandPose_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__ArmHandPose__get_type_hash,
  &dynamic_biped__msg__ArmHandPose__get_type_description,
  &dynamic_biped__msg__ArmHandPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamic_biped


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::msg::ArmHandPose>()
{
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::ArmHandPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, msg, ArmHandPose)() {
  return &::dynamic_biped::msg::rosidl_typesupport_introspection_cpp::ArmHandPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
