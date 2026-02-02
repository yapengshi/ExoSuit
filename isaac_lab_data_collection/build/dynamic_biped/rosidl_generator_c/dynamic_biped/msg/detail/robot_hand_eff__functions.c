// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/RobotHandEff.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/robot_hand_eff__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dynamic_biped__msg__RobotHandEff__init(dynamic_biped__msg__RobotHandEff * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynamic_biped__msg__RobotHandEff__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    dynamic_biped__msg__RobotHandEff__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__msg__RobotHandEff__fini(dynamic_biped__msg__RobotHandEff * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

bool
dynamic_biped__msg__RobotHandEff__are_equal(const dynamic_biped__msg__RobotHandEff * lhs, const dynamic_biped__msg__RobotHandEff * rhs)
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
  // data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__RobotHandEff__copy(
  const dynamic_biped__msg__RobotHandEff * input,
  dynamic_biped__msg__RobotHandEff * output)
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
  // data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

dynamic_biped__msg__RobotHandEff *
dynamic_biped__msg__RobotHandEff__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotHandEff * msg = (dynamic_biped__msg__RobotHandEff *)allocator.allocate(sizeof(dynamic_biped__msg__RobotHandEff), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__RobotHandEff));
  bool success = dynamic_biped__msg__RobotHandEff__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__RobotHandEff__destroy(dynamic_biped__msg__RobotHandEff * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__RobotHandEff__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__RobotHandEff__Sequence__init(dynamic_biped__msg__RobotHandEff__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotHandEff * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__RobotHandEff *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__RobotHandEff), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__RobotHandEff__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__RobotHandEff__fini(&data[i - 1]);
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
dynamic_biped__msg__RobotHandEff__Sequence__fini(dynamic_biped__msg__RobotHandEff__Sequence * array)
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
      dynamic_biped__msg__RobotHandEff__fini(&array->data[i]);
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

dynamic_biped__msg__RobotHandEff__Sequence *
dynamic_biped__msg__RobotHandEff__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotHandEff__Sequence * array = (dynamic_biped__msg__RobotHandEff__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__RobotHandEff__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__RobotHandEff__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__RobotHandEff__Sequence__destroy(dynamic_biped__msg__RobotHandEff__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__RobotHandEff__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__RobotHandEff__Sequence__are_equal(const dynamic_biped__msg__RobotHandEff__Sequence * lhs, const dynamic_biped__msg__RobotHandEff__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__RobotHandEff__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__RobotHandEff__Sequence__copy(
  const dynamic_biped__msg__RobotHandEff__Sequence * input,
  dynamic_biped__msg__RobotHandEff__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__RobotHandEff);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__RobotHandEff * data =
      (dynamic_biped__msg__RobotHandEff *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__RobotHandEff__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__RobotHandEff__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__RobotHandEff__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
