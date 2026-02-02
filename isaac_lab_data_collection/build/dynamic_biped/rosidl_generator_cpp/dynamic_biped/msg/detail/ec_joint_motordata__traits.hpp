// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/ec_joint_motordata.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/ec_joint_motordata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const ECJointMotordata & msg,
  std::ostream & out)
{
  out << "{";
  // member: l_pos_pitch
  {
    out << "l_pos_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.l_pos_pitch, out);
    out << ", ";
  }

  // member: l_pos_yaw
  {
    out << "l_pos_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.l_pos_yaw, out);
    out << ", ";
  }

  // member: l_pos_end
  {
    out << "l_pos_end: ";
    rosidl_generator_traits::value_to_yaml(msg.l_pos_end, out);
    out << ", ";
  }

  // member: r_pos_pitch
  {
    out << "r_pos_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pos_pitch, out);
    out << ", ";
  }

  // member: r_pos_yaw
  {
    out << "r_pos_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pos_yaw, out);
    out << ", ";
  }

  // member: r_pos_end
  {
    out << "r_pos_end: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pos_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ECJointMotordata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l_pos_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_pos_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.l_pos_pitch, out);
    out << "\n";
  }

  // member: l_pos_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_pos_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.l_pos_yaw, out);
    out << "\n";
  }

  // member: l_pos_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_pos_end: ";
    rosidl_generator_traits::value_to_yaml(msg.l_pos_end, out);
    out << "\n";
  }

  // member: r_pos_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_pos_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pos_pitch, out);
    out << "\n";
  }

  // member: r_pos_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_pos_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pos_yaw, out);
    out << "\n";
  }

  // member: r_pos_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_pos_end: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pos_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ECJointMotordata & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::ECJointMotordata & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::ECJointMotordata & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::ECJointMotordata>()
{
  return "dynamic_biped::msg::ECJointMotordata";
}

template<>
inline const char * name<dynamic_biped::msg::ECJointMotordata>()
{
  return "dynamic_biped/msg/ECJointMotordata";
}

template<>
struct has_fixed_size<dynamic_biped::msg::ECJointMotordata>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::msg::ECJointMotordata>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::msg::ECJointMotordata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__EC_JOINT_MOTORDATA__TRAITS_HPP_
