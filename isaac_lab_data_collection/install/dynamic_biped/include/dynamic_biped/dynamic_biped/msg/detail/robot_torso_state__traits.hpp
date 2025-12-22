// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/RobotTorsoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_torso_state.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/robot_torso_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'torso_r'
// Member 'torso_rd'
// Member 'torso_rdd'
// Member 'r'
// Member 'rd'
// Member 'rdd'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotTorsoState & msg,
  std::ostream & out)
{
  out << "{";
  // member: torso_r
  {
    out << "torso_r: ";
    to_flow_style_yaml(msg.torso_r, out);
    out << ", ";
  }

  // member: torso_rd
  {
    out << "torso_rd: ";
    to_flow_style_yaml(msg.torso_rd, out);
    out << ", ";
  }

  // member: torso_rdd
  {
    out << "torso_rdd: ";
    to_flow_style_yaml(msg.torso_rdd, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    to_flow_style_yaml(msg.r, out);
    out << ", ";
  }

  // member: rd
  {
    out << "rd: ";
    to_flow_style_yaml(msg.rd, out);
    out << ", ";
  }

  // member: rdd
  {
    out << "rdd: ";
    to_flow_style_yaml(msg.rdd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotTorsoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: torso_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torso_r:\n";
    to_block_style_yaml(msg.torso_r, out, indentation + 2);
  }

  // member: torso_rd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torso_rd:\n";
    to_block_style_yaml(msg.torso_rd, out, indentation + 2);
  }

  // member: torso_rdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torso_rdd:\n";
    to_block_style_yaml(msg.torso_rdd, out, indentation + 2);
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r:\n";
    to_block_style_yaml(msg.r, out, indentation + 2);
  }

  // member: rd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rd:\n";
    to_block_style_yaml(msg.rd, out, indentation + 2);
  }

  // member: rdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rdd:\n";
    to_block_style_yaml(msg.rdd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotTorsoState & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::RobotTorsoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::RobotTorsoState & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::RobotTorsoState>()
{
  return "dynamic_biped::msg::RobotTorsoState";
}

template<>
inline const char * name<dynamic_biped::msg::RobotTorsoState>()
{
  return "dynamic_biped/msg/RobotTorsoState";
}

template<>
struct has_fixed_size<dynamic_biped::msg::RobotTorsoState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<dynamic_biped::msg::RobotTorsoState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<dynamic_biped::msg::RobotTorsoState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_TORSO_STATE__TRAITS_HPP_
