// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/arm_hand_pose.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__ArmHandPose __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__ArmHandPose __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmHandPose_
{
  using Type = ArmHandPose_<ContainerAllocator>;

  explicit ArmHandPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos_xyz.begin(), this->pos_xyz.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->quat_xyzw.begin(), this->quat_xyzw.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_angles.begin(), this->joint_angles.end(), 0.0);
    }
  }

  explicit ArmHandPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos_xyz(_alloc),
    quat_xyzw(_alloc),
    joint_angles(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos_xyz.begin(), this->pos_xyz.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->quat_xyzw.begin(), this->quat_xyzw.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_angles.begin(), this->joint_angles.end(), 0.0);
    }
  }

  // field types and members
  using _pos_xyz_type =
    std::array<double, 3>;
  _pos_xyz_type pos_xyz;
  using _quat_xyzw_type =
    std::array<double, 4>;
  _quat_xyzw_type quat_xyzw;
  using _joint_angles_type =
    std::array<double, 7>;
  _joint_angles_type joint_angles;

  // setters for named parameter idiom
  Type & set__pos_xyz(
    const std::array<double, 3> & _arg)
  {
    this->pos_xyz = _arg;
    return *this;
  }
  Type & set__quat_xyzw(
    const std::array<double, 4> & _arg)
  {
    this->quat_xyzw = _arg;
    return *this;
  }
  Type & set__joint_angles(
    const std::array<double, 7> & _arg)
  {
    this->joint_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::ArmHandPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::ArmHandPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::ArmHandPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::ArmHandPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__ArmHandPose
    std::shared_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__ArmHandPose
    std::shared_ptr<dynamic_biped::msg::ArmHandPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmHandPose_ & other) const
  {
    if (this->pos_xyz != other.pos_xyz) {
      return false;
    }
    if (this->quat_xyzw != other.quat_xyzw) {
      return false;
    }
    if (this->joint_angles != other.joint_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmHandPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmHandPose_

// alias to use template instance with default allocator
using ArmHandPose =
  dynamic_biped::msg::ArmHandPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__STRUCT_HPP_
