// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/mirror_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.h"
#include "rmf_traffic_msgs/msg/detail/mirror_update__functions.h"
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
#include "rmf_traffic_msgs/msg/detail/schedule_patch__functions.h"  // patch

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
size_t get_serialized_size_rmf_traffic_msgs__msg__SchedulePatch(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__SchedulePatch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, SchedulePatch)();


using _MirrorUpdate__ros_msg_type = rmf_traffic_msgs__msg__MirrorUpdate;

static bool _MirrorUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MirrorUpdate__ros_msg_type * ros_message = static_cast<const _MirrorUpdate__ros_msg_type *>(untyped_ros_message);
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

  // Field name: database_version
  {
    cdr << ros_message->database_version;
  }

  // Field name: patch
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, SchedulePatch
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->patch, cdr))
    {
      return false;
    }
  }

  // Field name: is_remedial_update
  {
    cdr << (ros_message->is_remedial_update ? true : false);
  }

  return true;
}

static bool _MirrorUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MirrorUpdate__ros_msg_type * ros_message = static_cast<_MirrorUpdate__ros_msg_type *>(untyped_ros_message);
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

  // Field name: database_version
  {
    cdr >> ros_message->database_version;
  }

  // Field name: patch
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, SchedulePatch
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->patch))
    {
      return false;
    }
  }

  // Field name: is_remedial_update
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_remedial_update = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__MirrorUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MirrorUpdate__ros_msg_type * ros_message = static_cast<const _MirrorUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node_id

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__ScheduleIdentity(
    &(ros_message->node_id), current_alignment);
  // field.name database_version
  {
    size_t item_size = sizeof(ros_message->database_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name patch

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__SchedulePatch(
    &(ros_message->patch), current_alignment);
  // field.name is_remedial_update
  {
    size_t item_size = sizeof(ros_message->is_remedial_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MirrorUpdate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__MirrorUpdate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__MirrorUpdate(
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
  // member: database_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: patch
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_traffic_msgs__msg__SchedulePatch(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_remedial_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MirrorUpdate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__MirrorUpdate(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MirrorUpdate = {
  "rmf_traffic_msgs::msg",
  "MirrorUpdate",
  _MirrorUpdate__cdr_serialize,
  _MirrorUpdate__cdr_deserialize,
  _MirrorUpdate__get_serialized_size,
  _MirrorUpdate__max_serialized_size
};

static rosidl_message_type_support_t _MirrorUpdate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MirrorUpdate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, MirrorUpdate)() {
  return &_MirrorUpdate__type_support;
}

#if defined(__cplusplus)
}
#endif
