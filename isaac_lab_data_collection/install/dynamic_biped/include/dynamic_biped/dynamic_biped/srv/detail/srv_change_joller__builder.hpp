// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:srv/SrvChangeJoller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_joller.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_JOLLER__BUILDER_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_JOLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/srv/detail/srv_change_joller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangeJoller_Request_r_pos
{
public:
  explicit Init_SrvChangeJoller_Request_r_pos(::dynamic_biped::srv::SrvChangeJoller_Request & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvChangeJoller_Request r_pos(::dynamic_biped::srv::SrvChangeJoller_Request::_r_pos_type arg)
  {
    msg_.r_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeJoller_Request msg_;
};

class Init_SrvChangeJoller_Request_l_pos
{
public:
  Init_SrvChangeJoller_Request_l_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvChangeJoller_Request_r_pos l_pos(::dynamic_biped::srv::SrvChangeJoller_Request::_l_pos_type arg)
  {
    msg_.l_pos = std::move(arg);
    return Init_SrvChangeJoller_Request_r_pos(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeJoller_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangeJoller_Request>()
{
  return dynamic_biped::srv::builder::Init_SrvChangeJoller_Request_l_pos();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangeJoller_Response_result
{
public:
  Init_SrvChangeJoller_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::SrvChangeJoller_Response result(::dynamic_biped::srv::SrvChangeJoller_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeJoller_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangeJoller_Response>()
{
  return dynamic_biped::srv::builder::Init_SrvChangeJoller_Response_result();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangeJoller_Event_response
{
public:
  explicit Init_SrvChangeJoller_Event_response(::dynamic_biped::srv::SrvChangeJoller_Event & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvChangeJoller_Event response(::dynamic_biped::srv::SrvChangeJoller_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeJoller_Event msg_;
};

class Init_SrvChangeJoller_Event_request
{
public:
  explicit Init_SrvChangeJoller_Event_request(::dynamic_biped::srv::SrvChangeJoller_Event & msg)
  : msg_(msg)
  {}
  Init_SrvChangeJoller_Event_response request(::dynamic_biped::srv::SrvChangeJoller_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SrvChangeJoller_Event_response(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeJoller_Event msg_;
};

class Init_SrvChangeJoller_Event_info
{
public:
  Init_SrvChangeJoller_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvChangeJoller_Event_request info(::dynamic_biped::srv::SrvChangeJoller_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SrvChangeJoller_Event_request(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangeJoller_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangeJoller_Event>()
{
  return dynamic_biped::srv::builder::Init_SrvChangeJoller_Event_info();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_JOLLER__BUILDER_HPP_
