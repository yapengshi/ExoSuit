// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:srv/SrvChangeCtlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_ctl_mode.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_CTL_MODE__BUILDER_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_CTL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/srv/detail/srv_change_ctl_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangeCtlMode_Request_control_mode
{
public:
  explicit Init_SrvChangeCtlMode_Request_control_mode(::dynamic_biped::srv::SrvChangeCtlMode_Request & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvChangeCtlMode_Request control_mode(::dynamic_biped::srv::SrvChangeCtlMode_Request::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeCtlMode_Request msg_;
};

class Init_SrvChangeCtlMode_Request_master_id
{
public:
  Init_SrvChangeCtlMode_Request_master_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvChangeCtlMode_Request_control_mode master_id(::dynamic_biped::srv::SrvChangeCtlMode_Request::_master_id_type arg)
  {
    msg_.master_id = std::move(arg);
    return Init_SrvChangeCtlMode_Request_control_mode(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeCtlMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangeCtlMode_Request>()
{
  return dynamic_biped::srv::builder::Init_SrvChangeCtlMode_Request_master_id();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangeCtlMode_Response_control_mode
{
public:
  Init_SrvChangeCtlMode_Response_control_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::SrvChangeCtlMode_Response control_mode(::dynamic_biped::srv::SrvChangeCtlMode_Response::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeCtlMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangeCtlMode_Response>()
{
  return dynamic_biped::srv::builder::Init_SrvChangeCtlMode_Response_control_mode();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangeCtlMode_Event_response
{
public:
  explicit Init_SrvChangeCtlMode_Event_response(::dynamic_biped::srv::SrvChangeCtlMode_Event & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvChangeCtlMode_Event response(::dynamic_biped::srv::SrvChangeCtlMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeCtlMode_Event msg_;
};

class Init_SrvChangeCtlMode_Event_request
{
public:
  explicit Init_SrvChangeCtlMode_Event_request(::dynamic_biped::srv::SrvChangeCtlMode_Event & msg)
  : msg_(msg)
  {}
  Init_SrvChangeCtlMode_Event_response request(::dynamic_biped::srv::SrvChangeCtlMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SrvChangeCtlMode_Event_response(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeCtlMode_Event msg_;
};

class Init_SrvChangeCtlMode_Event_info
{
public:
  Init_SrvChangeCtlMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvChangeCtlMode_Event_request info(::dynamic_biped::srv::SrvChangeCtlMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SrvChangeCtlMode_Event_request(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeCtlMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangeCtlMode_Event>()
{
  return dynamic_biped::srv::builder::Init_SrvChangeCtlMode_Event_info();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_CTL_MODE__BUILDER_HPP_
