// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__STRUCT_HPP_
#define CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'coordinate'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msg__msg__TargetCoordinates __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg__msg__TargetCoordinates __declspec(deprecated)
#endif

namespace custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetCoordinates_
{
  using Type = TargetCoordinates_<ContainerAllocator>;

  explicit TargetCoordinates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit TargetCoordinates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    coordinate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _coordinate_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _coordinate_type coordinate;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__coordinate(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->coordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg::msg::TargetCoordinates_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg::msg::TargetCoordinates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::TargetCoordinates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::TargetCoordinates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg__msg__TargetCoordinates
    std::shared_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg__msg__TargetCoordinates
    std::shared_ptr<custom_msg::msg::TargetCoordinates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetCoordinates_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->coordinate != other.coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetCoordinates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetCoordinates_

// alias to use template instance with default allocator
using TargetCoordinates =
  custom_msg::msg::TargetCoordinates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__TARGET_COORDINATES__STRUCT_HPP_
