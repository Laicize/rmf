// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/dock_parameter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_fleet_msgs/msg/detail/dock_parameter__struct.h"
#include "rmf_fleet_msgs/msg/detail/dock_parameter__functions.h"
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

#include "rmf_fleet_msgs/msg/detail/location__functions.h"  // path
#include "rosidl_runtime_c/string.h"  // finish, start
#include "rosidl_runtime_c/string_functions.h"  // finish, start

// forward declare type support functions
size_t get_serialized_size_rmf_fleet_msgs__msg__Location(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_fleet_msgs__msg__Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_fleet_msgs, msg, Location)();


using _DockParameter__ros_msg_type = rmf_fleet_msgs__msg__DockParameter;

static bool _DockParameter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DockParameter__ros_msg_type * ros_message = static_cast<const _DockParameter__ros_msg_type *>(untyped_ros_message);
  // Field name: start
  {
    const rosidl_runtime_c__String * str = &ros_message->start;
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

  // Field name: finish
  {
    const rosidl_runtime_c__String * str = &ros_message->finish;
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

  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_fleet_msgs, msg, Location
      )()->data);
    size_t size = ros_message->path.size;
    auto array_ptr = ros_message->path.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _DockParameter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DockParameter__ros_msg_type * ros_message = static_cast<_DockParameter__ros_msg_type *>(untyped_ros_message);
  // Field name: start
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->start.data) {
      rosidl_runtime_c__String__init(&ros_message->start);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->start,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'start'\n");
      return false;
    }
  }

  // Field name: finish
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->finish.data) {
      rosidl_runtime_c__String__init(&ros_message->finish);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->finish,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'finish'\n");
      return false;
    }
  }

  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_fleet_msgs, msg, Location
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path.data) {
      rmf_fleet_msgs__msg__Location__Sequence__fini(&ros_message->path);
    }
    if (!rmf_fleet_msgs__msg__Location__Sequence__init(&ros_message->path, size)) {
      fprintf(stderr, "failed to create array for field 'path'");
      return false;
    }
    auto array_ptr = ros_message->path.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
size_t get_serialized_size_rmf_fleet_msgs__msg__DockParameter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DockParameter__ros_msg_type * ros_message = static_cast<const _DockParameter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->start.size + 1);
  // field.name finish
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->finish.size + 1);
  // field.name path
  {
    size_t array_size = ros_message->path.size;
    auto array_ptr = ros_message->path.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_fleet_msgs__msg__Location(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DockParameter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_fleet_msgs__msg__DockParameter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
size_t max_serialized_size_rmf_fleet_msgs__msg__DockParameter(
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

  // member: start
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
  // member: finish
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
  // member: path
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
        max_serialized_size_rmf_fleet_msgs__msg__Location(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DockParameter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_fleet_msgs__msg__DockParameter(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DockParameter = {
  "rmf_fleet_msgs::msg",
  "DockParameter",
  _DockParameter__cdr_serialize,
  _DockParameter__cdr_deserialize,
  _DockParameter__get_serialized_size,
  _DockParameter__max_serialized_size
};

static rosidl_message_type_support_t _DockParameter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DockParameter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_fleet_msgs, msg, DockParameter)() {
  return &_DockParameter__type_support;
}

#if defined(__cplusplus)
}
#endif
