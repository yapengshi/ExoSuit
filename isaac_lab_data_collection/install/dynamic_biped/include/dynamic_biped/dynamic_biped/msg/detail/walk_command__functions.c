// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/WalkCommand.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/walk_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dynamic_biped__msg__WalkCommand__init(dynamic_biped__msg__WalkCommand * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->values, 0)) {
    dynamic_biped__msg__WalkCommand__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__msg__WalkCommand__fini(dynamic_biped__msg__WalkCommand * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // values
  rosidl_runtime_c__double__Sequence__fini(&msg->values);
}

bool
dynamic_biped__msg__WalkCommand__are_equal(const dynamic_biped__msg__WalkCommand * lhs, const dynamic_biped__msg__WalkCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // values
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__WalkCommand__copy(
  const dynamic_biped__msg__WalkCommand * input,
  dynamic_biped__msg__WalkCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // values
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  return true;
}

dynamic_biped__msg__WalkCommand *
dynamic_biped__msg__WalkCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__WalkCommand * msg = (dynamic_biped__msg__WalkCommand *)allocator.allocate(sizeof(dynamic_biped__msg__WalkCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__WalkCommand));
  bool success = dynamic_biped__msg__WalkCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__WalkCommand__destroy(dynamic_biped__msg__WalkCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__WalkCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__WalkCommand__Sequence__init(dynamic_biped__msg__WalkCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__WalkCommand * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__WalkCommand *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__WalkCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__WalkCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__WalkCommand__fini(&data[i - 1]);
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
dynamic_biped__msg__WalkCommand__Sequence__fini(dynamic_biped__msg__WalkCommand__Sequence * array)
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
      dynamic_biped__msg__WalkCommand__fini(&array->data[i]);
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

dynamic_biped__msg__WalkCommand__Sequence *
dynamic_biped__msg__WalkCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__WalkCommand__Sequence * array = (dynamic_biped__msg__WalkCommand__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__WalkCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__WalkCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__WalkCommand__Sequence__destroy(dynamic_biped__msg__WalkCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__WalkCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__WalkCommand__Sequence__are_equal(const dynamic_biped__msg__WalkCommand__Sequence * lhs, const dynamic_biped__msg__WalkCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__WalkCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__WalkCommand__Sequence__copy(
  const dynamic_biped__msg__WalkCommand__Sequence * input,
  dynamic_biped__msg__WalkCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__WalkCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__WalkCommand * data =
      (dynamic_biped__msg__WalkCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__WalkCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__WalkCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__WalkCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
