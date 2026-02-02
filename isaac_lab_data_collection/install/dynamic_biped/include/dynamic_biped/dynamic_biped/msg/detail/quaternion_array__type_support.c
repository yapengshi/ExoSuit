// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamic_biped:msg/QuaternionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamic_biped/msg/detail/quaternion_array__rosidl_typesupport_introspection_c.h"
#include "dynamic_biped/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamic_biped/msg/detail/quaternion_array__functions.h"
#include "dynamic_biped/msg/detail/quaternion_array__struct.h"


// Include directives for member types
// Member `quaternions`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternions`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamic_biped__msg__QuaternionArray__init(message_memory);
}

void dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_fini_function(void * message_memory)
{
  dynamic_biped__msg__QuaternionArray__fini(message_memory);
}

size_t dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__size_function__QuaternionArray__quaternions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__get_const_function__QuaternionArray__quaternions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__get_function__QuaternionArray__quaternions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__fetch_function__QuaternionArray__quaternions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Quaternion * item =
    ((const geometry_msgs__msg__Quaternion *)
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__get_const_function__QuaternionArray__quaternions(untyped_member, index));
  geometry_msgs__msg__Quaternion * value =
    (geometry_msgs__msg__Quaternion *)(untyped_value);
  *value = *item;
}

void dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__assign_function__QuaternionArray__quaternions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Quaternion * item =
    ((geometry_msgs__msg__Quaternion *)
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__get_function__QuaternionArray__quaternions(untyped_member, index));
  const geometry_msgs__msg__Quaternion * value =
    (const geometry_msgs__msg__Quaternion *)(untyped_value);
  *item = *value;
}

bool dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__resize_function__QuaternionArray__quaternions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  geometry_msgs__msg__Quaternion__Sequence__fini(member);
  return geometry_msgs__msg__Quaternion__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_member_array[1] = {
  {
    "quaternions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_biped__msg__QuaternionArray, quaternions),  // bytes offset in struct
    NULL,  // default value
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__size_function__QuaternionArray__quaternions,  // size() function pointer
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__get_const_function__QuaternionArray__quaternions,  // get_const(index) function pointer
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__get_function__QuaternionArray__quaternions,  // get(index) function pointer
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__fetch_function__QuaternionArray__quaternions,  // fetch(index, &value) function pointer
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__assign_function__QuaternionArray__quaternions,  // assign(index, value) function pointer
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__resize_function__QuaternionArray__quaternions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_members = {
  "dynamic_biped__msg",  // message namespace
  "QuaternionArray",  // message name
  1,  // number of fields
  sizeof(dynamic_biped__msg__QuaternionArray),
  false,  // has_any_key_member_
  dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_member_array,  // message members
  dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_type_support_handle = {
  0,
  &dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_members,
  get_message_typesupport_handle_function,
  &dynamic_biped__msg__QuaternionArray__get_type_hash,
  &dynamic_biped__msg__QuaternionArray__get_type_description,
  &dynamic_biped__msg__QuaternionArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamic_biped
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, msg, QuaternionArray)() {
  dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_type_support_handle.typesupport_identifier) {
    dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamic_biped__msg__QuaternionArray__rosidl_typesupport_introspection_c__QuaternionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
