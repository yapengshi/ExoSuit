// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/RobotQVTau.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_qv_tau.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_QV_TAU__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_QV_TAU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__RobotQVTau __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__RobotQVTau __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotQVTau_
{
  using Type = RobotQVTau_<ContainerAllocator>;

  explicit RobotQVTau_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotQVTau_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _q_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _q_type q;
  using _v_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _v_type v;
  using _tau_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tau_type tau;

  // setters for named parameter idiom
  Type & set__q(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__v(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__tau(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tau = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::RobotQVTau_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::RobotQVTau_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotQVTau_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotQVTau_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__RobotQVTau
    std::shared_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__RobotQVTau
    std::shared_ptr<dynamic_biped::msg::RobotQVTau_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotQVTau_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotQVTau_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotQVTau_

// alias to use template instance with default allocator
using RobotQVTau =
  dynamic_biped::msg::RobotQVTau_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_QV_TAU__STRUCT_HPP_
