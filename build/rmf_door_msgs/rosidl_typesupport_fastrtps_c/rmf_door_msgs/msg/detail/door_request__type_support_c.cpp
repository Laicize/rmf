// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/door_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_door_msgs/msg/detail/door_request__struct.h"
#include "rmf_door_msgs/msg/detail/door_request__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // request_time
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"  // requested_mode
#include "rosidl_runtime_c/string.h"  // door_name, requester_id
#include "rosidl_runtime_c/string_functions.h"  // door_name, requester_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_door_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_door_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_door_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_rmf_door_msgs__msg__DoorMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_door_msgs__msg__DoorMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorMode)();


using _DoorRequest__ros_msg_type = rmf_door_msgs__msg__DoorRequest;

static bool _DoorRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DoorRequest__ros_msg_type * ros_message = static_cast<const _DoorRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: request_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->request_time, cdr))
    {
      return false;
    }
  }

  // Field name: requester_id
  {
    const rosidl_runtime_c__String * str = &ros_message->requester_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: door_name
  {
    const rosidl_runtime_c__String * str = &ros_message->door_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: requested_mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorMode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->requested_mode, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DoorRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DoorRequest__ros_msg_type * ros_message = static_cast<_DoorRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: request_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->request_time))
    {
      return false;
    }
  }

  // Field name: requester_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requester_id.data) {
      rosidl_runtime_c__String__init(&ros_message->requester_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requester_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requester_id'\n");
      return false;
    }
  }

  // Field name: door_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->door_name.data) {
      rosidl_runtime_c__String__init(&ros_message->door_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->door_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'door_name'\n");
      return false;
    }
  }

  // Field name: requested_mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorMode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->requested_mode))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t get_serialized_size_rmf_door_msgs__msg__DoorRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DoorRequest__ros_msg_type * ros_message = static_cast<const _DoorRequest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->request_time), current_alignment);
  // field.name requester_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requester_id.size + 1);
  // field.name door_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->door_name.size + 1);
  // field.name requested_mode

  current_alignment += get_serialized_size_rmf_door_msgs__msg__DoorMode(
    &(ros_message->requested_mode), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DoorRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_door_msgs__msg__DoorRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t max_serialized_size_rmf_door_msgs__msg__DoorRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: request_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: requester_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: door_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: requested_mode
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_door_msgs__msg__DoorMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DoorRequest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_door_msgs__msg__DoorRequest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DoorRequest = {
  "rmf_door_msgs::msg",
  "DoorRequest",
  _DoorRequest__cdr_serialize,
  _DoorRequest__cdr_deserialize,
  _DoorRequest__get_serialized_size,
  _DoorRequest__max_serialized_size
};

static rosidl_message_type_support_t _DoorRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DoorRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorRequest)() {
  return &_DoorRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
