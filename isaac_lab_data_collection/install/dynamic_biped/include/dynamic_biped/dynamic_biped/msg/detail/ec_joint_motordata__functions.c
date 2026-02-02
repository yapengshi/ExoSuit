// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/msg/detail/ec_joint_motordata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamic_biped__msg__ECJointMotordata__init(dynamic_biped__msg__ECJointMotordata * msg)
{
  if (!msg) {
    return false;
  }
  // l_pos_pitch
  // l_pos_yaw
  // l_pos_end
  // r_pos_pitch
  // r_pos_yaw
  // r_pos_end
  return true;
}

void
dynamic_biped__msg__ECJointMotordata__fini(dynamic_biped__msg__ECJointMotordata * msg)
{
  if (!msg) {
    return;
  }
  // l_pos_pitch
  // l_pos_yaw
  // l_pos_end
  // r_pos_pitch
  // r_pos_yaw
  // r_pos_end
}

bool
dynamic_biped__msg__ECJointMotordata__are_equal(const dynamic_biped__msg__ECJointMotordata * lhs, const dynamic_biped__msg__ECJointMotordata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // l_pos_pitch
  if (lhs->l_pos_pitch != rhs->l_pos_pitch) {
    return false;
  }
  // l_pos_yaw
  if (lhs->l_pos_yaw != rhs->l_pos_yaw) {
    return false;
  }
  // l_pos_end
  if (lhs->l_pos_end != rhs->l_pos_end) {
    return false;
  }
  // r_pos_pitch
  if (lhs->r_pos_pitch != rhs->r_pos_pitch) {
    return false;
  }
  // r_pos_yaw
  if (lhs->r_pos_yaw != rhs->r_pos_yaw) {
    return false;
  }
  // r_pos_end
  if (lhs->r_pos_end != rhs->r_pos_end) {
    return false;
  }
  return true;
}

bool
dynamic_biped__msg__ECJointMotordata__copy(
  const dynamic_biped__msg__ECJointMotordata * input,
  dynamic_biped__msg__ECJointMotordata * output)
{
  if (!input || !output) {
    return false;
  }
  // l_pos_pitch
  output->l_pos_pitch = input->l_pos_pitch;
  // l_pos_yaw
  output->l_pos_yaw = input->l_pos_yaw;
  // l_pos_end
  output->l_pos_end = input->l_pos_end;
  // r_pos_pitch
  output->r_pos_pitch = input->r_pos_pitch;
  // r_pos_yaw
  output->r_pos_yaw = input->r_pos_yaw;
  // r_pos_end
  output->r_pos_end = input->r_pos_end;
  return true;
}

dynamic_biped__msg__ECJointMotordata *
dynamic_biped__msg__ECJointMotordata__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__ECJointMotordata * msg = (dynamic_biped__msg__ECJointMotordata *)allocator.allocate(sizeof(dynamic_biped__msg__ECJointMotordata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__msg__ECJointMotordata));
  bool success = dynamic_biped__msg__ECJointMotordata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__msg__ECJointMotordata__destroy(dynamic_biped__msg__ECJointMotordata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__msg__ECJointMotordata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__msg__ECJointMotordata__Sequence__init(dynamic_biped__msg__ECJointMotordata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__ECJointMotordata * data = NULL;

  if (size) {
    data = (dynamic_biped__msg__ECJointMotordata *)allocator.zero_allocate(size, sizeof(dynamic_biped__msg__ECJointMotordata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__msg__ECJointMotordata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__msg__ECJointMotordata__fini(&data[i - 1]);
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
dynamic_biped__msg__ECJointMotordata__Sequence__fini(dynamic_biped__msg__ECJointMotordata__Sequence * array)
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
      dynamic_biped__msg__ECJointMotordata__fini(&array->data[i]);
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

dynamic_biped__msg__ECJointMotordata__Sequence *
dynamic_biped__msg__ECJointMotordata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__msg__ECJointMotordata__Sequence * array = (dynamic_biped__msg__ECJointMotordata__Sequence *)allocator.allocate(sizeof(dynamic_biped__msg__ECJointMotordata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__msg__ECJointMotordata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__msg__ECJointMotordata__Sequence__destroy(dynamic_biped__msg__ECJointMotordata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__msg__ECJointMotordata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__msg__ECJointMotordata__Sequence__are_equal(const dynamic_biped__msg__ECJointMotordata__Sequence * lhs, const dynamic_biped__msg__ECJointMotordata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__msg__ECJointMotordata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__msg__ECJointMotordata__Sequence__copy(
  const dynamic_biped__msg__ECJointMotordata__Sequence * input,
  dynamic_biped__msg__ECJointMotordata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__msg__ECJointMotordata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__msg__ECJointMotordata * data =
      (dynamic_biped__msg__ECJointMotordata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__msg__ECJointMotordata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__msg__ECJointMotordata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__msg__ECJointMotordata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
