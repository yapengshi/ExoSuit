// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/RecordArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/record_arm_hand_pose.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/record_arm_hand_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'left_pose'
// Member 'right_pose'
#include "dynamic_biped/msg/detail/arm_hand_pose__traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const RecordArmHandPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left_pose
  {
    out << "left_pose: ";
    to_flow_style_yaml(msg.left_pose, out);
    out << ", ";
  }

  // member: right_pose
  {
    out << "right_pose: ";
    to_flow_style_yaml(msg.right_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordArmHandPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: left_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_pose:\n";
    to_block_style_yaml(msg.left_pose, out, indentation + 2);
  }

  // member: right_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_pose:\n";
    to_block_style_yaml(msg.right_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordArmHandPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynamic_biped

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_biped::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_biped::msg::RecordArmHandPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::RecordArmHandPose & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::RecordArmHandPose>()
{
  return "dynamic_biped::msg::RecordArmHandPose";
}

template<>
inline const char * name<dynamic_biped::msg::RecordArmHandPose>()
{
  return "dynamic_biped/msg/RecordArmHandPose";
}

template<>
struct has_fixed_size<dynamic_biped::msg::RecordArmHandPose>
  : std::integral_constant<bool, has_fixed_size<dynamic_biped::msg::ArmHandPose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dynamic_biped::msg::RecordArmHandPose>
  : std::integral_constant<bool, has_bounded_size<dynamic_biped::msg::ArmHandPose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dynamic_biped::msg::RecordArmHandPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__RECORD_ARM_HAND_POSE__TRAITS_HPP_
