// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_queries__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/schedule_queries__struct.h"
#include "rmf_traffic_msgs/msg/detail/schedule_queries__functions.h"
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

#include "rmf_traffic_msgs/msg/detail/schedule_identity__functions.h"  // node_id
#include "rmf_traffic_msgs/msg/detail/schedule_query__functions.h"  // queries
#include "rosidl_runtime_c/primitives_sequence.h"  // query_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // query_ids

// forward declare type support functions
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleIdentity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleIdentity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleIdentity)();
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleQuery(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleQuery(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleQuery)();


using _ScheduleQueries__ros_msg_type = rmf_traffic_msgs__msg__ScheduleQueries;

static bool _ScheduleQueries__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScheduleQueries__ros_msg_type * ros_message = static_cast<const _ScheduleQueries__ros_msg_type *>(untyped_ros_message);
  // Field name: node_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleIdentity
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_id, cdr))
    {
      return false;
    }
  }

  // Field name: queries
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleQuery
      )()->data);
    size_t size = ros_message->queries.size;
    auto array_ptr = ros_message->queries.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: query_ids
  {
    size_t size = ros_message->query_ids.size;
    auto array_ptr = ros_message->query_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ScheduleQueries__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScheduleQueries__ros_msg_type * ros_message = static_cast<_ScheduleQueries__ros_msg_type *>(untyped_ros_message);
  // Field name: node_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleIdentity
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_id))
    {
      return false;
    }
  }

  // Field name: queries
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleQuery
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->queries.data) {
      rmf_traffic_msgs__msg__ScheduleQuery__Sequence__fini(&ros_message->queries);
    }
    if (!rmf_traffic_msgs__msg__ScheduleQuery__Sequence__init(&ros_message->queries, size)) {
      fprintf(stderr, "failed to create array for field 'queries'");
      return false;
    }
    auto array_ptr = ros_message->queries.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: query_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->query_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->query_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->query_ids, size)) {
      fprintf(stderr, "failed to create array for field 'query_ids'");
      return false;
    }
    auto array_ptr = ros_message->query_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleQueries(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScheduleQueries__ros_msg_type * ros_message = static_cast<const _ScheduleQueries__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node_id

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__ScheduleIdentity(
    &(ros_message->node_id), current_alignment);
  // field.name queries
  {
    size_t array_size = ros_message->queries.size;
    auto array_ptr = ros_message->queries.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_traffic_msgs__msg__ScheduleQuery(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name query_ids
  {
    size_t array_size = ros_message->query_ids.size;
    auto array_ptr = ros_message->query_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScheduleQueries__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__ScheduleQueries(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleQueries(
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

  // member: node_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_traffic_msgs__msg__ScheduleIdentity(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: queries
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
        max_serialized_size_rmf_traffic_msgs__msg__ScheduleQuery(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: query_ids
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

static size_t _ScheduleQueries__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__ScheduleQueries(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScheduleQueries = {
  "rmf_traffic_msgs::msg",
  "ScheduleQueries",
  _ScheduleQueries__cdr_serialize,
  _ScheduleQueries__cdr_deserialize,
  _ScheduleQueries__get_serialized_size,
  _ScheduleQueries__max_serialized_size
};

static rosidl_message_type_support_t _ScheduleQueries__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScheduleQueries,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleQueries)() {
  return &_ScheduleQueries__type_support;
}

#if defined(__cplusplus)
}
#endif
