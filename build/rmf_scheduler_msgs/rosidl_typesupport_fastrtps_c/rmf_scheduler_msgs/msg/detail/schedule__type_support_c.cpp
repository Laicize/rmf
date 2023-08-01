// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_scheduler_msgs:msg/Schedule.idl
// generated code does not contain a copyright notice
#include "rmf_scheduler_msgs/msg/detail/schedule__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_scheduler_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_scheduler_msgs/msg/detail/schedule__struct.h"
#include "rmf_scheduler_msgs/msg/detail/schedule__functions.h"
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

#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"  // payload
#include "rosidl_runtime_c/string.h"  // group, name, schedule
#include "rosidl_runtime_c/string_functions.h"  // group, name, schedule

// forward declare type support functions
size_t get_serialized_size_rmf_scheduler_msgs__msg__Payload(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_scheduler_msgs__msg__Payload(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, Payload)();


using _Schedule__ros_msg_type = rmf_scheduler_msgs__msg__Schedule;

static bool _Schedule__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Schedule__ros_msg_type * ros_message = static_cast<const _Schedule__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: created_at
  {
    cdr << ros_message->created_at;
  }

  // Field name: schedule
  {
    const rosidl_runtime_c__String * str = &ros_message->schedule;
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

  // Field name: start_at
  {
    cdr << ros_message->start_at;
  }

  // Field name: finish_at
  {
    cdr << ros_message->finish_at;
  }

  // Field name: group
  {
    const rosidl_runtime_c__String * str = &ros_message->group;
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

  // Field name: payload
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, Payload
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->payload, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Schedule__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Schedule__ros_msg_type * ros_message = static_cast<_Schedule__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: created_at
  {
    cdr >> ros_message->created_at;
  }

  // Field name: schedule
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->schedule.data) {
      rosidl_runtime_c__String__init(&ros_message->schedule);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->schedule,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'schedule'\n");
      return false;
    }
  }

  // Field name: start_at
  {
    cdr >> ros_message->start_at;
  }

  // Field name: finish_at
  {
    cdr >> ros_message->finish_at;
  }

  // Field name: group
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->group.data) {
      rosidl_runtime_c__String__init(&ros_message->group);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->group,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'group'\n");
      return false;
    }
  }

  // Field name: payload
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, Payload
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->payload))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_scheduler_msgs
size_t get_serialized_size_rmf_scheduler_msgs__msg__Schedule(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Schedule__ros_msg_type * ros_message = static_cast<const _Schedule__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name created_at
  {
    size_t item_size = sizeof(ros_message->created_at);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name schedule
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->schedule.size + 1);
  // field.name start_at
  {
    size_t item_size = sizeof(ros_message->start_at);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finish_at
  {
    size_t item_size = sizeof(ros_message->finish_at);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->group.size + 1);
  // field.name payload

  current_alignment += get_serialized_size_rmf_scheduler_msgs__msg__Payload(
    &(ros_message->payload), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Schedule__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_scheduler_msgs__msg__Schedule(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_scheduler_msgs
size_t max_serialized_size_rmf_scheduler_msgs__msg__Schedule(
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

  // member: name
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
  // member: created_at
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: schedule
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
  // member: start_at
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: finish_at
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: group
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
  // member: payload
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_scheduler_msgs__msg__Payload(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Schedule__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_scheduler_msgs__msg__Schedule(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Schedule = {
  "rmf_scheduler_msgs::msg",
  "Schedule",
  _Schedule__cdr_serialize,
  _Schedule__cdr_deserialize,
  _Schedule__get_serialized_size,
  _Schedule__max_serialized_size
};

static rosidl_message_type_support_t _Schedule__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Schedule,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, Schedule)() {
  return &_Schedule__type_support;
}

#if defined(__cplusplus)
}
#endif
