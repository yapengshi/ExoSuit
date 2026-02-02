// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/RobotArmInfo.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/robot_arm_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `q`
// Member `v`
// Member `vd`
// Member `tau`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dynamic_biped__msg__RobotArmInfo__init(dynamic_biped__msg__RobotArmInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynamic_biped__msg__RobotArmInfo__fini(msg);
    return false;
  }
  // q
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q, 0)) {
    dynamic_biped__msg__RobotArmInfo__fini(msg);
    return false;
  }
  // v
  if (!rosidl_runtime_c__double__Sequence__init(&msg->v, 0)) {
    dynamic_biped__msg__RobotArmInfo__fini(msg);
    return false;
  }
  // vd
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vd, 0)) {
    dynamic_biped__msg__RobotArmInfo__fini(msg);
    return false;
  }
  // tau
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tau, 0)) {
    dynamic_biped__msg__RobotArmInfo__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__msg__RobotArmInfo__fini(dynamic_biped__msg__RobotArmInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // q
  rosidl_runtime_c__double__Sequence__fini(&msg->q);
  // v
  rosidl_runtime_c__double__Sequence__fini(&msg->v);
  // vd
  rosidl_runtime_c__double__Sequence__fini(&msg->vd);
  // tau
  rosidl_runtime_c__double__Sequence__fini(&msg->tau);
}

bool
dynamic_biped__msg__RobotArmInfo__are_equal(const dynamic_biped__msg__RobotArmInfo * lhs, const dynamic_biped__msg__RobotArmInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // q
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->q), &(rhs->q)))
  {
    return false;
  }
  // v
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->v), &(rhs->v)))
  {
    return false;
  }
  // vd
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vd), &(rhs->vd)))
  {
    return false;
  }
  // tau
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->tau), &(rhs->tau)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__RobotArmInfo__copy(
  const dynamic_biped__msg__RobotArmInfo * input,
  dynamic_biped__msg__RobotArmInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // q
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->q), &(output->q)))
  {
    return false;
  }
  // v
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->v), &(output->v)))
  {
    return false;
  }
  // vd
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vd), &(output->vd)))
  {
    return false;
  }
  // tau
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->tau), &(output->tau)))
  {
    return false;
  }
  return true;
}

dynamic_biped__msg__RobotArmInfo *
dynamic_biped__msg__RobotArmInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotArmInfo * msg = (dynamic_biped__msg__RobotArmInfo *)allocator.allocate(sizeof(dynamic_biped__msg__RobotArmInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__RobotArmInfo));
  bool success = dynamic_biped__msg__RobotArmInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__RobotArmInfo__destroy(dynamic_biped__msg__RobotArmInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__RobotArmInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__RobotArmInfo__Sequence__init(dynamic_biped__msg__RobotArmInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotArmInfo * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__RobotArmInfo *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__RobotArmInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__RobotArmInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__RobotArmInfo__fini(&data[i - 1]);
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
dynamic_biped__msg__RobotArmInfo__Sequence__fini(dynamic_biped__msg__RobotArmInfo__Sequence * array)
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
      dynamic_biped__msg__RobotArmInfo__fini(&array->data[i]);
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

dynamic_biped__msg__RobotArmInfo__Sequence *
dynamic_biped__msg__RobotArmInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotArmInfo__Sequence * array = (dynamic_biped__msg__RobotArmInfo__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__RobotArmInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__RobotArmInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__RobotArmInfo__Sequence__destroy(dynamic_biped__msg__RobotArmInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__RobotArmInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__RobotArmInfo__Sequence__are_equal(const dynamic_biped__msg__RobotArmInfo__Sequence * lhs, const dynamic_biped__msg__RobotArmInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__RobotArmInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__RobotArmInfo__Sequence__copy(
  const dynamic_biped__msg__RobotArmInfo__Sequence * input,
  dynamic_biped__msg__RobotArmInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__RobotArmInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__RobotArmInfo * data =
      (dynamic_biped__msg__RobotArmInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__RobotArmInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__RobotArmInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__RobotArmInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
