// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/arm_hand_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamic_biped__msg__ArmHandPose__init(dynamic_biped__msg__ArmHandPose * msg)
{
  if (!msg) {
    return false;
  }
  // pos_xyz
  // quat_xyzw
  // joint_angles
  return true;
}

void
dynamic_biped__msg__ArmHandPose__fini(dynamic_biped__msg__ArmHandPose * msg)
{
  if (!msg) {
    return;
  }
  // pos_xyz
  // quat_xyzw
  // joint_angles
}

bool
dynamic_biped__msg__ArmHandPose__are_equal(const dynamic_biped__msg__ArmHandPose * lhs, const dynamic_biped__msg__ArmHandPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_xyz
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pos_xyz[i] != rhs->pos_xyz[i]) {
      return false;
    }
  }
  // quat_xyzw
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->quat_xyzw[i] != rhs->quat_xyzw[i]) {
      return false;
    }
  }
  // joint_angles
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_angles[i] != rhs->joint_angles[i]) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__ArmHandPose__copy(
  const dynamic_biped__msg__ArmHandPose * input,
  dynamic_biped__msg__ArmHandPose * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_xyz
  for (size_t i = 0; i < 3; ++i) {
    output->pos_xyz[i] = input->pos_xyz[i];
  }
  // quat_xyzw
  for (size_t i = 0; i < 4; ++i) {
    output->quat_xyzw[i] = input->quat_xyzw[i];
  }
  // joint_angles
  for (size_t i = 0; i < 7; ++i) {
    output->joint_angles[i] = input->joint_angles[i];
  }
  return true;
}

dynamic_biped__msg__ArmHandPose *
dynamic_biped__msg__ArmHandPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__ArmHandPose * msg = (dynamic_biped__msg__ArmHandPose *)allocator.allocate(sizeof(dynamic_biped__msg__ArmHandPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__ArmHandPose));
  bool success = dynamic_biped__msg__ArmHandPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__ArmHandPose__destroy(dynamic_biped__msg__ArmHandPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__ArmHandPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__ArmHandPose__Sequence__init(dynamic_biped__msg__ArmHandPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__ArmHandPose * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__ArmHandPose *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__ArmHandPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__ArmHandPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__ArmHandPose__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynamic_biped__msg__ArmHandPose__Sequence__fini(dynamic_biped__msg__ArmHandPose__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynamic_biped__msg__ArmHandPose__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynamic_biped__msg__ArmHandPose__Sequence *
dynamic_biped__msg__ArmHandPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__ArmHandPose__Sequence * array = (dynamic_biped__msg__ArmHandPose__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__ArmHandPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__ArmHandPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__ArmHandPose__Sequence__destroy(dynamic_biped__msg__ArmHandPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__ArmHandPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__ArmHandPose__Sequence__are_equal(const dynamic_biped__msg__ArmHandPose__Sequence * lhs, const dynamic_biped__msg__ArmHandPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__ArmHandPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__ArmHandPose__Sequence__copy(
  const dynamic_biped__msg__ArmHandPose__Sequence * input,
  dynamic_biped__msg__ArmHandPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__ArmHandPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__ArmHandPose * data =
      (dynamic_biped__msg__ArmHandPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__ArmHandPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__ArmHandPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__ArmHandPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
