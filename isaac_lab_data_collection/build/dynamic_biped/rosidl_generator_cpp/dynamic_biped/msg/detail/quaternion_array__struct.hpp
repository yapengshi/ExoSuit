// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/QuaternionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/quaternion_array.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__STRUCT_HPP_

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
# define DEPRECATED__dynamic_biped__msg__QuaternionArray __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__QuaternionArray __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuaternionArray_
{
  using Type = QuaternionArray_<ContainerAllocator>;

  explicit QuaternionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit QuaternionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dynamic_biped::msg::QuaternionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::QuaternionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::QuaternionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::QuaternionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__QuaternionArray
    std::shared_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__QuaternionArray
    std::shared_ptr<dynamic_biped::msg::QuaternionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuaternionArray_ & other) const
  {
    if (this->quaternions != other.quaternions) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuaternionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuaternionArray_

// alias to use template instance with default allocator
using QuaternionArray =
  dynamic_biped::msg::QuaternionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__STRUCT_HPP_
