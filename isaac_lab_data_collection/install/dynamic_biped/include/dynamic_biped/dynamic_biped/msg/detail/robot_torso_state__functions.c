// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/robot_torso_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `torso_r`
// Member `torso_rd`
// Member `torso_rdd`
// Member `r`
// Member `rd`
// Member `rdd`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
dynamic_biped__msg__RobotTorsoState__init(dynamic_biped__msg__RobotTorsoState * msg)
{
  if (!msg) {
    return false;
  }
  // torso_r
  if (!geometry_msgs__msg__Vector3__init(&msg->torso_r)) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
    return false;
  }
  // torso_rd
  if (!geometry_msgs__msg__Vector3__init(&msg->torso_rd)) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
    return false;
  }
  // torso_rdd
  if (!geometry_msgs__msg__Vector3__init(&msg->torso_rdd)) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
    return false;
  }
  // r
  if (!geometry_msgs__msg__Vector3__init(&msg->r)) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
    return false;
  }
  // rd
  if (!geometry_msgs__msg__Vector3__init(&msg->rd)) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
    return false;
  }
  // rdd
  if (!geometry_msgs__msg__Vector3__init(&msg->rdd)) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__msg__RobotTorsoState__fini(dynamic_biped__msg__RobotTorsoState * msg)
{
  if (!msg) {
    return;
  }
  // torso_r
  geometry_msgs__msg__Vector3__fini(&msg->torso_r);
  // torso_rd
  geometry_msgs__msg__Vector3__fini(&msg->torso_rd);
  // torso_rdd
  geometry_msgs__msg__Vector3__fini(&msg->torso_rdd);
  // r
  geometry_msgs__msg__Vector3__fini(&msg->r);
  // rd
  geometry_msgs__msg__Vector3__fini(&msg->rd);
  // rdd
  geometry_msgs__msg__Vector3__fini(&msg->rdd);
}

bool
dynamic_biped__msg__RobotTorsoState__are_equal(const dynamic_biped__msg__RobotTorsoState * lhs, const dynamic_biped__msg__RobotTorsoState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // torso_r
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->torso_r), &(rhs->torso_r)))
  {
    return false;
  }
  // torso_rd
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->torso_rd), &(rhs->torso_rd)))
  {
    return false;
  }
  // torso_rdd
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->torso_rdd), &(rhs->torso_rdd)))
  {
    return false;
  }
  // r
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r), &(rhs->r)))
  {
    return false;
  }
  // rd
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->rd), &(rhs->rd)))
  {
    return false;
  }
  // rdd
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->rdd), &(rhs->rdd)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__RobotTorsoState__copy(
  const dynamic_biped__msg__RobotTorsoState * input,
  dynamic_biped__msg__RobotTorsoState * output)
{
  if (!input || !output) {
    return false;
  }
  // torso_r
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->torso_r), &(output->torso_r)))
  {
    return false;
  }
  // torso_rd
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->torso_rd), &(output->torso_rd)))
  {
    return false;
  }
  // torso_rdd
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->torso_rdd), &(output->torso_rdd)))
  {
    return false;
  }
  // r
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r), &(output->r)))
  {
    return false;
  }
  // rd
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->rd), &(output->rd)))
  {
    return false;
  }
  // rdd
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->rdd), &(output->rdd)))
  {
    return false;
  }
  return true;
}

dynamic_biped__msg__RobotTorsoState *
dynamic_biped__msg__RobotTorsoState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotTorsoState * msg = (dynamic_biped__msg__RobotTorsoState *)allocator.allocate(sizeof(dynamic_biped__msg__RobotTorsoState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__RobotTorsoState));
  bool success = dynamic_biped__msg__RobotTorsoState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__RobotTorsoState__destroy(dynamic_biped__msg__RobotTorsoState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__RobotTorsoState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__RobotTorsoState__Sequence__init(dynamic_biped__msg__RobotTorsoState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotTorsoState * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__RobotTorsoState *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__RobotTorsoState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__RobotTorsoState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__RobotTorsoState__fini(&data[i - 1]);
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
dynamic_biped__msg__RobotTorsoState__Sequence__fini(dynamic_biped__msg__RobotTorsoState__Sequence * array)
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
      dynamic_biped__msg__RobotTorsoState__fini(&array->data[i]);
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

dynamic_biped__msg__RobotTorsoState__Sequence *
dynamic_biped__msg__RobotTorsoState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotTorsoState__Sequence * array = (dynamic_biped__msg__RobotTorsoState__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__RobotTorsoState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__RobotTorsoState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__RobotTorsoState__Sequence__destroy(dynamic_biped__msg__RobotTorsoState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__RobotTorsoState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__RobotTorsoState__Sequence__are_equal(const dynamic_biped__msg__RobotTorsoState__Sequence * lhs, const dynamic_biped__msg__RobotTorsoState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__RobotTorsoState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__RobotTorsoState__Sequence__copy(
  const dynamic_biped__msg__RobotTorsoState__Sequence * input,
  dynamic_biped__msg__RobotTorsoState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__RobotTorsoState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__RobotTorsoState * data =
      (dynamic_biped__msg__RobotTorsoState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__RobotTorsoState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__RobotTorsoState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__RobotTorsoState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
