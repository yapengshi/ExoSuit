// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/ec_joint_motordata.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__BUILDER_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/msg/detail/ec_joint_motordata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace msg
{

namespace builder
{

class Init_ECJointMotordata_r_pos_end
{
public:
  explicit Init_ECJointMotordata_r_pos_end(::dynamic_biped::msg::ECJointMotordata & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::msg::ECJointMotordata r_pos_end(::dynamic_biped::msg::ECJointMotordata::_r_pos_end_type arg)
  {
    msg_.r_pos_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::msg::ECJointMotordata msg_;
};

class Init_ECJointMotordata_r_pos_yaw
{
public:
  explicit Init_ECJointMotordata_r_pos_yaw(::dynamic_biped::msg::ECJointMotordata & msg)
  : msg_(msg)
  {}
  Init_ECJointMotordata_r_pos_end r_pos_yaw(::dynamic_biped::msg::ECJointMotordata::_r_pos_yaw_type arg)
  {
    msg_.r_pos_yaw = std::move(arg);
    return Init_ECJointMotordata_r_pos_end(msg_);
  }

private:
  ::dynamic_biped::msg::ECJointMotordata msg_;
};

class Init_ECJointMotordata_r_pos_pitch
{
public:
  explicit Init_ECJointMotordata_r_pos_pitch(::dynamic_biped::msg::ECJointMotordata & msg)
  : msg_(msg)
  {}
  Init_ECJointMotordata_r_pos_yaw r_pos_pitch(::dynamic_biped::msg::ECJointMotordata::_r_pos_pitch_type arg)
  {
    msg_.r_pos_pitch = std::move(arg);
    return Init_ECJointMotordata_r_pos_yaw(msg_);
  }

private:
  ::dynamic_biped::msg::ECJointMotordata msg_;
};

class Init_ECJointMotordata_l_pos_end
{
public:
  explicit Init_ECJointMotordata_l_pos_end(::dynamic_biped::msg::ECJointMotordata & msg)
  : msg_(msg)
  {}
  Init_ECJointMotordata_r_pos_pitch l_pos_end(::dynamic_biped::msg::ECJointMotordata::_l_pos_end_type arg)
  {
    msg_.l_pos_end = std::move(arg);
    return Init_ECJointMotordata_r_pos_pitch(msg_);
  }

private:
  ::dynamic_biped::msg::ECJointMotordata msg_;
};

class Init_ECJointMotordata_l_pos_yaw
{
public:
  explicit Init_ECJointMotordata_l_pos_yaw(::dynamic_biped::msg::ECJointMotordata & msg)
  : msg_(msg)
  {}
  Init_ECJointMotordata_l_pos_end l_pos_yaw(::dynamic_biped::msg::ECJointMotordata::_l_pos_yaw_type arg)
  {
    msg_.l_pos_yaw = std::move(arg);
    return Init_ECJointMotordata_l_pos_end(msg_);
  }

private:
  ::dynamic_biped::msg::ECJointMotordata msg_;
};

class Init_ECJointMotordata_l_pos_pitch
{
public:
  Init_ECJointMotordata_l_pos_pitch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ECJointMotordata_l_pos_yaw l_pos_pitch(::dynamic_biped::msg::ECJointMotordata::_l_pos_pitch_type arg)
  {
    msg_.l_pos_pitch = std::move(arg);
    return Init_ECJointMotordata_l_pos_yaw(msg_);
  }

private:
  ::dynamic_biped::msg::ECJointMotordata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::msg::ECJointMotordata>()
{
  return dynamic_biped::msg::builder::Init_ECJointMotordata_l_pos_pitch();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__BUILDER_HPP_
