// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/RobotPhase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_phase.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/robot_phase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotPhase & msg,
  std::ostream & out)
{
  out << "{";
  // member: main_phase
  {
    out << "main_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.main_phase, out);
    out << ", ";
  }

  // member: sub_phase
  {
    out << "sub_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_phase, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPhase & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: main_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.main_phase, out);
    out << "\n";
  }

  // member: sub_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_phase, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPhase & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::RobotPhase & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::RobotPhase & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::RobotPhase>()
{
  return "dynamic_biped::msg::RobotPhase";
}

template<>
inline const char * name<dynamic_biped::msg::RobotPhase>()
{
  return "dynamic_biped/msg/RobotPhase";
}

template<>
struct has_fixed_size<dynamic_biped::msg::RobotPhase>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::msg::RobotPhase>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::msg::RobotPhase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_PHASE__TRAITS_HPP_
