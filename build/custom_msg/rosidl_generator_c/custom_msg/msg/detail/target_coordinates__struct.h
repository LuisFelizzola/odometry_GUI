// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_
#define CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'coordinate'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/TargetCoordinates in the package custom_msg.
typedef struct custom_msg__msg__TargetCoordinates
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Point coordinate;
} custom_msg__msg__TargetCoordinates;

// Struct for a sequence of custom_msg__msg__TargetCoordinates.
typedef struct custom_msg__msg__TargetCoordinates__Sequence
{
  custom_msg__msg__TargetCoordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__msg__TargetCoordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_
