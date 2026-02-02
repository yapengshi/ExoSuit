// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/RobotHandPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_hand_position.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__RobotHandPosition __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__RobotHandPosition __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHandPosition_
{
  using Type = RobotHandPosition_<ContainerAllocator>;

  explicit RobotHandPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RobotHandPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_hand_position_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _left_hand_position_type left_hand_position;
  using _right_hand_position_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _right_hand_position_type right_hand_position;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_hand_position(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->left_hand_position = _arg;
    return *this;
  }
  Type & set__right_hand_position(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->right_hand_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::RobotHandPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::RobotHandPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotHandPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotHandPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__RobotHandPosition
    std::shared_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__RobotHandPosition
    std::shared_ptr<dynamic_biped::msg::RobotHandPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHandPosition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_hand_position != other.left_hand_position) {
      return false;
    }
    if (this->right_hand_position != other.right_hand_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHandPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHandPosition_

// alias to use template instance with default allocator
using RobotHandPosition =
  dynamic_biped::msg::RobotHandPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__STRUCT_HPP_
