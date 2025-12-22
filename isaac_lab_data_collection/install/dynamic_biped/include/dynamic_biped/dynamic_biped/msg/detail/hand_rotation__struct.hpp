// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/HandRotation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'quaternions'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__HandRotation __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__HandRotation __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandRotation_
{
  using Type = HandRotation_<ContainerAllocator>;

  explicit HandRotation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit HandRotation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _quaternions_type =
    std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>>;
  _quaternions_type quaternions;

  // setters for named parameter idiom
  Type & set__quaternions(
    const std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>> & _arg)
  {
    this->quaternions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::HandRotation_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::HandRotation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::HandRotation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::HandRotation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__HandRotation
    std::shared_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__HandRotation
    std::shared_ptr<dynamic_biped::msg::HandRotation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandRotation_ & other) const
  {
    if (this->quaternions != other.quaternions) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandRotation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandRotation_

// alias to use template instance with default allocator
using HandRotation =
  dynamic_biped::msg::HandRotation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION__STRUCT_HPP_
