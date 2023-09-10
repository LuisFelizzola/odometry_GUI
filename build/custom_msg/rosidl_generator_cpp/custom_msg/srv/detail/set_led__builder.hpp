// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define CUSTOM_MSG__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include "custom_msg/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_b
{
public:
  explicit Init_SetLed_Request_b(::custom_msg::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::custom_msg::srv::SetLed_Request b(::custom_msg::srv::SetLed_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_a
{
public:
  Init_SetLed_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_b a(::custom_msg::srv::SetLed_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SetLed_Request_b(msg_);
  }

private:
  ::custom_msg::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::srv::SetLed_Request>()
{
  return custom_msg::srv::builder::Init_SetLed_Request_a();
}

}  // namespace custom_msg


namespace custom_msg
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_sum
{
public:
  Init_SetLed_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msg::srv::SetLed_Response sum(::custom_msg::srv::SetLed_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::srv::SetLed_Response>()
{
  return custom_msg::srv::builder::Init_SetLed_Response_sum();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__SRV__DETAIL__SET_LED__BUILDER_HPP_
