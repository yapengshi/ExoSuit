// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:srv/ChangeAMBACCtrlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/change_ambac_ctrl_mode.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__STRUCT_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Request __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeAMBACCtrlMode_Request_
{
  using Type = ChangeAMBACCtrlMode_Request_<ContainerAllocator>;

  explicit ChangeAMBACCtrlMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_mode = false;
    }
  }

  explicit ChangeAMBACCtrlMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_mode = false;
    }
  }

  // field types and members
  using _control_mode_type =
    bool;
  _control_mode_type control_mode;

  // setters for named parameter idiom
  Type & set__control_mode(
    const bool & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Request
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Request
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeAMBACCtrlMode_Request_ & other) const
  {
    if (this->control_mode != other.control_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeAMBACCtrlMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeAMBACCtrlMode_Request_

// alias to use template instance with default allocator
using ChangeAMBACCtrlMode_Request =
  dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamic_biped


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Response __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeAMBACCtrlMode_Response_
{
  using Type = ChangeAMBACCtrlMode_Response_<ContainerAllocator>;

  explicit ChangeAMBACCtrlMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit ChangeAMBACCtrlMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Response
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Response
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeAMBACCtrlMode_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeAMBACCtrlMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeAMBACCtrlMode_Response_

// alias to use template instance with default allocator
using ChangeAMBACCtrlMode_Response =
  dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamic_biped


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Event __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Event __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeAMBACCtrlMode_Event_
{
  using Type = ChangeAMBACCtrlMode_Event_<ContainerAllocator>;

  explicit ChangeAMBACCtrlMode_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChangeAMBACCtrlMode_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::ChangeAMBACCtrlMode_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::ChangeAMBACCtrlMode_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Event
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__srv__ChangeAMBACCtrlMode_Event
    std::shared_ptr<dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeAMBACCtrlMode_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeAMBACCtrlMode_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeAMBACCtrlMode_Event_

// alias to use template instance with default allocator
using ChangeAMBACCtrlMode_Event =
  dynamic_biped::srv::ChangeAMBACCtrlMode_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamic_biped

namespace dynamic_biped
{

namespace srv
{

struct ChangeAMBACCtrlMode
{
  using Request = dynamic_biped::srv::ChangeAMBACCtrlMode_Request;
  using Response = dynamic_biped::srv::ChangeAMBACCtrlMode_Response;
  using Event = dynamic_biped::srv::ChangeAMBACCtrlMode_Event;
};

}  // namespace srv

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__CHANGE_AMBAC_CTRL_MODE__STRUCT_HPP_
