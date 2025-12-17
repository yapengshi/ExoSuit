// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dynamic_biped:srv/ControlEndHand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamic_biped/srv/detail/control_end_hand__struct.h"
#include "dynamic_biped/srv/detail/control_end_hand__type_support.h"
#include "dynamic_biped/srv/detail/control_end_hand__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ControlEndHand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlEndHand_Request_type_support_ids_t;

static const _ControlEndHand_Request_type_support_ids_t _ControlEndHand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlEndHand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlEndHand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlEndHand_Request_type_support_symbol_names_t _ControlEndHand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, ControlEndHand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Request)),
  }
};

typedef struct _ControlEndHand_Request_type_support_data_t
{
  void * data[2];
} _ControlEndHand_Request_type_support_data_t;

static _ControlEndHand_Request_type_support_data_t _ControlEndHand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlEndHand_Request_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_ControlEndHand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ControlEndHand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ControlEndHand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlEndHand_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlEndHand_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Request__get_type_hash,
  &dynamic_biped__srv__ControlEndHand_Request__get_type_description,
  &dynamic_biped__srv__ControlEndHand_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, ControlEndHand_Request)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::ControlEndHand_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__struct.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__type_support.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ControlEndHand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlEndHand_Response_type_support_ids_t;

static const _ControlEndHand_Response_type_support_ids_t _ControlEndHand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlEndHand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlEndHand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlEndHand_Response_type_support_symbol_names_t _ControlEndHand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, ControlEndHand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Response)),
  }
};

typedef struct _ControlEndHand_Response_type_support_data_t
{
  void * data[2];
} _ControlEndHand_Response_type_support_data_t;

static _ControlEndHand_Response_type_support_data_t _ControlEndHand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlEndHand_Response_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_ControlEndHand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ControlEndHand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ControlEndHand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlEndHand_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlEndHand_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Response__get_type_hash,
  &dynamic_biped__srv__ControlEndHand_Response__get_type_description,
  &dynamic_biped__srv__ControlEndHand_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, ControlEndHand_Response)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::ControlEndHand_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__struct.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__type_support.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ControlEndHand_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlEndHand_Event_type_support_ids_t;

static const _ControlEndHand_Event_type_support_ids_t _ControlEndHand_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlEndHand_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlEndHand_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlEndHand_Event_type_support_symbol_names_t _ControlEndHand_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, ControlEndHand_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand_Event)),
  }
};

typedef struct _ControlEndHand_Event_type_support_data_t
{
  void * data[2];
} _ControlEndHand_Event_type_support_data_t;

static _ControlEndHand_Event_type_support_data_t _ControlEndHand_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlEndHand_Event_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_ControlEndHand_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ControlEndHand_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ControlEndHand_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlEndHand_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlEndHand_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamic_biped__srv__ControlEndHand_Event__get_type_hash,
  &dynamic_biped__srv__ControlEndHand_Event__get_type_description,
  &dynamic_biped__srv__ControlEndHand_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, ControlEndHand_Event)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::ControlEndHand_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/control_end_hand__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace dynamic_biped
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ControlEndHand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlEndHand_type_support_ids_t;

static const _ControlEndHand_type_support_ids_t _ControlEndHand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlEndHand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlEndHand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlEndHand_type_support_symbol_names_t _ControlEndHand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, ControlEndHand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, ControlEndHand)),
  }
};

typedef struct _ControlEndHand_type_support_data_t
{
  void * data[2];
} _ControlEndHand_type_support_data_t;

static _ControlEndHand_type_support_data_t _ControlEndHand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlEndHand_service_typesupport_map = {
  2,
  "dynamic_biped",
  &_ControlEndHand_service_typesupport_ids.typesupport_identifier[0],
  &_ControlEndHand_service_typesupport_symbol_names.symbol_name[0],
  &_ControlEndHand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ControlEndHand_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlEndHand_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ControlEndHand_Request_message_type_support_handle,
  &ControlEndHand_Response_message_type_support_handle,
  &ControlEndHand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamic_biped,
    srv,
    ControlEndHand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamic_biped,
    srv,
    ControlEndHand
  ),
  &dynamic_biped__srv__ControlEndHand__get_type_hash,
  &dynamic_biped__srv__ControlEndHand__get_type_description,
  &dynamic_biped__srv__ControlEndHand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, ControlEndHand)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::ControlEndHand_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
