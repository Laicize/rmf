// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/NegotiationNotice.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_notice__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_notice__struct.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_notice__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // participants
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // participants

// forward declare type support functions


using _NegotiationNotice__ros_msg_type = rmf_traffic_msgs__msg__NegotiationNotice;

static bool _NegotiationNotice__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NegotiationNotice__ros_msg_type * ros_message = static_cast<const _NegotiationNotice__ros_msg_type *>(untyped_ros_message);
  // Field name: conflict_version
  {
    cdr << ros_message->conflict_version;
  }

  // Field name: participants
  {
    size_t size = ros_message->participants.size;
    auto array_ptr = ros_message->participants.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _NegotiationNotice__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NegotiationNotice__ros_msg_type * ros_message = static_cast<_NegotiationNotice__ros_msg_type *>(untyped_ros_message);
  // Field name: conflict_version
  {
    cdr >> ros_message->conflict_version;
  }

  // Field name: participants
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->participants.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->participants);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->participants, size)) {
      fprintf(stderr, "failed to create array for field 'participants'");
      return false;
    }
    auto array_ptr = ros_message->participants.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__NegotiationNotice(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NegotiationNotice__ros_msg_type * ros_message = static_cast<const _NegotiationNotice__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name conflict_version
  {
    size_t item_size = sizeof(ros_message->conflict_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name participants
  {
    size_t array_size = ros_message->participants.size;
    auto array_ptr = ros_message->participants.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NegotiationNotice__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__NegotiationNotice(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__NegotiationNotice(
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

  // member: conflict_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: participants
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NegotiationNotice__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__NegotiationNotice(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NegotiationNotice = {
  "rmf_traffic_msgs::msg",
  "NegotiationNotice",
  _NegotiationNotice__cdr_serialize,
  _NegotiationNotice__cdr_deserialize,
  _NegotiationNotice__get_serialized_size,
  _NegotiationNotice__max_serialized_size
};

static rosidl_message_type_support_t _NegotiationNotice__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NegotiationNotice,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, NegotiationNotice)() {
  return &_NegotiationNotice__type_support;
}

#if defined(__cplusplus)
}
#endif
