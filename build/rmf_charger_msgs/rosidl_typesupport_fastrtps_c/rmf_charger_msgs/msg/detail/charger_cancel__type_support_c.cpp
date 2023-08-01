// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice
#include "rmf_charger_msgs/msg/detail/charger_cancel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_charger_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_charger_msgs/msg/detail/charger_cancel__struct.h"
#include "rmf_charger_msgs/msg/detail/charger_cancel__functions.h"
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

#include "rosidl_runtime_c/string.h"  // charger_name, request_id
#include "rosidl_runtime_c/string_functions.h"  // charger_name, request_id

// forward declare type support functions


using _ChargerCancel__ros_msg_type = rmf_charger_msgs__msg__ChargerCancel;

static bool _ChargerCancel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChargerCancel__ros_msg_type * ros_message = static_cast<const _ChargerCancel__ros_msg_type *>(untyped_ros_message);
  // Field name: charger_name
  {
    const rosidl_runtime_c__String * str = &ros_message->charger_name;
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

  // Field name: request_id
  {
    const rosidl_runtime_c__String * str = &ros_message->request_id;
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

  return true;
}

static bool _ChargerCancel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChargerCancel__ros_msg_type * ros_message = static_cast<_ChargerCancel__ros_msg_type *>(untyped_ros_message);
  // Field name: charger_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->charger_name.data) {
      rosidl_runtime_c__String__init(&ros_message->charger_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->charger_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'charger_name'\n");
      return false;
    }
  }

  // Field name: request_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->request_id.data) {
      rosidl_runtime_c__String__init(&ros_message->request_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->request_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'request_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_charger_msgs
size_t get_serialized_size_rmf_charger_msgs__msg__ChargerCancel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChargerCancel__ros_msg_type * ros_message = static_cast<const _ChargerCancel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name charger_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->charger_name.size + 1);
  // field.name request_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->request_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ChargerCancel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_charger_msgs__msg__ChargerCancel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_charger_msgs
size_t max_serialized_size_rmf_charger_msgs__msg__ChargerCancel(
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

  // member: charger_name
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
  // member: request_id
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

  return current_alignment - initial_alignment;
}

static size_t _ChargerCancel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_charger_msgs__msg__ChargerCancel(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChargerCancel = {
  "rmf_charger_msgs::msg",
  "ChargerCancel",
  _ChargerCancel__cdr_serialize,
  _ChargerCancel__cdr_deserialize,
  _ChargerCancel__get_serialized_size,
  _ChargerCancel__max_serialized_size
};

static rosidl_message_type_support_t _ChargerCancel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChargerCancel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_charger_msgs, msg, ChargerCancel)() {
  return &_ChargerCancel__type_support;
}

#if defined(__cplusplus)
}
#endif
