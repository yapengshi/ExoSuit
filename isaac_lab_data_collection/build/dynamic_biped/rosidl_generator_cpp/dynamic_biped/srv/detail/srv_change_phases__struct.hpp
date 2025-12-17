// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_biped:srv/SrvChangePhases.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_phases.hpp"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__STRUCT_HPP_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__srv__SrvChangePhases_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__srv__SrvChangePhases_Request __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvChangePhases_Request_
{
  using Type = SrvChangePhases_Request_<ContainerAllocator>;

  explicit SrvChangePhases_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->master_id = 0;
      this->state_req = "";
      this->sub_state = "";
    }
  }

  explicit SrvChangePhases_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_req(_alloc),
    sub_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->master_id = 0;
      this->state_req = "";
      this->sub_state = "";
    }
  }

  // field types and members
  using _master_id_type =
    uint8_t;
  _master_id_type master_id;
  using _state_req_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_req_type state_req;
  using _sub_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sub_state_type sub_state;

  // setters for named parameter idiom
  Type & set__master_id(
    const uint8_t & _arg)
  {
    this->master_id = _arg;
    return *this;
  }
  Type & set__state_req(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_req = _arg;
    return *this;
  }
  Type & set__sub_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sub_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__srv__SrvChangePhases_Request
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__srv__SrvChangePhases_Request
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvChangePhases_Request_ & other) const
  {
    if (this->master_id != other.master_id) {
      return false;
    }
    if (this->state_req != other.state_req) {
      return false;
    }
    if (this->sub_state != other.sub_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvChangePhases_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvChangePhases_Request_

// alias to use template instance with default allocator
using SrvChangePhases_Request =
  dynamic_biped::srv::SrvChangePhases_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamic_biped


#ifndef _WIN32
# define DEPRECATED__dynamic_biped__srv__SrvChangePhases_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__srv__SrvChangePhases_Response __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvChangePhases_Response_
{
  using Type = SrvChangePhases_Response_<ContainerAllocator>;

  explicit SrvChangePhases_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_res = 0;
    }
  }

  explicit SrvChangePhases_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_res = 0;
    }
  }

  // field types and members
  using _state_res_type =
    int16_t;
  _state_res_type state_res;

  // setters for named parameter idiom
  Type & set__state_res(
    const int16_t & _arg)
  {
    this->state_res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__srv__SrvChangePhases_Response
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__srv__SrvChangePhases_Response
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvChangePhases_Response_ & other) const
  {
    if (this->state_res != other.state_res) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvChangePhases_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvChangePhases_Response_

// alias to use template instance with default allocator
using SrvChangePhases_Response =
  dynamic_biped::srv::SrvChangePhases_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamic_biped


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_biped__srv__SrvChangePhases_Event __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_biped__srv__SrvChangePhases_Event __declspec(deprecated)
#endif

namespace dynamic_biped
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvChangePhases_Event_
{
  using Type = SrvChangePhases_Event_<ContainerAllocator>;

  explicit SrvChangePhases_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SrvChangePhases_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::SrvChangePhases_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamic_biped::srv::SrvChangePhases_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_biped__srv__SrvChangePhases_Event
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_biped__srv__SrvChangePhases_Event
    std::shared_ptr<dynamic_biped::srv::SrvChangePhases_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvChangePhases_Event_ & other) const
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
  bool operator!=(const SrvChangePhases_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvChangePhases_Event_

// alias to use template instance with default allocator
using SrvChangePhases_Event =
  dynamic_biped::srv::SrvChangePhases_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamic_biped

namespace dynamic_biped
{

namespace srv
{

struct SrvChangePhases
{
  using Request = dynamic_biped::srv::SrvChangePhases_Request;
  using Response = dynamic_biped::srv::SrvChangePhases_Response;
  using Event = dynamic_biped::srv::SrvChangePhases_Event;
};

}  // namespace srv

}  // namespace dynamic_biped

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__STRUCT_HPP_
