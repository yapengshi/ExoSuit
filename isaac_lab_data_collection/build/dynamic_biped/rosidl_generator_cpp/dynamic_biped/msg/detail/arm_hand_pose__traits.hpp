// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:msg/ArmHandPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/msg/arm_hand_pose.hpp"


#ifndef DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__TRAITS_HPP_
#define DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/msg/detail/arm_hand_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_biped
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmHandPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_xyz
  {
    if (msg.pos_xyz.size() == 0) {
      out << "pos_xyz: []";
    } else {
      out << "pos_xyz: [";
      size_t pending_items = msg.pos_xyz.size();
      for (auto item : msg.pos_xyz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: quat_xyzw
  {
    if (msg.quat_xyzw.size() == 0) {
      out << "quat_xyzw: []";
    } else {
      out << "quat_xyzw: [";
      size_t pending_items = msg.quat_xyzw.size();
      for (auto item : msg.quat_xyzw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_angles
  {
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []";
    } else {
      out << "joint_angles: [";
      size_t pending_items = msg.joint_angles.size();
      for (auto item : msg.joint_angles) {
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
  const ArmHandPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_xyz.size() == 0) {
      out << "pos_xyz: []\n";
    } else {
      out << "pos_xyz:\n";
      for (auto item : msg.pos_xyz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: quat_xyzw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quat_xyzw.size() == 0) {
      out << "quat_xyzw: []\n";
    } else {
      out << "quat_xyzw:\n";
      for (auto item : msg.quat_xyzw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []\n";
    } else {
      out << "joint_angles:\n";
      for (auto item : msg.joint_angles) {
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

inline std::string to_yaml(const ArmHandPose & msg, bool use_flow_style = false)
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
  const dynamic_biped::msg::ArmHandPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::msg::ArmHandPose & msg)
{
  return dynamic_biped::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::msg::ArmHandPose>()
{
  return "dynamic_biped::msg::ArmHandPose";
}

template<>
inline const char * name<dynamic_biped::msg::ArmHandPose>()
{
  return "dynamic_biped/msg/ArmHandPose";
}

template<>
struct has_fixed_size<dynamic_biped::msg::ArmHandPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::msg::ArmHandPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::msg::ArmHandPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__MSG__DETAIL__ARM_HAND_POSE__TRAITS_HPP_
