// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_ingestor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"
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

#include "rosidl_runtime_c/string.h"  // compartment_name, type_guid
#include "rosidl_runtime_c/string_functions.h"  // compartment_name, type_guid

// forward declare type support functions


using _IngestorRequestItem__ros_msg_type = rmf_ingestor_msgs__msg__IngestorRequestItem;

static bool _IngestorRequestItem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IngestorRequestItem__ros_msg_type * ros_message = static_cast<const _IngestorRequestItem__ros_msg_type *>(untyped_ros_message);
  // Field name: type_guid
  {
    const rosidl_runtime_c__String * str = &ros_message->type_guid;
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

  // Field name: quantity
  {
    cdr << ros_message->quantity;
  }

  // Field name: compartment_name
  {
    const rosidl_runtime_c__String * str = &ros_message->compartment_name;
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

static bool _IngestorRequestItem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IngestorRequestItem__ros_msg_type * ros_message = static_cast<_IngestorRequestItem__ros_msg_type *>(untyped_ros_message);
  // Field name: type_guid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type_guid.data) {
      rosidl_runtime_c__String__init(&ros_message->type_guid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type_guid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type_guid'\n");
      return false;
    }
  }

  // Field name: quantity
  {
    cdr >> ros_message->quantity;
  }

  // Field name: compartment_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->compartment_name.data) {
      rosidl_runtime_c__String__init(&ros_message->compartment_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->compartment_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'compartment_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
size_t get_serialized_size_rmf_ingestor_msgs__msg__IngestorRequestItem(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IngestorRequestItem__ros_msg_type * ros_message = static_cast<const _IngestorRequestItem__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type_guid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_guid.size + 1);
  // field.name quantity
  {
    size_t item_size = sizeof(ros_message->quantity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compartment_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->compartment_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _IngestorRequestItem__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_ingestor_msgs__msg__IngestorRequestItem(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
size_t max_serialized_size_rmf_ingestor_msgs__msg__IngestorRequestItem(
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

  // member: type_guid
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
  // member: quantity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: compartment_name
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

static size_t _IngestorRequestItem__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_ingestor_msgs__msg__IngestorRequestItem(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IngestorRequestItem = {
  "rmf_ingestor_msgs::msg",
  "IngestorRequestItem",
  _IngestorRequestItem__cdr_serialize,
  _IngestorRequestItem__cdr_deserialize,
  _IngestorRequestItem__get_serialized_size,
  _IngestorRequestItem__max_serialized_size
};

static rosidl_message_type_support_t _IngestorRequestItem__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IngestorRequestItem,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_ingestor_msgs, msg, IngestorRequestItem)() {
  return &_IngestorRequestItem__type_support;
}

#if defined(__cplusplus)
}
#endif
