// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/QuaternionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/quaternion_array.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/quaternion_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'quaternions'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuaternionArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: quaternions
  {
    if (msg.quaternions.size() == 0) {
      out << "quaternions: []";
    } else {
      out << "quaternions: [";
      size_t pending_items = msg.quaternions.size();
      for (auto item : msg.quaternions) {
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
  const QuaternionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quaternions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quaternions.size() == 0) {
      out << "quaternions: []\n";
    } else {
      out << "quaternions:\n";
      for (auto item : msg.quaternions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuaternionArray & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::QuaternionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::QuaternionArray & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::QuaternionArray>()
{
  return "dynamic_biped::msg::QuaternionArray";
}

template<>
inline const char * name<dynamic_biped::msg::QuaternionArray>()
{
  return "dynamic_biped/msg/QuaternionArray";
}

template<>
struct has_fixed_size<dynamic_biped::msg::QuaternionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::msg::QuaternionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_biped::msg::QuaternionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__QUATERNION_ARRAY__TRAITS_HPP_
