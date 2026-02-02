// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_biped:srv/SrvChangeCtlMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamic_biped/srv/detail/srv_change_ctl_mode__functions.h"
#include "dynamic_biped/srv/detail/srv_change_ctl_mode__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvChangeCtlMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvChangeCtlMode_Request_type_support_ids_t;

static const _SrvChangeCtlMode_Request_type_support_ids_t _SrvChangeCtlMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvChangeCtlMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvChangeCtlMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvChangeCtlMode_Request_type_support_symbol_names_t _SrvChangeCtlMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamic_biped, srv, SrvChangeCtlMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, srv, SrvChangeCtlMode_Request)),
  }
};

typedef struct _SrvChangeCtlMode_Request_type_support_data_t
{
  void * data[2];
} _SrvChangeCtlMode_Request_type_support_data_t;

static _SrvChangeCtlMode_Request_type_support_data_t _SrvChangeCtlMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvChangeCtlMode_Request_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvChangeCtlMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SrvChangeCtlMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SrvChangeCtlMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvChangeCtlMode_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvChangeCtlMode_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamic_biped__srv__SrvChangeCtlMode_Request__get_type_hash,
  &dynamic_biped__srv__SrvChangeCtlMode_Request__get_type_description,
  &dynamic_biped__srv__SrvChangeCtlMode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Request>()
{
  return &::dynamic_biped::srv::rosidl_typesupport_cpp::SrvChangeCtlMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamic_biped, srv, SrvChangeCtlMode_Request)() {
  return get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_change_ctl_mode__functions.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_change_ctl_mode__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvChangeCtlMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvChangeCtlMode_Response_type_support_ids_t;

static const _SrvChangeCtlMode_Response_type_support_ids_t _SrvChangeCtlMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvChangeCtlMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvChangeCtlMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvChangeCtlMode_Response_type_support_symbol_names_t _SrvChangeCtlMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamic_biped, srv, SrvChangeCtlMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, srv, SrvChangeCtlMode_Response)),
  }
};

typedef struct _SrvChangeCtlMode_Response_type_support_data_t
{
  void * data[2];
} _SrvChangeCtlMode_Response_type_support_data_t;

static _SrvChangeCtlMode_Response_type_support_data_t _SrvChangeCtlMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvChangeCtlMode_Response_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvChangeCtlMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SrvChangeCtlMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SrvChangeCtlMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvChangeCtlMode_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvChangeCtlMode_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamic_biped__srv__SrvChangeCtlMode_Response__get_type_hash,
  &dynamic_biped__srv__SrvChangeCtlMode_Response__get_type_description,
  &dynamic_biped__srv__SrvChangeCtlMode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Response>()
{
  return &::dynamic_biped::srv::rosidl_typesupport_cpp::SrvChangeCtlMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamic_biped, srv, SrvChangeCtlMode_Response)() {
  return get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_change_ctl_mode__functions.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_change_ctl_mode__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvChangeCtlMode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvChangeCtlMode_Event_type_support_ids_t;

static const _SrvChangeCtlMode_Event_type_support_ids_t _SrvChangeCtlMode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvChangeCtlMode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvChangeCtlMode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvChangeCtlMode_Event_type_support_symbol_names_t _SrvChangeCtlMode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamic_biped, srv, SrvChangeCtlMode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, srv, SrvChangeCtlMode_Event)),
  }
};

typedef struct _SrvChangeCtlMode_Event_type_support_data_t
{
  void * data[2];
} _SrvChangeCtlMode_Event_type_support_data_t;

static _SrvChangeCtlMode_Event_type_support_data_t _SrvChangeCtlMode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvChangeCtlMode_Event_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvChangeCtlMode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SrvChangeCtlMode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SrvChangeCtlMode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvChangeCtlMode_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvChangeCtlMode_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamic_biped__srv__SrvChangeCtlMode_Event__get_type_hash,
  &dynamic_biped__srv__SrvChangeCtlMode_Event__get_type_description,
  &dynamic_biped__srv__SrvChangeCtlMode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Event>()
{
  return &::dynamic_biped::srv::rosidl_typesupport_cpp::SrvChangeCtlMode_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamic_biped, srv, SrvChangeCtlMode_Event)() {
  return get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "dynamic_biped/srv/detail/srv_change_ctl_mode__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvChangeCtlMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvChangeCtlMode_type_support_ids_t;

static const _SrvChangeCtlMode_type_support_ids_t _SrvChangeCtlMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvChangeCtlMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvChangeCtlMode_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvChangeCtlMode_type_support_symbol_names_t _SrvChangeCtlMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamic_biped, srv, SrvChangeCtlMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_biped, srv, SrvChangeCtlMode)),
  }
};

typedef struct _SrvChangeCtlMode_type_support_data_t
{
  void * data[2];
} _SrvChangeCtlMode_type_support_data_t;

static _SrvChangeCtlMode_type_support_data_t _SrvChangeCtlMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvChangeCtlMode_service_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvChangeCtlMode_service_typesupport_ids.typesupport_identifier[0],
  &_SrvChangeCtlMode_service_typesupport_symbol_names.symbol_name[0],
  &_SrvChangeCtlMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SrvChangeCtlMode_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvChangeCtlMode_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dynamic_biped::srv::SrvChangeCtlMode>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dynamic_biped::srv::SrvChangeCtlMode>,
  &dynamic_biped__srv__SrvChangeCtlMode__get_type_hash,
  &dynamic_biped__srv__SrvChangeCtlMode__get_type_description,
  &dynamic_biped__srv__SrvChangeCtlMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamic_biped

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode>()
{
  return &::dynamic_biped::srv::rosidl_typesupport_cpp::SrvChangeCtlMode_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamic_biped, srv, SrvChangeCtlMode)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dynamic_biped::srv::SrvChangeCtlMode>();
}

#ifdef __cplusplus
}
#endif
