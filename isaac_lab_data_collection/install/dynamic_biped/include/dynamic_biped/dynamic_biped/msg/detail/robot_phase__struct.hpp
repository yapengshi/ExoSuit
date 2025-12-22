// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_phase.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__RobotPhase __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__RobotPhase __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotPhase_
{
  using Type = RobotPhase_<ContainerAllocator>;

  explicit RobotPhase_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_phase = 0;
      this->sub_phase = 0;
    }
  }

  explicit RobotPhase_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_phase = 0;
      this->sub_phase = 0;
    }
  }

  // field types and members
  using _main_phase_type =
    uint8_t;
  _main_phase_type main_phase;
  using _sub_phase_type =
    uint8_t;
  _sub_phase_type sub_phase;

  // setters for named parameter idiom
  Type & set__main_phase(
    const uint8_t & _arg)
  {
    this->main_phase = _arg;
    return *this;
  }
  Type & set__sub_phase(
    const uint8_t & _arg)
  {
    this->sub_phase = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::RobotPhase_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::RobotPhase_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotPhase_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotPhase_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__RobotPhase
    std::shared_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__RobotPhase
    std::shared_ptr<dynamic_biped::msg::RobotPhase_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPhase_ & other) const
  {
    if (this->main_phase != other.main_phase) {
      return false;
    }
    if (this->sub_phase != other.sub_phase) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPhase_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPhase_

// alias to use template instance with default allocator
using RobotPhase =
  dynamic_biped::msg::RobotPhase_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__STRUCT_HPP_
