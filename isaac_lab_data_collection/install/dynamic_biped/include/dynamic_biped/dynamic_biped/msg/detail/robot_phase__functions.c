// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/robot_phase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamic_biped__msg__RobotPhase__init(dynamic_biped__msg__RobotPhase * msg)
{
  if (!msg) {
    return false;
  }
  // main_phase
  // sub_phase
  return true;
}

void
dynamic_biped__msg__RobotPhase__fini(dynamic_biped__msg__RobotPhase * msg)
{
  if (!msg) {
    return;
  }
  // main_phase
  // sub_phase
}

bool
dynamic_biped__msg__RobotPhase__are_equal(const dynamic_biped__msg__RobotPhase * lhs, const dynamic_biped__msg__RobotPhase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // main_phase
  if (lhs->main_phase != rhs->main_phase) {
    return false;
  }
  // sub_phase
  if (lhs->sub_phase != rhs->sub_phase) {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__RobotPhase__copy(
  const dynamic_biped__msg__RobotPhase * input,
  dynamic_biped__msg__RobotPhase * output)
{
  if (!input || !output) {
    return false;
  }
  // main_phase
  output->main_phase = input->main_phase;
  // sub_phase
  output->sub_phase = input->sub_phase;
  return true;
}

dynamic_biped__msg__RobotPhase *
dynamic_biped__msg__RobotPhase__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotPhase * msg = (dynamic_biped__msg__RobotPhase *)allocator.allocate(sizeof(dynamic_biped__msg__RobotPhase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__RobotPhase));
  bool success = dynamic_biped__msg__RobotPhase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__RobotPhase__destroy(dynamic_biped__msg__RobotPhase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__RobotPhase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__RobotPhase__Sequence__init(dynamic_biped__msg__RobotPhase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotPhase * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__RobotPhase *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__RobotPhase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__RobotPhase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__RobotPhase__fini(&data[i - 1]);
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
dynamic_biped__msg__RobotPhase__Sequence__fini(dynamic_biped__msg__RobotPhase__Sequence * array)
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
      dynamic_biped__msg__RobotPhase__fini(&array->data[i]);
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

dynamic_biped__msg__RobotPhase__Sequence *
dynamic_biped__msg__RobotPhase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__RobotPhase__Sequence * array = (dynamic_biped__msg__RobotPhase__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__RobotPhase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__RobotPhase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__RobotPhase__Sequence__destroy(dynamic_biped__msg__RobotPhase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__RobotPhase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__RobotPhase__Sequence__are_equal(const dynamic_biped__msg__RobotPhase__Sequence * lhs, const dynamic_biped__msg__RobotPhase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__RobotPhase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__RobotPhase__Sequence__copy(
  const dynamic_biped__msg__RobotPhase__Sequence * input,
  dynamic_biped__msg__RobotPhase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__RobotPhase);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__RobotPhase * data =
      (dynamic_biped__msg__RobotPhase *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__RobotPhase__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__RobotPhase__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__RobotPhase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
