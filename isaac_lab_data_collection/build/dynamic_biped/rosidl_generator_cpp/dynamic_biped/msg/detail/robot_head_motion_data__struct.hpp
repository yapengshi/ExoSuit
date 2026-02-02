// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/RobotHeadMotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_head_motion_data.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__RobotHeadMotionData __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__RobotHeadMotionData __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHeadMotionData_
{
  using Type = RobotHeadMotionData_<ContainerAllocator>;

  explicit RobotHeadMotionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotHeadMotionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_data_type joint_data;

  // setters for named parameter idiom
  Type & set__joint_data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__RobotHeadMotionData
    std::shared_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__RobotHeadMotionData
    std::shared_ptr<dynamic_biped::msg::RobotHeadMotionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHeadMotionData_ & other) const
  {
    if (this->joint_data != other.joint_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHeadMotionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHeadMotionData_

// alias to use template instance with default allocator
using RobotHeadMotionData =
  dynamic_biped::msg::RobotHeadMotionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HEAD_MOTION_DATA__STRUCT_HPP_
