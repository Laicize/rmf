// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rmf_scheduler_msgs:srv/CancelSchedule.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rmf_scheduler_msgs/srv/detail/cancel_schedule__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rmf_scheduler_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CancelSchedule_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CancelSchedule_Request_type_support_ids_t;

static const _CancelSchedule_Request_type_support_ids_t _CancelSchedule_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CancelSchedule_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CancelSchedule_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CancelSchedule_Request_type_support_symbol_names_t _CancelSchedule_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_scheduler_msgs, srv, CancelSchedule_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_scheduler_msgs, srv, CancelSchedule_Request)),
  }
};

typedef struct _CancelSchedule_Request_type_support_data_t
{
  void * data[2];
} _CancelSchedule_Request_type_support_data_t;

static _CancelSchedule_Request_type_support_data_t _CancelSchedule_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CancelSchedule_Request_message_typesupport_map = {
  2,
  "rmf_scheduler_msgs",
  &_CancelSchedule_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CancelSchedule_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CancelSchedule_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CancelSchedule_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CancelSchedule_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_scheduler_msgs::srv::CancelSchedule_Request>()
{
  return &::rmf_scheduler_msgs::srv::rosidl_typesupport_cpp::CancelSchedule_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rmf_scheduler_msgs, srv, CancelSchedule_Request)() {
  return get_message_type_support_handle<rmf_scheduler_msgs::srv::CancelSchedule_Request>();
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
// #include "rmf_scheduler_msgs/srv/detail/cancel_schedule__struct.hpp"
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

namespace rmf_scheduler_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CancelSchedule_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CancelSchedule_Response_type_support_ids_t;

static const _CancelSchedule_Response_type_support_ids_t _CancelSchedule_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CancelSchedule_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CancelSchedule_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CancelSchedule_Response_type_support_symbol_names_t _CancelSchedule_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_scheduler_msgs, srv, CancelSchedule_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_scheduler_msgs, srv, CancelSchedule_Response)),
  }
};

typedef struct _CancelSchedule_Response_type_support_data_t
{
  void * data[2];
} _CancelSchedule_Response_type_support_data_t;

static _CancelSchedule_Response_type_support_data_t _CancelSchedule_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CancelSchedule_Response_message_typesupport_map = {
  2,
  "rmf_scheduler_msgs",
  &_CancelSchedule_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CancelSchedule_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CancelSchedule_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CancelSchedule_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CancelSchedule_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_scheduler_msgs::srv::CancelSchedule_Response>()
{
  return &::rmf_scheduler_msgs::srv::rosidl_typesupport_cpp::CancelSchedule_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rmf_scheduler_msgs, srv, CancelSchedule_Response)() {
  return get_message_type_support_handle<rmf_scheduler_msgs::srv::CancelSchedule_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/cancel_schedule__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rmf_scheduler_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CancelSchedule_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CancelSchedule_type_support_ids_t;

static const _CancelSchedule_type_support_ids_t _CancelSchedule_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CancelSchedule_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CancelSchedule_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CancelSchedule_type_support_symbol_names_t _CancelSchedule_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_scheduler_msgs, srv, CancelSchedule)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_scheduler_msgs, srv, CancelSchedule)),
  }
};

typedef struct _CancelSchedule_type_support_data_t
{
  void * data[2];
} _CancelSchedule_type_support_data_t;

static _CancelSchedule_type_support_data_t _CancelSchedule_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CancelSchedule_service_typesupport_map = {
  2,
  "rmf_scheduler_msgs",
  &_CancelSchedule_service_typesupport_ids.typesupport_identifier[0],
  &_CancelSchedule_service_typesupport_symbol_names.symbol_name[0],
  &_CancelSchedule_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CancelSchedule_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CancelSchedule_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rmf_scheduler_msgs::srv::CancelSchedule>()
{
  return &::rmf_scheduler_msgs::srv::rosidl_typesupport_cpp::CancelSchedule_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
