// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_torso_state.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'torso_r'
// Member 'torso_rd'
// Member 'torso_rdd'
// Member 'r'
// Member 'rd'
// Member 'rdd'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__RobotTorsoState __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__RobotTorsoState __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotTorsoState_
{
  using Type = RobotTorsoState_<ContainerAllocator>;

  explicit RobotTorsoState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : torso_r(_init),
    torso_rd(_init),
    torso_rdd(_init),
    r(_init),
    rd(_init),
    rdd(_init)
  {
    (void)_init;
  }

  explicit RobotTorsoState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : torso_r(_alloc, _init),
    torso_rd(_alloc, _init),
    torso_rdd(_alloc, _init),
    r(_alloc, _init),
    rd(_alloc, _init),
    rdd(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _torso_r_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torso_r_type torso_r;
  using _torso_rd_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torso_rd_type torso_rd;
  using _torso_rdd_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torso_rdd_type torso_rdd;
  using _r_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r_type r;
  using _rd_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rd_type rd;
  using _rdd_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rdd_type rdd;

  // setters for named parameter idiom
  Type & set__torso_r(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torso_r = _arg;
    return *this;
  }
  Type & set__torso_rd(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torso_rd = _arg;
    return *this;
  }
  Type & set__torso_rdd(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torso_rdd = _arg;
    return *this;
  }
  Type & set__r(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__rd(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rd = _arg;
    return *this;
  }
  Type & set__rdd(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rdd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::RobotTorsoState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::RobotTorsoState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotTorsoState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotTorsoState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__RobotTorsoState
    std::shared_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__RobotTorsoState
    std::shared_ptr<dynamic_biped::msg::RobotTorsoState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTorsoState_ & other) const
  {
    if (this->torso_r != other.torso_r) {
      return false;
    }
    if (this->torso_rd != other.torso_rd) {
      return false;
    }
    if (this->torso_rdd != other.torso_rdd) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->rd != other.rd) {
      return false;
    }
    if (this->rdd != other.rdd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTorsoState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTorsoState_

// alias to use template instance with default allocator
using RobotTorsoState =
  dynamic_biped::msg::RobotTorsoState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__STRUCT_HPP_
