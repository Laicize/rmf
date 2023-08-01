// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/timespan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/timespan__struct.h"
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"
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

#include "rosidl_runtime_c/string.h"  // maps
#include "rosidl_runtime_c/string_functions.h"  // maps

// forward declare type support functions


using _Timespan__ros_msg_type = rmf_traffic_msgs__msg__Timespan;

static bool _Timespan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Timespan__ros_msg_type * ros_message = static_cast<const _Timespan__ros_msg_type *>(untyped_ros_message);
  // Field name: maps
  {
    size_t size = ros_message->maps.size;
    auto array_ptr = ros_message->maps.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: has_lower_bound
  {
    cdr << (ros_message->has_lower_bound ? true : false);
  }

  // Field name: lower_bound
  {
    cdr << ros_message->lower_bound;
  }

  // Field name: has_upper_bound
  {
    cdr << (ros_message->has_upper_bound ? true : false);
  }

  // Field name: upper_bound
  {
    cdr << ros_message->upper_bound;
  }

  return true;
}

static bool _Timespan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Timespan__ros_msg_type * ros_message = static_cast<_Timespan__ros_msg_type *>(untyped_ros_message);
  // Field name: maps
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->maps.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->maps);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->maps, size)) {
      fprintf(stderr, "failed to create array for field 'maps'");
      return false;
    }
    auto array_ptr = ros_message->maps.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'maps'\n");
        return false;
      }
    }
  }

  // Field name: has_lower_bound
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_lower_bound = tmp ? true : false;
  }

  // Field name: lower_bound
  {
    cdr >> ros_message->lower_bound;
  }

  // Field name: has_upper_bound
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_upper_bound = tmp ? true : false;
  }

  // Field name: upper_bound
  {
    cdr >> ros_message->upper_bound;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__Timespan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Timespan__ros_msg_type * ros_message = static_cast<const _Timespan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name maps
  {
    size_t array_size = ros_message->maps.size;
    auto array_ptr = ros_message->maps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name has_lower_bound
  {
    size_t item_size = sizeof(ros_message->has_lower_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lower_bound
  {
    size_t item_size = sizeof(ros_message->lower_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_upper_bound
  {
    size_t item_size = sizeof(ros_message->has_upper_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name upper_bound
  {
    size_t item_size = sizeof(ros_message->upper_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Timespan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__Timespan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__Timespan(
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

  // member: maps
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: has_lower_bound
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lower_bound
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: has_upper_bound
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: upper_bound
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Timespan__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__Timespan(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Timespan = {
  "rmf_traffic_msgs::msg",
  "Timespan",
  _Timespan__cdr_serialize,
  _Timespan__cdr_deserialize,
  _Timespan__get_serialized_size,
  _Timespan__max_serialized_size
};

static rosidl_message_type_support_t _Timespan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Timespan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Timespan)() {
  return &_Timespan__type_support;
}

#if defined(__cplusplus)
}
#endif
