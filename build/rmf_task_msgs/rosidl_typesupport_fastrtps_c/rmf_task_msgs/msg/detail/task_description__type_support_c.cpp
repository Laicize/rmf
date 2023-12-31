// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/task_description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_task_msgs/msg/detail/task_description__struct.h"
#include "rmf_task_msgs/msg/detail/task_description__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // start_time
#include "rmf_task_msgs/msg/detail/clean__functions.h"  // clean
#include "rmf_task_msgs/msg/detail/delivery__functions.h"  // delivery
#include "rmf_task_msgs/msg/detail/loop__functions.h"  // loop
#include "rmf_task_msgs/msg/detail/priority__functions.h"  // priority
#include "rmf_task_msgs/msg/detail/station__functions.h"  // station
#include "rmf_task_msgs/msg/detail/task_type__functions.h"  // task_type

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_task_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_task_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_task_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_rmf_task_msgs__msg__Clean(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__Clean(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Clean)();
size_t get_serialized_size_rmf_task_msgs__msg__Delivery(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__Delivery(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Delivery)();
size_t get_serialized_size_rmf_task_msgs__msg__Loop(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__Loop(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Loop)();
size_t get_serialized_size_rmf_task_msgs__msg__Priority(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__Priority(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Priority)();
size_t get_serialized_size_rmf_task_msgs__msg__Station(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__Station(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Station)();
size_t get_serialized_size_rmf_task_msgs__msg__TaskType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__TaskType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, TaskType)();


using _TaskDescription__ros_msg_type = rmf_task_msgs__msg__TaskDescription;

static bool _TaskDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TaskDescription__ros_msg_type * ros_message = static_cast<const _TaskDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_time, cdr))
    {
      return false;
    }
  }

  // Field name: priority
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Priority
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->priority, cdr))
    {
      return false;
    }
  }

  // Field name: task_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, TaskType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->task_type, cdr))
    {
      return false;
    }
  }

  // Field name: station
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Station
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->station, cdr))
    {
      return false;
    }
  }

  // Field name: loop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Loop
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->loop, cdr))
    {
      return false;
    }
  }

  // Field name: delivery
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Delivery
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->delivery, cdr))
    {
      return false;
    }
  }

  // Field name: clean
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Clean
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->clean, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TaskDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TaskDescription__ros_msg_type * ros_message = static_cast<_TaskDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_time))
    {
      return false;
    }
  }

  // Field name: priority
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Priority
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->priority))
    {
      return false;
    }
  }

  // Field name: task_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, TaskType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->task_type))
    {
      return false;
    }
  }

  // Field name: station
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Station
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->station))
    {
      return false;
    }
  }

  // Field name: loop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Loop
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->loop))
    {
      return false;
    }
  }

  // Field name: delivery
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Delivery
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->delivery))
    {
      return false;
    }
  }

  // Field name: clean
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Clean
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->clean))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t get_serialized_size_rmf_task_msgs__msg__TaskDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskDescription__ros_msg_type * ros_message = static_cast<const _TaskDescription__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->start_time), current_alignment);
  // field.name priority

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Priority(
    &(ros_message->priority), current_alignment);
  // field.name task_type

  current_alignment += get_serialized_size_rmf_task_msgs__msg__TaskType(
    &(ros_message->task_type), current_alignment);
  // field.name station

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Station(
    &(ros_message->station), current_alignment);
  // field.name loop

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Loop(
    &(ros_message->loop), current_alignment);
  // field.name delivery

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Delivery(
    &(ros_message->delivery), current_alignment);
  // field.name clean

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Clean(
    &(ros_message->clean), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TaskDescription__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_task_msgs__msg__TaskDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t max_serialized_size_rmf_task_msgs__msg__TaskDescription(
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

  // member: start_time
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
  // member: priority
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Priority(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: task_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__TaskType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: station
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Station(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: loop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Loop(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: delivery
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Delivery(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: clean
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Clean(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TaskDescription__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_task_msgs__msg__TaskDescription(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TaskDescription = {
  "rmf_task_msgs::msg",
  "TaskDescription",
  _TaskDescription__cdr_serialize,
  _TaskDescription__cdr_deserialize,
  _TaskDescription__get_serialized_size,
  _TaskDescription__max_serialized_size
};

static rosidl_message_type_support_t _TaskDescription__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskDescription,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, TaskDescription)() {
  return &_TaskDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
