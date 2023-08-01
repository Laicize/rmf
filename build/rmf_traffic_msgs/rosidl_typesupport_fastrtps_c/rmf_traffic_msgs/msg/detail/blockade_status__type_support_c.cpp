// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.h"
#include "rmf_traffic_msgs/msg/detail/blockade_status__functions.h"
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


// forward declare type support functions


using _BlockadeStatus__ros_msg_type = rmf_traffic_msgs__msg__BlockadeStatus;

static bool _BlockadeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlockadeStatus__ros_msg_type * ros_message = static_cast<const _BlockadeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: participant
  {
    cdr << ros_message->participant;
  }

  // Field name: reservation
  {
    cdr << ros_message->reservation;
  }

  // Field name: any_ready
  {
    cdr << (ros_message->any_ready ? true : false);
  }

  // Field name: last_ready
  {
    cdr << ros_message->last_ready;
  }

  // Field name: last_reached
  {
    cdr << ros_message->last_reached;
  }

  // Field name: assignment_begin
  {
    cdr << ros_message->assignment_begin;
  }

  // Field name: assignment_end
  {
    cdr << ros_message->assignment_end;
  }

  return true;
}

static bool _BlockadeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlockadeStatus__ros_msg_type * ros_message = static_cast<_BlockadeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: participant
  {
    cdr >> ros_message->participant;
  }

  // Field name: reservation
  {
    cdr >> ros_message->reservation;
  }

  // Field name: any_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->any_ready = tmp ? true : false;
  }

  // Field name: last_ready
  {
    cdr >> ros_message->last_ready;
  }

  // Field name: last_reached
  {
    cdr >> ros_message->last_reached;
  }

  // Field name: assignment_begin
  {
    cdr >> ros_message->assignment_begin;
  }

  // Field name: assignment_end
  {
    cdr >> ros_message->assignment_end;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__BlockadeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlockadeStatus__ros_msg_type * ros_message = static_cast<const _BlockadeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name participant
  {
    size_t item_size = sizeof(ros_message->participant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reservation
  {
    size_t item_size = sizeof(ros_message->reservation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name any_ready
  {
    size_t item_size = sizeof(ros_message->any_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_ready
  {
    size_t item_size = sizeof(ros_message->last_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_reached
  {
    size_t item_size = sizeof(ros_message->last_reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name assignment_begin
  {
    size_t item_size = sizeof(ros_message->assignment_begin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name assignment_end
  {
    size_t item_size = sizeof(ros_message->assignment_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BlockadeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__BlockadeStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__BlockadeStatus(
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

  // member: participant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reservation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: any_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: last_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: last_reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: assignment_begin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: assignment_end
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BlockadeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__BlockadeStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlockadeStatus = {
  "rmf_traffic_msgs::msg",
  "BlockadeStatus",
  _BlockadeStatus__cdr_serialize,
  _BlockadeStatus__cdr_deserialize,
  _BlockadeStatus__get_serialized_size,
  _BlockadeStatus__max_serialized_size
};

static rosidl_message_type_support_t _BlockadeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlockadeStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, BlockadeStatus)() {
  return &_BlockadeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
