// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_biped:srv/ControlEndHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/control_end_hand.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__BUILDER_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_biped/srv/detail/control_end_hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_ControlEndHand_Request_right_hand_position
{
public:
  explicit Init_ControlEndHand_Request_right_hand_position(::dynamic_biped::srv::ControlEndHand_Request & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::ControlEndHand_Request right_hand_position(::dynamic_biped::srv::ControlEndHand_Request::_right_hand_position_type arg)
  {
    msg_.right_hand_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::ControlEndHand_Request msg_;
};

class Init_ControlEndHand_Request_left_hand_position
{
public:
  Init_ControlEndHand_Request_left_hand_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlEndHand_Request_right_hand_position left_hand_position(::dynamic_biped::srv::ControlEndHand_Request::_left_hand_position_type arg)
  {
    msg_.left_hand_position = std::move(arg);
    return Init_ControlEndHand_Request_right_hand_position(msg_);
  }

private:
  ::dynamic_biped::srv::ControlEndHand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::ControlEndHand_Request>()
{
  return dynamic_biped::srv::builder::Init_ControlEndHand_Request_left_hand_position();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_ControlEndHand_Response_result
{
public:
  Init_ControlEndHand_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_biped::srv::ControlEndHand_Response result(::dynamic_biped::srv::ControlEndHand_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::ControlEndHand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::ControlEndHand_Response>()
{
  return dynamic_biped::srv::builder::Init_ControlEndHand_Response_result();
}

}  // namespace dynamic_biped


namespace dynamic_biped
{

namespace srv
{

namespace builder
{

class Init_ControlEndHand_Event_response
{
public:
  explicit Init_ControlEndHand_Event_response(::dynamic_biped::srv::ControlEndHand_Event & msg)
  : msg_(msg)
  {}
  ::dynamic_biped::srv::ControlEndHand_Event response(::dynamic_biped::srv::ControlEndHand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_biped::srv::ControlEndHand_Event msg_;
};

class Init_ControlEndHand_Event_request
{
public:
  explicit Init_ControlEndHand_Event_request(::dynamic_biped::srv::ControlEndHand_Event & msg)
  : msg_(msg)
  {}
  Init_ControlEndHand_Event_response request(::dynamic_biped::srv::ControlEndHand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ControlEndHand_Event_response(msg_);
  }

private:
  ::dynamic_biped::srv::ControlEndHand_Event msg_;
};

class Init_ControlEndHand_Event_info
{
public:
  Init_ControlEndHand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlEndHand_Event_request info(::dynamic_biped::srv::ControlEndHand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ControlEndHand_Event_request(msg_);
  }

private:
  ::dynamic_biped::srv::ControlEndHand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_biped::srv::ControlEndHand_Event>()
{
  return dynamic_biped::srv::builder::Init_ControlEndHand_Event_info();
}

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CONTROL_END_HAND__BUILDER_HPP_
