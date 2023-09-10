// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/target_coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinate`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
custom_msg__msg__TargetCoordinates__init(custom_msg__msg__TargetCoordinates * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    custom_msg__msg__TargetCoordinates__fini(msg);
    return false;
  }
  // coordinate
  if (!geometry_msgs__msg__Point__init(&msg->coordinate)) {
    custom_msg__msg__TargetCoordinates__fini(msg);
    return false;
  }
  return true;
}

void
custom_msg__msg__TargetCoordinates__fini(custom_msg__msg__TargetCoordinates * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // coordinate
  geometry_msgs__msg__Point__fini(&msg->coordinate);
}

bool
custom_msg__msg__TargetCoordinates__are_equal(const custom_msg__msg__TargetCoordinates * lhs, const custom_msg__msg__TargetCoordinates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // coordinate
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->coordinate), &(rhs->coordinate)))
  {
    return false;
  }
  return true;
}

bool
custom_msg__msg__TargetCoordinates__copy(
  const custom_msg__msg__TargetCoordinates * input,
  custom_msg__msg__TargetCoordinates * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // coordinate
  if (!geometry_msgs__msg__Point__copy(
      &(input->coordinate), &(output->coordinate)))
  {
    return false;
  }
  return true;
}

custom_msg__msg__TargetCoordinates *
custom_msg__msg__TargetCoordinates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__TargetCoordinates * msg = (custom_msg__msg__TargetCoordinates *)allocator.allocate(sizeof(custom_msg__msg__TargetCoordinates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg__msg__TargetCoordinates));
  bool success = custom_msg__msg__TargetCoordinates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msg__msg__TargetCoordinates__destroy(custom_msg__msg__TargetCoordinates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msg__msg__TargetCoordinates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msg__msg__TargetCoordinates__Sequence__init(custom_msg__msg__TargetCoordinates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__TargetCoordinates * data = NULL;

  if (size) {
    data = (custom_msg__msg__TargetCoordinates *)allocator.zero_allocate(size, sizeof(custom_msg__msg__TargetCoordinates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg__msg__TargetCoordinates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg__msg__TargetCoordinates__fini(&data[i - 1]);
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
custom_msg__msg__TargetCoordinates__Sequence__fini(custom_msg__msg__TargetCoordinates__Sequence * array)
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
      custom_msg__msg__TargetCoordinates__fini(&array->data[i]);
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

custom_msg__msg__TargetCoordinates__Sequence *
custom_msg__msg__TargetCoordinates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__TargetCoordinates__Sequence * array = (custom_msg__msg__TargetCoordinates__Sequence *)allocator.allocate(sizeof(custom_msg__msg__TargetCoordinates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msg__msg__TargetCoordinates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msg__msg__TargetCoordinates__Sequence__destroy(custom_msg__msg__TargetCoordinates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msg__msg__TargetCoordinates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msg__msg__TargetCoordinates__Sequence__are_equal(const custom_msg__msg__TargetCoordinates__Sequence * lhs, const custom_msg__msg__TargetCoordinates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msg__msg__TargetCoordinates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msg__msg__TargetCoordinates__Sequence__copy(
  const custom_msg__msg__TargetCoordinates__Sequence * input,
  custom_msg__msg__TargetCoordinates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msg__msg__TargetCoordinates);
    custom_msg__msg__TargetCoordinates * data =
      (custom_msg__msg__TargetCoordinates *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msg__msg__TargetCoordinates__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msg__msg__TargetCoordinates__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msg__msg__TargetCoordinates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
