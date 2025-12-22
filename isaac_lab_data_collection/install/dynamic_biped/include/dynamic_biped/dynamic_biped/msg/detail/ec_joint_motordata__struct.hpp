// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/ec_joint_motordata.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__STRUCT_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__msg__ECJointMotordata __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__msg__ECJointMotordata __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ECJointMotordata_
{
  using Type = ECJointMotordata_<ContainerAllocator>;

  explicit ECJointMotordata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_pos_pitch = 0l;
      this->l_pos_yaw = 0l;
      this->l_pos_end = 0l;
      this->r_pos_pitch = 0l;
      this->r_pos_yaw = 0l;
      this->r_pos_end = 0l;
    }
  }

  explicit ECJointMotordata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_pos_pitch = 0l;
      this->l_pos_yaw = 0l;
      this->l_pos_end = 0l;
      this->r_pos_pitch = 0l;
      this->r_pos_yaw = 0l;
      this->r_pos_end = 0l;
    }
  }

  // field types and members
  using _l_pos_pitch_type =
    int32_t;
  _l_pos_pitch_type l_pos_pitch;
  using _l_pos_yaw_type =
    int32_t;
  _l_pos_yaw_type l_pos_yaw;
  using _l_pos_end_type =
    int32_t;
  _l_pos_end_type l_pos_end;
  using _r_pos_pitch_type =
    int32_t;
  _r_pos_pitch_type r_pos_pitch;
  using _r_pos_yaw_type =
    int32_t;
  _r_pos_yaw_type r_pos_yaw;
  using _r_pos_end_type =
    int32_t;
  _r_pos_end_type r_pos_end;

  // setters for named parameter idiom
  Type & set__l_pos_pitch(
    const int32_t & _arg)
  {
    this->l_pos_pitch = _arg;
    return *this;
  }
  Type & set__l_pos_yaw(
    const int32_t & _arg)
  {
    this->l_pos_yaw = _arg;
    return *this;
  }
  Type & set__l_pos_end(
    const int32_t & _arg)
  {
    this->l_pos_end = _arg;
    return *this;
  }
  Type & set__r_pos_pitch(
    const int32_t & _arg)
  {
    this->r_pos_pitch = _arg;
    return *this;
  }
  Type & set__r_pos_yaw(
    const int32_t & _arg)
  {
    this->r_pos_yaw = _arg;
    return *this;
  }
  Type & set__r_pos_end(
    const int32_t & _arg)
  {
    this->r_pos_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::msg::ECJointMotordata_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::msg::ECJointMotordata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::ECJointMotordata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::msg::ECJointMotordata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__msg__ECJointMotordata
    std::shared_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__msg__ECJointMotordata
    std::shared_ptr<dynamic_biped::msg::ECJointMotordata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ECJointMotordata_ & other) const
  {
    if (this->l_pos_pitch != other.l_pos_pitch) {
      return false;
    }
    if (this->l_pos_yaw != other.l_pos_yaw) {
      return false;
    }
    if (this->l_pos_end != other.l_pos_end) {
      return false;
    }
    if (this->r_pos_pitch != other.r_pos_pitch) {
      return false;
    }
    if (this->r_pos_yaw != other.r_pos_yaw) {
      return false;
    }
    if (this->r_pos_end != other.r_pos_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const ECJointMotordata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ECJointMotordata_

// alias to use template instance with default allocator
using ECJointMotordata =
  dynamic_biped::msg::ECJointMotordata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__STRUCT_HPP_
