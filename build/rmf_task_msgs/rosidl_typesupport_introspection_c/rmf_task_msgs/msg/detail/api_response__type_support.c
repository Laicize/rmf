// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/ApiResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/api_response__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/api_response__functions.h"
#include "rmf_task_msgs/msg/detail/api_response__struct.h"


// Include directives for member types
// Member `json_msg`
// Member `request_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__ApiResponse__init(message_memory);
}

void rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__ApiResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__ApiResponse, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "json_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__ApiResponse, json_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__ApiResponse, request_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "ApiResponse",  // message name
  3,  // number of fields
  sizeof(rmf_task_msgs__msg__ApiResponse),
  rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_member_array,  // message members
  rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_type_support_handle = {
  0,
  &rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, ApiResponse)() {
  if (!rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_task_msgs__msg__ApiResponse__rosidl_typesupport_introspection_c__ApiResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
