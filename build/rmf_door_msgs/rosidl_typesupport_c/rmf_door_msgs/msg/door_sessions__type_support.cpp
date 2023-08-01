// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rmf_door_msgs/msg/detail/door_sessions__struct.h"
#include "rmf_door_msgs/msg/detail/door_sessions__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rmf_door_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DoorSessions_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoorSessions_type_support_ids_t;

static const _DoorSessions_type_support_ids_t _DoorSessions_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DoorSessions_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoorSessions_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoorSessions_type_support_symbol_names_t _DoorSessions_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorSessions)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, DoorSessions)),
  }
};

typedef struct _DoorSessions_type_support_data_t
{
  void * data[2];
} _DoorSessions_type_support_data_t;

static _DoorSessions_type_support_data_t _DoorSessions_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoorSessions_message_typesupport_map = {
  2,
  "rmf_door_msgs",
  &_DoorSessions_message_typesupport_ids.typesupport_identifier[0],
  &_DoorSessions_message_typesupport_symbol_names.symbol_name[0],
  &_DoorSessions_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoorSessions_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoorSessions_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace rmf_door_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rmf_door_msgs, msg, DoorSessions)() {
  return &::rmf_door_msgs::msg::rosidl_typesupport_c::DoorSessions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
