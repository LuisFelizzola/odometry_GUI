// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_
#define CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_

#include "custom_msg/msg/detail/target_coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg
{

namespace msg
{

namespace builder
{

class Init_TargetCoordinates_coordinate
{
public:
  explicit Init_TargetCoordinates_coordinate(::custom_msg::msg::TargetCoordinates & msg)
  : msg_(msg)
  {}
  ::custom_msg::msg::TargetCoordinates coordinate(::custom_msg::msg::TargetCoordinates::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::TargetCoordinates msg_;
};

class Init_TargetCoordinates_name
{
public:
  Init_TargetCoordinates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetCoordinates_coordinate name(::custom_msg::msg::TargetCoordinates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TargetCoordinates_coordinate(msg_);
  }

private:
  ::custom_msg::msg::TargetCoordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::msg::TargetCoordinates>()
{
  return custom_msg::msg::builder::Init_TargetCoordinates_name();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_
