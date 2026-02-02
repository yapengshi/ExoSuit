// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/HandRotation.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/hand_rotation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `quaternions`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
dynamic_biped__msg__HandRotation__init(dynamic_biped__msg__HandRotation * msg)
{
  if (!msg) {
    return false;
  }
  // quaternions
  if (!geometry_msgs__msg__Quaternion__Sequence__init(&msg->quaternions, 0)) {
    dynamic_biped__msg__HandRotation__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__msg__HandRotation__fini(dynamic_biped__msg__HandRotation * msg)
{
  if (!msg) {
    return;
  }
  // quaternions
  geometry_msgs__msg__Quaternion__Sequence__fini(&msg->quaternions);
}

bool
dynamic_biped__msg__HandRotation__are_equal(const dynamic_biped__msg__HandRotation * lhs, const dynamic_biped__msg__HandRotation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // quaternions
  if (!geometry_msgs__msg__Quaternion__Sequence__are_equal(
      &(lhs->quaternions), &(rhs->quaternions)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__HandRotation__copy(
  const dynamic_biped__msg__HandRotation * input,
  dynamic_biped__msg__HandRotation * output)
{
  if (!input || !output) {
    return false;
  }
  // quaternions
  if (!geometry_msgs__msg__Quaternion__Sequence__copy(
      &(input->quaternions), &(output->quaternions)))
  {
    return false;
  }
  return true;
}

dynamic_biped__msg__HandRotation *
dynamic_biped__msg__HandRotation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__HandRotation * msg = (dynamic_biped__msg__HandRotation *)allocator.allocate(sizeof(dynamic_biped__msg__HandRotation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__HandRotation));
  bool success = dynamic_biped__msg__HandRotation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__HandRotation__destroy(dynamic_biped__msg__HandRotation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__HandRotation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__HandRotation__Sequence__init(dynamic_biped__msg__HandRotation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__HandRotation * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__HandRotation *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__HandRotation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__HandRotation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__HandRotation__fini(&data[i - 1]);
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
dynamic_biped__msg__HandRotation__Sequence__fini(dynamic_biped__msg__HandRotation__Sequence * array)
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
      dynamic_biped__msg__HandRotation__fini(&array->data[i]);
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

dynamic_biped__msg__HandRotation__Sequence *
dynamic_biped__msg__HandRotation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__HandRotation__Sequence * array = (dynamic_biped__msg__HandRotation__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__HandRotation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__HandRotation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__HandRotation__Sequence__destroy(dynamic_biped__msg__HandRotation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__HandRotation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__HandRotation__Sequence__are_equal(const dynamic_biped__msg__HandRotation__Sequence * lhs, const dynamic_biped__msg__HandRotation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__HandRotation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__HandRotation__Sequence__copy(
  const dynamic_biped__msg__HandRotation__Sequence * input,
  dynamic_biped__msg__HandRotation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__HandRotation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__HandRotation * data =
      (dynamic_biped__msg__HandRotation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__HandRotation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__HandRotation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__HandRotation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
