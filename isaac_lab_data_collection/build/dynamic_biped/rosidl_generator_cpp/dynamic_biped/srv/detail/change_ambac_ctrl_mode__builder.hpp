// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:srv/ChangeAMBACCtrlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/change_ambac_ctrl_mode.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__BUILDER_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/srv/detail/change_ambac_ctrl_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_ChangeAMBACCtrlMode_Request_control_mode
{
public:
  Init_ChangeAMBACCtrlMode_Request_control_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Request control_mode(::dynamic_biped::srv::ChangeAMBACCtrlMode_Request::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::ChangeAMBACCtrlMode_Request>()
{
  return dynamic_biped::srv::builder::Init_ChangeAMBACCtrlMode_Request_control_mode();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_ChangeAMBACCtrlMode_Response_result
{
public:
  Init_ChangeAMBACCtrlMode_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Response result(::dynamic_biped::srv::ChangeAMBACCtrlMode_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::ChangeAMBACCtrlMode_Response>()
{
  return dynamic_biped::srv::builder::Init_ChangeAMBACCtrlMode_Response_result();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_ChangeAMBACCtrlMode_Event_response
{
public:
  explicit Init_ChangeAMBACCtrlMode_Event_response(::dynamic_biped::srv::ChangeAMBACCtrlMode_Event & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Event response(::dynamic_biped::srv::ChangeAMBACCtrlMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Event msg_;
};

class Init_ChangeAMBACCtrlMode_Event_request
{
public:
  explicit Init_ChangeAMBACCtrlMode_Event_request(::dynamic_biped::srv::ChangeAMBACCtrlMode_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeAMBACCtrlMode_Event_response request(::dynamic_biped::srv::ChangeAMBACCtrlMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeAMBACCtrlMode_Event_response(msg_);
  }

private:
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Event msg_;
};

class Init_ChangeAMBACCtrlMode_Event_info
{
public:
  Init_ChangeAMBACCtrlMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeAMBACCtrlMode_Event_request info(::dynamic_biped::srv::ChangeAMBACCtrlMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeAMBACCtrlMode_Event_request(msg_);
  }

private:
  ::dynamic_biped::srv::ChangeAMBACCtrlMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::ChangeAMBACCtrlMode_Event>()
{
  return dynamic_biped::srv::builder::Init_ChangeAMBACCtrlMode_Event_info();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__BUILDER_HPP_
