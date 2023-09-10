// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__SRV__DETAIL__SET_LED__STRUCT_H_
#define CUSTOM_MSG__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetLed in the package custom_msg.
typedef struct custom_msg__srv__SetLed_Request
{
  int64_t a;
  int64_t b;
} custom_msg__srv__SetLed_Request;

// Struct for a sequence of custom_msg__srv__SetLed_Request.
typedef struct custom_msg__srv__SetLed_Request__Sequence
{
  custom_msg__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__srv__SetLed_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetLed in the package custom_msg.
typedef struct custom_msg__srv__SetLed_Response
{
  int64_t sum;
} custom_msg__srv__SetLed_Response;

// Struct for a sequence of custom_msg__srv__SetLed_Response.
typedef struct custom_msg__srv__SetLed_Response__Sequence
{
  custom_msg__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__SRV__DETAIL__SET_LED__STRUCT_H_
