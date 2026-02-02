// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:msg/HandRotationEular.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/msg/detail/hand_rotation_eular__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/msg/detail/hand_rotation_eular__functions.h"
#include "dynamic_biped/msg/detail/hand_rotation_eular__struct.h"


// Include directives for member types
// Member `euler_angles`
#include "geometry_msgs/msg/vector3.h"
// Member `euler_angles`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__msg__HandRotationEular__init(message_memory);
}

void dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_fini_function(void * message_memory)
{
  dynamic_biped__msg__HandRotationEular__fini(message_memory);
}

size_t dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__size_function__HandRotationEular__euler_angles(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__get_const_function__HandRotationEular__euler_angles(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__get_function__HandRotationEular__euler_angles(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__fetch_function__HandRotationEular__euler_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__get_const_function__HandRotationEular__euler_angles(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__assign_function__HandRotationEular__euler_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__get_function__HandRotationEular__euler_angles(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__resize_function__HandRotationEular__euler_angles(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_member_array[1] = {
  {
    "euler_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__HandRotationEular, euler_angles),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__size_function__HandRotationEular__euler_angles,  // size() function pointer
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__get_const_function__HandRotationEular__euler_angles,  // get_const(index) function pointer
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__get_function__HandRotationEular__euler_angles,  // get(index) function pointer
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__fetch_function__HandRotationEular__euler_angles,  // fetch(index, &value) function pointer
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__assign_function__HandRotationEular__euler_angles,  // assign(index, value) function pointer
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__resize_function__HandRotationEular__euler_angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_members = {
  "dynamic_biped__msg",  // message namespace
  "HandRotationEular",  // message name
  1,  // number of fields
  sizeof(dynamic_biped__msg__HandRotationEular),
  false,  // has_any_key_member_
  dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_member_array,  // message members
  dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_type_support_handle = {
  0,
  &dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__HandRotationEular__get_type_hash,
  &dynamic_biped__msg__HandRotationEular__get_type_description,
  &dynamic_biped__msg__HandRotationEular__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, msg, HandRotationEular)() {
  dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__msg__HandRotationEular__rosidl_typesupport_introspection_c__HandRotationEular_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
