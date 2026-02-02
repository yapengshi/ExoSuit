// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/HandRotationEular.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/hand_rotation_eular.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/hand_rotation_eular__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'euler_angles'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandRotationEular & msg,
  std::ostream & out)
{
  out << "{";
  // member: euler_angles
  {
    if (msg.euler_angles.size() == 0) {
      out << "euler_angles: []";
    } else {
      out << "euler_angles: [";
      size_t pending_items = msg.euler_angles.size();
      for (auto item : msg.euler_angles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandRotationEular & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: euler_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.euler_angles.size() == 0) {
      out << "euler_angles: []\n";
    } else {
      out << "euler_angles:\n";
      for (auto item : msg.euler_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandRotationEular & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::HandRotationEular & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::HandRotationEular & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::HandRotationEular>()
{
  return "dynamic_biped::msg::HandRotationEular";
}

template<>
inline const char * name<dynamic_biped::msg::HandRotationEular>()
{
  return "dynamic_biped/msg/HandRotationEular";
}

template<>
struct has_fixed_size<dynamic_biped::msg::HandRotationEular>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::msg::HandRotationEular>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_biped::msg::HandRotationEular>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__HAND_ROTATION_EULAR__TRAITS_HPP_
