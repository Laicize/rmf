// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/door_sessions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_door_msgs/msg/detail/door_sessions__struct.h"
#include "rmf_door_msgs/msg/detail/door_sessions__functions.h"
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

#include "rmf_door_msgs/msg/detail/session__functions.h"  // sessions
#include "rosidl_runtime_c/string.h"  // door_name
#include "rosidl_runtime_c/string_functions.h"  // door_name

// forward declare type support functions
size_t get_serialized_size_rmf_door_msgs__msg__Session(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_door_msgs__msg__Session(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, Session)();


using _DoorSessions__ros_msg_type = rmf_door_msgs__msg__DoorSessions;

static bool _DoorSessions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DoorSessions__ros_msg_type * ros_message = static_cast<const _DoorSessions__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sessions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, Session
      )()->data);
    size_t size = ros_message->sessions.size;
    auto array_ptr = ros_message->sessions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _DoorSessions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DoorSessions__ros_msg_type * ros_message = static_cast<_DoorSessions__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sessions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, Session
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sessions.data) {
      rmf_door_msgs__msg__Session__Sequence__fini(&ros_message->sessions);
    }
    if (!rmf_door_msgs__msg__Session__Sequence__init(&ros_message->sessions, size)) {
      fprintf(stderr, "failed to create array for field 'sessions'");
      return false;
    }
    auto array_ptr = ros_message->sessions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t get_serialized_size_rmf_door_msgs__msg__DoorSessions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DoorSessions__ros_msg_type * ros_message = static_cast<const _DoorSessions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name door_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->door_name.size + 1);
  // field.name sessions
  {
    size_t array_size = ros_message->sessions.size;
    auto array_ptr = ros_message->sessions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_door_msgs__msg__Session(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DoorSessions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_door_msgs__msg__DoorSessions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t max_serialized_size_rmf_door_msgs__msg__DoorSessions(
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
  // member: sessions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_door_msgs__msg__Session(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DoorSessions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_door_msgs__msg__DoorSessions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DoorSessions = {
  "rmf_door_msgs::msg",
  "DoorSessions",
  _DoorSessions__cdr_serialize,
  _DoorSessions__cdr_deserialize,
  _DoorSessions__get_serialized_size,
  _DoorSessions__max_serialized_size
};

static rosidl_message_type_support_t _DoorSessions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DoorSessions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorSessions)() {
  return &_DoorSessions__type_support;
}

#if defined(__cplusplus)
}
#endif
