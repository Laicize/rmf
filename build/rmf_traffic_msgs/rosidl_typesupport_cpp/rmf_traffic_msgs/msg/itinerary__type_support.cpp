// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/Itinerary.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rmf_traffic_msgs/msg/detail/itinerary__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rmf_traffic_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Itinerary_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Itinerary_type_support_ids_t;

static const _Itinerary_type_support_ids_t _Itinerary_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Itinerary_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Itinerary_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Itinerary_type_support_symbol_names_t _Itinerary_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_traffic_msgs, msg, Itinerary)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, Itinerary)),
  }
};

typedef struct _Itinerary_type_support_data_t
{
  void * data[2];
} _Itinerary_type_support_data_t;

static _Itinerary_type_support_data_t _Itinerary_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Itinerary_message_typesupport_map = {
  2,
  "rmf_traffic_msgs",
  &_Itinerary_message_typesupport_ids.typesupport_identifier[0],
  &_Itinerary_message_typesupport_symbol_names.symbol_name[0],
  &_Itinerary_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Itinerary_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Itinerary_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::Itinerary>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_cpp::Itinerary_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rmf_traffic_msgs, msg, Itinerary)() {
  return get_message_type_support_handle<rmf_traffic_msgs::msg::Itinerary>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
