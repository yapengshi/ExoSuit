// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/RobotHandPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/robot_hand_position.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/robot_hand_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHandPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left_hand_position
  {
    if (msg.left_hand_position.size() == 0) {
      out << "left_hand_position: []";
    } else {
      out << "left_hand_position: [";
      size_t pending_items = msg.left_hand_position.size();
      for (auto item : msg.left_hand_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_hand_position
  {
    if (msg.right_hand_position.size() == 0) {
      out << "right_hand_position: []";
    } else {
      out << "right_hand_position: [";
      size_t pending_items = msg.right_hand_position.size();
      for (auto item : msg.right_hand_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const RobotHandPosition & msg,
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

  // member: left_hand_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_hand_position.size() == 0) {
      out << "left_hand_position: []\n";
    } else {
      out << "left_hand_position:\n";
      for (auto item : msg.left_hand_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_hand_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_hand_position.size() == 0) {
      out << "right_hand_position: []\n";
    } else {
      out << "right_hand_position:\n";
      for (auto item : msg.right_hand_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHandPosition & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::RobotHandPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::RobotHandPosition & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::RobotHandPosition>()
{
  return "dynamic_biped::msg::RobotHandPosition";
}

template<>
inline const char * name<dynamic_biped::msg::RobotHandPosition>()
{
  return "dynamic_biped/msg/RobotHandPosition";
}

template<>
struct has_fixed_size<dynamic_biped::msg::RobotHandPosition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::msg::RobotHandPosition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_biped::msg::RobotHandPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ROBOT_HAND_POSITION__TRAITS_HPP_
