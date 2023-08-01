// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"
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

#include "rmf_traffic_msgs/msg/detail/schedule_change_add__functions.h"  // additions
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"  // delays
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__functions.h"  // progress
#include "rosidl_runtime_c/primitives_sequence.h"  // erasures
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // erasures

// forward declare type support functions
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAdd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAdd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeAdd)();
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeDelay(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeDelay(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeDelay)();
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeProgress(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeProgress(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeProgress)();


using _ScheduleParticipantPatch__ros_msg_type = rmf_traffic_msgs__msg__ScheduleParticipantPatch;

static bool _ScheduleParticipantPatch__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScheduleParticipantPatch__ros_msg_type * ros_message = static_cast<const _ScheduleParticipantPatch__ros_msg_type *>(untyped_ros_message);
  // Field name: participant_id
  {
    cdr << ros_message->participant_id;
  }

  // Field name: itinerary_version
  {
    cdr << ros_message->itinerary_version;
  }

  // Field name: erasures
  {
    size_t size = ros_message->erasures.size;
    auto array_ptr = ros_message->erasures.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: delays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeDelay
      )()->data);
    size_t size = ros_message->delays.size;
    auto array_ptr = ros_message->delays.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: additions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeAdd
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->additions, cdr))
    {
      return false;
    }
  }

  // Field name: progress
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeProgress
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->progress, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ScheduleParticipantPatch__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScheduleParticipantPatch__ros_msg_type * ros_message = static_cast<_ScheduleParticipantPatch__ros_msg_type *>(untyped_ros_message);
  // Field name: participant_id
  {
    cdr >> ros_message->participant_id;
  }

  // Field name: itinerary_version
  {
    cdr >> ros_message->itinerary_version;
  }

  // Field name: erasures
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->erasures.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->erasures);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->erasures, size)) {
      fprintf(stderr, "failed to create array for field 'erasures'");
      return false;
    }
    auto array_ptr = ros_message->erasures.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: delays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeDelay
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->delays.data) {
      rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(&ros_message->delays);
    }
    if (!rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(&ros_message->delays, size)) {
      fprintf(stderr, "failed to create array for field 'delays'");
      return false;
    }
    auto array_ptr = ros_message->delays.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: additions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeAdd
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->additions))
    {
      return false;
    }
  }

  // Field name: progress
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleChangeProgress
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->progress))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__ScheduleParticipantPatch(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScheduleParticipantPatch__ros_msg_type * ros_message = static_cast<const _ScheduleParticipantPatch__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name participant_id
  {
    size_t item_size = sizeof(ros_message->participant_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name itinerary_version
  {
    size_t item_size = sizeof(ros_message->itinerary_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name erasures
  {
    size_t array_size = ros_message->erasures.size;
    auto array_ptr = ros_message->erasures.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delays
  {
    size_t array_size = ros_message->delays.size;
    auto array_ptr = ros_message->delays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeDelay(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name additions

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAdd(
    &(ros_message->additions), current_alignment);
  // field.name progress

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeProgress(
    &(ros_message->progress), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ScheduleParticipantPatch__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__ScheduleParticipantPatch(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__ScheduleParticipantPatch(
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

  // member: participant_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: itinerary_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: erasures
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delays
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
        max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeDelay(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: additions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeAdd(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: progress
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_traffic_msgs__msg__ScheduleChangeProgress(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ScheduleParticipantPatch__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__ScheduleParticipantPatch(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScheduleParticipantPatch = {
  "rmf_traffic_msgs::msg",
  "ScheduleParticipantPatch",
  _ScheduleParticipantPatch__cdr_serialize,
  _ScheduleParticipantPatch__cdr_deserialize,
  _ScheduleParticipantPatch__get_serialized_size,
  _ScheduleParticipantPatch__max_serialized_size
};

static rosidl_message_type_support_t _ScheduleParticipantPatch__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScheduleParticipantPatch,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ScheduleParticipantPatch)() {
  return &_ScheduleParticipantPatch__type_support;
}

#if defined(__cplusplus)
}
#endif
