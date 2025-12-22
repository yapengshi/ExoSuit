// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:srv/ControlEndHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/control_end_hand.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__TRAITS_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/srv/detail/control_end_hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlEndHand_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  const ControlEndHand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const ControlEndHand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_biped::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_biped::srv::ControlEndHand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::ControlEndHand_Request & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::ControlEndHand_Request>()
{
  return "dynamic_biped::srv::ControlEndHand_Request";
}

template<>
inline const char * name<dynamic_biped::srv::ControlEndHand_Request>()
{
  return "dynamic_biped/srv/ControlEndHand_Request";
}

template<>
struct has_fixed_size<dynamic_biped::srv::ControlEndHand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::srv::ControlEndHand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_biped::srv::ControlEndHand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlEndHand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlEndHand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlEndHand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_biped::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_biped::srv::ControlEndHand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::ControlEndHand_Response & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::ControlEndHand_Response>()
{
  return "dynamic_biped::srv::ControlEndHand_Response";
}

template<>
inline const char * name<dynamic_biped::srv::ControlEndHand_Response>()
{
  return "dynamic_biped/srv/ControlEndHand_Response";
}

template<>
struct has_fixed_size<dynamic_biped::srv::ControlEndHand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::srv::ControlEndHand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::srv::ControlEndHand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlEndHand_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const ControlEndHand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlEndHand_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_biped::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_biped::srv::ControlEndHand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::ControlEndHand_Event & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::ControlEndHand_Event>()
{
  return "dynamic_biped::srv::ControlEndHand_Event";
}

template<>
inline const char * name<dynamic_biped::srv::ControlEndHand_Event>()
{
  return "dynamic_biped/srv/ControlEndHand_Event";
}

template<>
struct has_fixed_size<dynamic_biped::srv::ControlEndHand_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::srv::ControlEndHand_Event>
  : std::integral_constant<bool, has_bounded_size<dynamic_biped::srv::ControlEndHand_Request>::value && has_bounded_size<dynamic_biped::srv::ControlEndHand_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dynamic_biped::srv::ControlEndHand_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamic_biped::srv::ControlEndHand>()
{
  return "dynamic_biped::srv::ControlEndHand";
}

template<>
inline const char * name<dynamic_biped::srv::ControlEndHand>()
{
  return "dynamic_biped/srv/ControlEndHand";
}

template<>
struct has_fixed_size<dynamic_biped::srv::ControlEndHand>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamic_biped::srv::ControlEndHand_Request>::value &&
    has_fixed_size<dynamic_biped::srv::ControlEndHand_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamic_biped::srv::ControlEndHand>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamic_biped::srv::ControlEndHand_Request>::value &&
    has_bounded_size<dynamic_biped::srv::ControlEndHand_Response>::value
  >
{
};

template<>
struct is_service<dynamic_biped::srv::ControlEndHand>
  : std::true_type
{
};

template<>
struct is_service_request<dynamic_biped::srv::ControlEndHand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamic_biped::srv::ControlEndHand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__TRAITS_HPP_
