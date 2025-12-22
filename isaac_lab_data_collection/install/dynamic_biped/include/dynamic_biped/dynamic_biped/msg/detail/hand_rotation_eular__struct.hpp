// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/HandRotationEular.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation_eular.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'euler_angles'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__HandRotationEular __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__HandRotationEular __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandRotationEular_
{
  using Type = HandRotationEular_<ContainerAllocator>;

  explicit HandRotationEular_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit HandRotationEular_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _euler_angles_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _euler_angles_type euler_angles;

  // setters for named parameter idiom
  Type & set__euler_angles(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->euler_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::HandRotationEular_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::HandRotationEular_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::HandRotationEular_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::HandRotationEular_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__HandRotationEular
    std::shared_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__HandRotationEular
    std::shared_ptr<dynamic_biped::msg::HandRotationEular_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandRotationEular_ & other) const
  {
    if (this->euler_angles != other.euler_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandRotationEular_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandRotationEular_

// alias to use template instance with default allocator
using HandRotationEular =
  dynamic_biped::msg::HandRotationEular_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__STRUCT_HPP_
