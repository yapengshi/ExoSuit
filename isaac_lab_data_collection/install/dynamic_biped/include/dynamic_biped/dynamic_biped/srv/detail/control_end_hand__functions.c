// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamic_biped:srv/ControlEndHand.idl
// generated code does not contain a copyright notice
#include "dynamic_biped/srv/detail/control_end_hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `left_hand_position`
// Member `right_hand_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dynamic_biped__srv__ControlEndHand_Request__init(dynamic_biped__srv__ControlEndHand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_hand_position
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->left_hand_position, 0)) {
    dynamic_biped__srv__ControlEndHand_Request__fini(msg);
    return false;
  }
  // right_hand_position
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->right_hand_position, 0)) {
    dynamic_biped__srv__ControlEndHand_Request__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__srv__ControlEndHand_Request__fini(dynamic_biped__srv__ControlEndHand_Request * msg)
{
  if (!msg) {
    return;
  }
  // left_hand_position
  rosidl_runtime_c__uint8__Sequence__fini(&msg->left_hand_position);
  // right_hand_position
  rosidl_runtime_c__uint8__Sequence__fini(&msg->right_hand_position);
}

bool
dynamic_biped__srv__ControlEndHand_Request__are_equal(const dynamic_biped__srv__ControlEndHand_Request * lhs, const dynamic_biped__srv__ControlEndHand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_hand_position
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->left_hand_position), &(rhs->left_hand_position)))
  {
    return false;
  }
  // right_hand_position
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->right_hand_position), &(rhs->right_hand_position)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__srv__ControlEndHand_Request__copy(
  const dynamic_biped__srv__ControlEndHand_Request * input,
  dynamic_biped__srv__ControlEndHand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // left_hand_position
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->left_hand_position), &(output->left_hand_position)))
  {
    return false;
  }
  // right_hand_position
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->right_hand_position), &(output->right_hand_position)))
  {
    return false;
  }
  return true;
}

dynamic_biped__srv__ControlEndHand_Request *
dynamic_biped__srv__ControlEndHand_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Request * msg = (dynamic_biped__srv__ControlEndHand_Request *)allocator.allocate(sizeof(dynamic_biped__srv__ControlEndHand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__srv__ControlEndHand_Request));
  bool success = dynamic_biped__srv__ControlEndHand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__srv__ControlEndHand_Request__destroy(dynamic_biped__srv__ControlEndHand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__srv__ControlEndHand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__srv__ControlEndHand_Request__Sequence__init(dynamic_biped__srv__ControlEndHand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Request * data = NULL;

  if (size) {
    data = (dynamic_biped__srv__ControlEndHand_Request *)allocator.zero_allocate(size, sizeof(dynamic_biped__srv__ControlEndHand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__srv__ControlEndHand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__srv__ControlEndHand_Request__fini(&data[i - 1]);
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
dynamic_biped__srv__ControlEndHand_Request__Sequence__fini(dynamic_biped__srv__ControlEndHand_Request__Sequence * array)
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
      dynamic_biped__srv__ControlEndHand_Request__fini(&array->data[i]);
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

dynamic_biped__srv__ControlEndHand_Request__Sequence *
dynamic_biped__srv__ControlEndHand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Request__Sequence * array = (dynamic_biped__srv__ControlEndHand_Request__Sequence *)allocator.allocate(sizeof(dynamic_biped__srv__ControlEndHand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__srv__ControlEndHand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__srv__ControlEndHand_Request__Sequence__destroy(dynamic_biped__srv__ControlEndHand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__srv__ControlEndHand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__srv__ControlEndHand_Request__Sequence__are_equal(const dynamic_biped__srv__ControlEndHand_Request__Sequence * lhs, const dynamic_biped__srv__ControlEndHand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__srv__ControlEndHand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__srv__ControlEndHand_Request__Sequence__copy(
  const dynamic_biped__srv__ControlEndHand_Request__Sequence * input,
  dynamic_biped__srv__ControlEndHand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__srv__ControlEndHand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__srv__ControlEndHand_Request * data =
      (dynamic_biped__srv__ControlEndHand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__srv__ControlEndHand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__srv__ControlEndHand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__srv__ControlEndHand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dynamic_biped__srv__ControlEndHand_Response__init(dynamic_biped__srv__ControlEndHand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
dynamic_biped__srv__ControlEndHand_Response__fini(dynamic_biped__srv__ControlEndHand_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
dynamic_biped__srv__ControlEndHand_Response__are_equal(const dynamic_biped__srv__ControlEndHand_Response * lhs, const dynamic_biped__srv__ControlEndHand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
dynamic_biped__srv__ControlEndHand_Response__copy(
  const dynamic_biped__srv__ControlEndHand_Response * input,
  dynamic_biped__srv__ControlEndHand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

dynamic_biped__srv__ControlEndHand_Response *
dynamic_biped__srv__ControlEndHand_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Response * msg = (dynamic_biped__srv__ControlEndHand_Response *)allocator.allocate(sizeof(dynamic_biped__srv__ControlEndHand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__srv__ControlEndHand_Response));
  bool success = dynamic_biped__srv__ControlEndHand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__srv__ControlEndHand_Response__destroy(dynamic_biped__srv__ControlEndHand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__srv__ControlEndHand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__srv__ControlEndHand_Response__Sequence__init(dynamic_biped__srv__ControlEndHand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Response * data = NULL;

  if (size) {
    data = (dynamic_biped__srv__ControlEndHand_Response *)allocator.zero_allocate(size, sizeof(dynamic_biped__srv__ControlEndHand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__srv__ControlEndHand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__srv__ControlEndHand_Response__fini(&data[i - 1]);
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
dynamic_biped__srv__ControlEndHand_Response__Sequence__fini(dynamic_biped__srv__ControlEndHand_Response__Sequence * array)
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
      dynamic_biped__srv__ControlEndHand_Response__fini(&array->data[i]);
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

dynamic_biped__srv__ControlEndHand_Response__Sequence *
dynamic_biped__srv__ControlEndHand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Response__Sequence * array = (dynamic_biped__srv__ControlEndHand_Response__Sequence *)allocator.allocate(sizeof(dynamic_biped__srv__ControlEndHand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__srv__ControlEndHand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__srv__ControlEndHand_Response__Sequence__destroy(dynamic_biped__srv__ControlEndHand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__srv__ControlEndHand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__srv__ControlEndHand_Response__Sequence__are_equal(const dynamic_biped__srv__ControlEndHand_Response__Sequence * lhs, const dynamic_biped__srv__ControlEndHand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__srv__ControlEndHand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__srv__ControlEndHand_Response__Sequence__copy(
  const dynamic_biped__srv__ControlEndHand_Response__Sequence * input,
  dynamic_biped__srv__ControlEndHand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__srv__ControlEndHand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__srv__ControlEndHand_Response * data =
      (dynamic_biped__srv__ControlEndHand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__srv__ControlEndHand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__srv__ControlEndHand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__srv__ControlEndHand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__functions.h"

bool
dynamic_biped__srv__ControlEndHand_Event__init(dynamic_biped__srv__ControlEndHand_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dynamic_biped__srv__ControlEndHand_Event__fini(msg);
    return false;
  }
  // request
  if (!dynamic_biped__srv__ControlEndHand_Request__Sequence__init(&msg->request, 0)) {
    dynamic_biped__srv__ControlEndHand_Event__fini(msg);
    return false;
  }
  // response
  if (!dynamic_biped__srv__ControlEndHand_Response__Sequence__init(&msg->response, 0)) {
    dynamic_biped__srv__ControlEndHand_Event__fini(msg);
    return false;
  }
  return true;
}

void
dynamic_biped__srv__ControlEndHand_Event__fini(dynamic_biped__srv__ControlEndHand_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dynamic_biped__srv__ControlEndHand_Request__Sequence__fini(&msg->request);
  // response
  dynamic_biped__srv__ControlEndHand_Response__Sequence__fini(&msg->response);
}

bool
dynamic_biped__srv__ControlEndHand_Event__are_equal(const dynamic_biped__srv__ControlEndHand_Event * lhs, const dynamic_biped__srv__ControlEndHand_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!dynamic_biped__srv__ControlEndHand_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dynamic_biped__srv__ControlEndHand_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dynamic_biped__srv__ControlEndHand_Event__copy(
  const dynamic_biped__srv__ControlEndHand_Event * input,
  dynamic_biped__srv__ControlEndHand_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!dynamic_biped__srv__ControlEndHand_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dynamic_biped__srv__ControlEndHand_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dynamic_biped__srv__ControlEndHand_Event *
dynamic_biped__srv__ControlEndHand_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Event * msg = (dynamic_biped__srv__ControlEndHand_Event *)allocator.allocate(sizeof(dynamic_biped__srv__ControlEndHand_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamic_biped__srv__ControlEndHand_Event));
  bool success = dynamic_biped__srv__ControlEndHand_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamic_biped__srv__ControlEndHand_Event__destroy(dynamic_biped__srv__ControlEndHand_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamic_biped__srv__ControlEndHand_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamic_biped__srv__ControlEndHand_Event__Sequence__init(dynamic_biped__srv__ControlEndHand_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Event * data = NULL;

  if (size) {
    data = (dynamic_biped__srv__ControlEndHand_Event *)allocator.zero_allocate(size, sizeof(dynamic_biped__srv__ControlEndHand_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamic_biped__srv__ControlEndHand_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamic_biped__srv__ControlEndHand_Event__fini(&data[i - 1]);
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
dynamic_biped__srv__ControlEndHand_Event__Sequence__fini(dynamic_biped__srv__ControlEndHand_Event__Sequence * array)
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
      dynamic_biped__srv__ControlEndHand_Event__fini(&array->data[i]);
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

dynamic_biped__srv__ControlEndHand_Event__Sequence *
dynamic_biped__srv__ControlEndHand_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamic_biped__srv__ControlEndHand_Event__Sequence * array = (dynamic_biped__srv__ControlEndHand_Event__Sequence *)allocator.allocate(sizeof(dynamic_biped__srv__ControlEndHand_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamic_biped__srv__ControlEndHand_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamic_biped__srv__ControlEndHand_Event__Sequence__destroy(dynamic_biped__srv__ControlEndHand_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamic_biped__srv__ControlEndHand_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamic_biped__srv__ControlEndHand_Event__Sequence__are_equal(const dynamic_biped__srv__ControlEndHand_Event__Sequence * lhs, const dynamic_biped__srv__ControlEndHand_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamic_biped__srv__ControlEndHand_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamic_biped__srv__ControlEndHand_Event__Sequence__copy(
  const dynamic_biped__srv__ControlEndHand_Event__Sequence * input,
  dynamic_biped__srv__ControlEndHand_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamic_biped__srv__ControlEndHand_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamic_biped__srv__ControlEndHand_Event * data =
      (dynamic_biped__srv__ControlEndHand_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamic_biped__srv__ControlEndHand_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamic_biped__srv__ControlEndHand_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamic_biped__srv__ControlEndHand_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
