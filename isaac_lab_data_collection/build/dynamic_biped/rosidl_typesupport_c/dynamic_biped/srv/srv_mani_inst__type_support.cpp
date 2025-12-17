// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dynamic_biped:srv/SrvManiInst.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamic_biped/srv/detail/srv_mani_inst__struct.h"
#include "dynamic_biped/srv/detail/srv_mani_inst__type_support.h"
#include "dynamic_biped/srv/detail/srv_mani_inst__functions.h"
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

typedef struct _SrvManiInst_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvManiInst_Request_type_support_ids_t;

static const _SrvManiInst_Request_type_support_ids_t _SrvManiInst_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvManiInst_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvManiInst_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvManiInst_Request_type_support_symbol_names_t _SrvManiInst_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, SrvManiInst_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, SrvManiInst_Request)),
  }
};

typedef struct _SrvManiInst_Request_type_support_data_t
{
  void * data[2];
} _SrvManiInst_Request_type_support_data_t;

static _SrvManiInst_Request_type_support_data_t _SrvManiInst_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvManiInst_Request_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvManiInst_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SrvManiInst_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SrvManiInst_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvManiInst_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvManiInst_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamic_biped__srv__SrvManiInst_Request__get_type_hash,
  &dynamic_biped__srv__SrvManiInst_Request__get_type_description,
  &dynamic_biped__srv__SrvManiInst_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, SrvManiInst_Request)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::SrvManiInst_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__type_support.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__functions.h"
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

typedef struct _SrvManiInst_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvManiInst_Response_type_support_ids_t;

static const _SrvManiInst_Response_type_support_ids_t _SrvManiInst_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvManiInst_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvManiInst_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvManiInst_Response_type_support_symbol_names_t _SrvManiInst_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, SrvManiInst_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, SrvManiInst_Response)),
  }
};

typedef struct _SrvManiInst_Response_type_support_data_t
{
  void * data[2];
} _SrvManiInst_Response_type_support_data_t;

static _SrvManiInst_Response_type_support_data_t _SrvManiInst_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvManiInst_Response_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvManiInst_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SrvManiInst_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SrvManiInst_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvManiInst_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvManiInst_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamic_biped__srv__SrvManiInst_Response__get_type_hash,
  &dynamic_biped__srv__SrvManiInst_Response__get_type_description,
  &dynamic_biped__srv__SrvManiInst_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, SrvManiInst_Response)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::SrvManiInst_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__type_support.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__functions.h"
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

typedef struct _SrvManiInst_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvManiInst_Event_type_support_ids_t;

static const _SrvManiInst_Event_type_support_ids_t _SrvManiInst_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvManiInst_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvManiInst_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvManiInst_Event_type_support_symbol_names_t _SrvManiInst_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, SrvManiInst_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, SrvManiInst_Event)),
  }
};

typedef struct _SrvManiInst_Event_type_support_data_t
{
  void * data[2];
} _SrvManiInst_Event_type_support_data_t;

static _SrvManiInst_Event_type_support_data_t _SrvManiInst_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvManiInst_Event_message_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvManiInst_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SrvManiInst_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SrvManiInst_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvManiInst_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvManiInst_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamic_biped__srv__SrvManiInst_Event__get_type_hash,
  &dynamic_biped__srv__SrvManiInst_Event__get_type_description,
  &dynamic_biped__srv__SrvManiInst_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, SrvManiInst_Event)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::SrvManiInst_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamic_biped/srv/detail/srv_mani_inst__type_support.h"
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
typedef struct _SrvManiInst_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvManiInst_type_support_ids_t;

static const _SrvManiInst_type_support_ids_t _SrvManiInst_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvManiInst_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvManiInst_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvManiInst_type_support_symbol_names_t _SrvManiInst_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamic_biped, srv, SrvManiInst)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamic_biped, srv, SrvManiInst)),
  }
};

typedef struct _SrvManiInst_type_support_data_t
{
  void * data[2];
} _SrvManiInst_type_support_data_t;

static _SrvManiInst_type_support_data_t _SrvManiInst_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvManiInst_service_typesupport_map = {
  2,
  "dynamic_biped",
  &_SrvManiInst_service_typesupport_ids.typesupport_identifier[0],
  &_SrvManiInst_service_typesupport_symbol_names.symbol_name[0],
  &_SrvManiInst_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SrvManiInst_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvManiInst_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SrvManiInst_Request_message_type_support_handle,
  &SrvManiInst_Response_message_type_support_handle,
  &SrvManiInst_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamic_biped,
    srv,
    SrvManiInst
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamic_biped,
    srv,
    SrvManiInst
  ),
  &dynamic_biped__srv__SrvManiInst__get_type_hash,
  &dynamic_biped__srv__SrvManiInst__get_type_description,
  &dynamic_biped__srv__SrvManiInst__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamic_biped

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dynamic_biped, srv, SrvManiInst)() {
  return &::dynamic_biped::srv::rosidl_typesupport_c::SrvManiInst_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
