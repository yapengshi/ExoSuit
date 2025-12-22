// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:srv/SrvChangeCtlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_ctl_mode.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_CTL_MODE__TRAITS_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_CTL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/srv/detail/srv_change_ctl_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvChangeCtlMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: master_id
  {
    out << "master_id: ";
    rosidl_generator_traits::value_to_yaml(msg.master_id, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvChangeCtlMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: master_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_id: ";
    rosidl_generator_traits::value_to_yaml(msg.master_id, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvChangeCtlMode_Request & msg, bool use_flow_style = false)
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
  const dynamic_biped::srv::SrvChangeCtlMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::SrvChangeCtlMode_Request & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangeCtlMode_Request>()
{
  return "dynamic_biped::srv::SrvChangeCtlMode_Request";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangeCtlMode_Request>()
{
  return "dynamic_biped/srv/SrvChangeCtlMode_Request";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangeCtlMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::srv::SrvChangeCtlMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvChangeCtlMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvChangeCtlMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvChangeCtlMode_Response & msg, bool use_flow_style = false)
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
  const dynamic_biped::srv::SrvChangeCtlMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::SrvChangeCtlMode_Response & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangeCtlMode_Response>()
{
  return "dynamic_biped::srv::SrvChangeCtlMode_Response";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangeCtlMode_Response>()
{
  return "dynamic_biped/srv/SrvChangeCtlMode_Response";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangeCtlMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::srv::SrvChangeCtlMode_Response>
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
  const SrvChangeCtlMode_Event & msg,
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
  const SrvChangeCtlMode_Event & msg,
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

inline std::string to_yaml(const SrvChangeCtlMode_Event & msg, bool use_flow_style = false)
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
  const dynamic_biped::srv::SrvChangeCtlMode_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::SrvChangeCtlMode_Event & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangeCtlMode_Event>()
{
  return "dynamic_biped::srv::SrvChangeCtlMode_Event";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangeCtlMode_Event>()
{
  return "dynamic_biped/srv/SrvChangeCtlMode_Event";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangeCtlMode_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Event>
  : std::integral_constant<bool, has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Request>::value && has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dynamic_biped::srv::SrvChangeCtlMode_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangeCtlMode>()
{
  return "dynamic_biped::srv::SrvChangeCtlMode";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangeCtlMode>()
{
  return "dynamic_biped/srv/SrvChangeCtlMode";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangeCtlMode>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamic_biped::srv::SrvChangeCtlMode_Request>::value &&
    has_fixed_size<dynamic_biped::srv::SrvChangeCtlMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Request>::value &&
    has_bounded_size<dynamic_biped::srv::SrvChangeCtlMode_Response>::value
  >
{
};

template<>
struct is_service<dynamic_biped::srv::SrvChangeCtlMode>
  : std::true_type
{
};

template<>
struct is_service_request<dynamic_biped::srv::SrvChangeCtlMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamic_biped::srv::SrvChangeCtlMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_CTL_MODE__TRAITS_HPP_
