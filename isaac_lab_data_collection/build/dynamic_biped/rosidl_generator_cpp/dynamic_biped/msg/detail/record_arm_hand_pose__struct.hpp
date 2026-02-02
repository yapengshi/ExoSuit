// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/RecordArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/record_arm_hand_pose.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__STRUCT_HPP_

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
// Member 'left_pose'
// Member 'right_pose'
#include "dynamic_biped/msg/detail/arm_hand_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__RecordArmHandPose __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__RecordArmHandPose __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RecordArmHandPose_
{
  using Type = RecordArmHandPose_<ContainerAllocator>;

  explicit RecordArmHandPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    left_pose(_init),
    right_pose(_init)
  {
    (void)_init;
  }

  explicit RecordArmHandPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    left_pose(_alloc, _init),
    right_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_pose_type =
    dynamic_biped::msg::ArmHandPose_<ContainerAllocator>;
  _left_pose_type left_pose;
  using _right_pose_type =
    dynamic_biped::msg::ArmHandPose_<ContainerAllocator>;
  _right_pose_type right_pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_pose(
    const dynamic_biped::msg::ArmHandPose_<ContainerAllocator> & _arg)
  {
    this->left_pose = _arg;
    return *this;
  }
  Type & set__right_pose(
    const dynamic_biped::msg::ArmHandPose_<ContainerAllocator> & _arg)
  {
    this->right_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__RecordArmHandPose
    std::shared_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__RecordArmHandPose
    std::shared_ptr<dynamic_biped::msg::RecordArmHandPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordArmHandPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_pose != other.left_pose) {
      return false;
    }
    if (this->right_pose != other.right_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordArmHandPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordArmHandPose_

// alias to use template instance with default allocator
using RecordArmHandPose =
  dynamic_biped::msg::RecordArmHandPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__STRUCT_HPP_
