// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_biped:srv/SrvChangePhases.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_phases.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__TRAITS_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_biped/srv/detail/srv_change_phases__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvChangePhases_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: master_id
  {
    out << "master_id: ";
    rosidl_generator_traits::value_to_yaml(msg.master_id, out);
    out << ", ";
  }

  // member: state_req
  {
    out << "state_req: ";
    rosidl_generator_traits::value_to_yaml(msg.state_req, out);
    out << ", ";
  }

  // member: sub_state
  {
    out << "sub_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvChangePhases_Request & msg,
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

  // member: state_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_req: ";
    rosidl_generator_traits::value_to_yaml(msg.state_req, out);
    out << "\n";
  }

  // member: sub_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvChangePhases_Request & msg, bool use_flow_style = false)
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
  const dynamic_biped::srv::SrvChangePhases_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::SrvChangePhases_Request & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangePhases_Request>()
{
  return "dynamic_biped::srv::SrvChangePhases_Request";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangePhases_Request>()
{
  return "dynamic_biped/srv/SrvChangePhases_Request";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangePhases_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangePhases_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_biped::srv::SrvChangePhases_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamic_biped
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvChangePhases_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_res
  {
    out << "state_res: ";
    rosidl_generator_traits::value_to_yaml(msg.state_res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvChangePhases_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_res: ";
    rosidl_generator_traits::value_to_yaml(msg.state_res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvChangePhases_Response & msg, bool use_flow_style = false)
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
  const dynamic_biped::srv::SrvChangePhases_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::SrvChangePhases_Response & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangePhases_Response>()
{
  return "dynamic_biped::srv::SrvChangePhases_Response";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangePhases_Response>()
{
  return "dynamic_biped/srv/SrvChangePhases_Response";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangePhases_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangePhases_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_biped::srv::SrvChangePhases_Response>
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
  const SrvChangePhases_Event & msg,
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
  const SrvChangePhases_Event & msg,
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

inline std::string to_yaml(const SrvChangePhases_Event & msg, bool use_flow_style = false)
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
  const dynamic_biped::srv::SrvChangePhases_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_biped::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_biped::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_biped::srv::SrvChangePhases_Event & msg)
{
  return dynamic_biped::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangePhases_Event>()
{
  return "dynamic_biped::srv::SrvChangePhases_Event";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangePhases_Event>()
{
  return "dynamic_biped/srv/SrvChangePhases_Event";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangePhases_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangePhases_Event>
  : std::integral_constant<bool, has_bounded_size<dynamic_biped::srv::SrvChangePhases_Request>::value && has_bounded_size<dynamic_biped::srv::SrvChangePhases_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dynamic_biped::srv::SrvChangePhases_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamic_biped::srv::SrvChangePhases>()
{
  return "dynamic_biped::srv::SrvChangePhases";
}

template<>
inline const char * name<dynamic_biped::srv::SrvChangePhases>()
{
  return "dynamic_biped/srv/SrvChangePhases";
}

template<>
struct has_fixed_size<dynamic_biped::srv::SrvChangePhases>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamic_biped::srv::SrvChangePhases_Request>::value &&
    has_fixed_size<dynamic_biped::srv::SrvChangePhases_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamic_biped::srv::SrvChangePhases>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamic_biped::srv::SrvChangePhases_Request>::value &&
    has_bounded_size<dynamic_biped::srv::SrvChangePhases_Response>::value
  >
{
};

template<>
struct is_service<dynamic_biped::srv::SrvChangePhases>
  : std::true_type
{
};

template<>
struct is_service_request<dynamic_biped::srv::SrvChangePhases_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamic_biped::srv::SrvChangePhases_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__TRAITS_HPP_
