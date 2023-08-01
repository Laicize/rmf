// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__struct.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__functions.h"
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

#include "rmf_traffic_msgs/msg/detail/route__functions.h"  // route

// forward declare type support functions
size_t get_serialized_size_rmf_traffic_msgs__msg__Route(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__Route(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Route)();


using _ScheduleChangeAddItem__ros_msg_type = rmf_traffic_msgs__msg__ScheduleChangeAddItem;

static bool _ScheduleChangeAddItem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScheduleChangeAddItem__ros_msg_type * ros_message = static_cast<const _ScheduleChangeAddItem__ros_msg_type *>(untyped_ros_message);
  // Field name: route_id
  {
    cdr << ros_message->route_id;
  }

  // Field name: storage_id
  {
    cdr << ros_message->storage_id;
  }

  // Field name: route
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Route
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->route, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ScheduleChangeAddItem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScheduleChangeAddItem__ros_msg_type * ros_message = static_cast<_ScheduleChangeAddItem__ros_msg_type *>(untyped_ros_message);
  // Field name: route_id
  {
    cdr >> ros_message->route_id;
  }

  // Field name: storage_id
  {
    cdr >> ros_message->storage_id;
  }

  // Field name: route
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Route
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->route))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAddItem(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScheduleChangeAddItem__ros_msg_type * ros_message = static_cast<const _ScheduleChangeAddItem__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name route_id
  {
    size_t item_size = sizeof(ros_message->route_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name storage_id
  {
    size_t item_size = sizeof(ros_message->storage_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__Route(
    &(ros_message->route), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ScheduleChangeAddItem__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAddItem(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAddItem(
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

  // member: route_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: storage_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: route
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_traffic_msgs__msg__Route(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ScheduleChangeAddItem__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAddItem(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScheduleChangeAddItem = {
  "rmf_traffic_msgs::msg",
  "ScheduleChangeAddItem",
  _ScheduleChangeAddItem__cdr_serialize,
  _ScheduleChangeAddItem__cdr_deserialize,
  _ScheduleChangeAddItem__get_serialized_size,
  _ScheduleChangeAddItem__max_serialized_size
};

static rosidl_message_type_support_t _ScheduleChangeAddItem__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScheduleChangeAddItem,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeAddItem)() {
  return &_ScheduleChangeAddItem__type_support;
}

#if defined(__cplusplus)
}
#endif
