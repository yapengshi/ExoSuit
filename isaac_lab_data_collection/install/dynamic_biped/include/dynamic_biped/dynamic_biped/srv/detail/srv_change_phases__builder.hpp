// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:srv/SrvChangePhases.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_phases.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__BUILDER_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/srv/detail/srv_change_phases__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangePhases_Request_sub_state
{
public:
  explicit Init_SrvChangePhases_Request_sub_state(::dynamic_biped::srv::SrvChangePhases_Request & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvChangePhases_Request sub_state(::dynamic_biped::srv::SrvChangePhases_Request::_sub_state_type arg)
  {
    msg_.sub_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Request msg_;
};

class Init_SrvChangePhases_Request_state_req
{
public:
  explicit Init_SrvChangePhases_Request_state_req(::dynamic_biped::srv::SrvChangePhases_Request & msg)
  : msg_(msg)
  {}
  Init_SrvChangePhases_Request_sub_state state_req(::dynamic_biped::srv::SrvChangePhases_Request::_state_req_type arg)
  {
    msg_.state_req = std::move(arg);
    return Init_SrvChangePhases_Request_sub_state(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Request msg_;
};

class Init_SrvChangePhases_Request_master_id
{
public:
  Init_SrvChangePhases_Request_master_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvChangePhases_Request_state_req master_id(::dynamic_biped::srv::SrvChangePhases_Request::_master_id_type arg)
  {
    msg_.master_id = std::move(arg);
    return Init_SrvChangePhases_Request_state_req(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangePhases_Request>()
{
  return dynamic_biped::srv::builder::Init_SrvChangePhases_Request_master_id();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangePhases_Response_state_res
{
public:
  Init_SrvChangePhases_Response_state_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::SrvChangePhases_Response state_res(::dynamic_biped::srv::SrvChangePhases_Response::_state_res_type arg)
  {
    msg_.state_res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangePhases_Response>()
{
  return dynamic_biped::srv::builder::Init_SrvChangePhases_Response_state_res();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvChangePhases_Event_response
{
public:
  explicit Init_SrvChangePhases_Event_response(::dynamic_biped::srv::SrvChangePhases_Event & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvChangePhases_Event response(::dynamic_biped::srv::SrvChangePhases_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Event msg_;
};

class Init_SrvChangePhases_Event_request
{
public:
  explicit Init_SrvChangePhases_Event_request(::dynamic_biped::srv::SrvChangePhases_Event & msg)
  : msg_(msg)
  {}
  Init_SrvChangePhases_Event_response request(::dynamic_biped::srv::SrvChangePhases_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SrvChangePhases_Event_response(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Event msg_;
};

class Init_SrvChangePhases_Event_info
{
public:
  Init_SrvChangePhases_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvChangePhases_Event_request info(::dynamic_biped::srv::SrvChangePhases_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SrvChangePhases_Event_request(msg_);
  }

private:
  ::dynamic_biped::srv::SrvChangePhases_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvChangePhases_Event>()
{
  return dynamic_biped::srv::builder::Init_SrvChangePhases_Event_info();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__BUILDER_HPP_
