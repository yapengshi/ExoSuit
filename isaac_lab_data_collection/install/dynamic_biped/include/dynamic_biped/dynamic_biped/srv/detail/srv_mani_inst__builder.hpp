// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:srv/SrvManiInst.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_mani_inst.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_MANI_INST__BUILDER_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_MANI_INST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/srv/detail/srv_mani_inst__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvManiInst_Request_intruction
{
public:
  Init_SrvManiInst_Request_intruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::SrvManiInst_Request intruction(::dynamic_biped::srv::SrvManiInst_Request::_intruction_type arg)
  {
    msg_.intruction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvManiInst_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvManiInst_Request>()
{
  return dynamic_biped::srv::builder::Init_SrvManiInst_Request_intruction();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvManiInst_Response_state_res
{
public:
  Init_SrvManiInst_Response_state_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::SrvManiInst_Response state_res(::dynamic_biped::srv::SrvManiInst_Response::_state_res_type arg)
  {
    msg_.state_res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvManiInst_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvManiInst_Response>()
{
  return dynamic_biped::srv::builder::Init_SrvManiInst_Response_state_res();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_SrvManiInst_Event_response
{
public:
  explicit Init_SrvManiInst_Event_response(::dynamic_biped::srv::SrvManiInst_Event & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::SrvManiInst_Event response(::dynamic_biped::srv::SrvManiInst_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::SrvManiInst_Event msg_;
};

class Init_SrvManiInst_Event_request
{
public:
  explicit Init_SrvManiInst_Event_request(::dynamic_biped::srv::SrvManiInst_Event & msg)
  : msg_(msg)
  {}
  Init_SrvManiInst_Event_response request(::dynamic_biped::srv::SrvManiInst_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SrvManiInst_Event_response(msg_);
  }

private:
  ::dynamic_biped::srv::SrvManiInst_Event msg_;
};

class Init_SrvManiInst_Event_info
{
public:
  Init_SrvManiInst_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvManiInst_Event_request info(::dynamic_biped::srv::SrvManiInst_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SrvManiInst_Event_request(msg_);
  }

private:
  ::dynamic_biped::srv::SrvManiInst_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::SrvManiInst_Event>()
{
  return dynamic_biped::srv::builder::Init_SrvManiInst_Event_info();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_MANI_INST__BUILDER_HPP_
