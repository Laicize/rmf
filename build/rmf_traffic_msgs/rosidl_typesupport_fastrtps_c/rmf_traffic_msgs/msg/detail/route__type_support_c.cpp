// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_traffic_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/route__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/route__struct.h"
#include "rmf_traffic_msgs/msg/detail/route__functions.h"
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

#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"  // dependencies
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"  // trajectory
#include "rosidl_runtime_c/primitives_sequence.h"  // checkpoints
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // checkpoints
#include "rosidl_runtime_c/string.h"  // map
#include "rosidl_runtime_c/string_functions.h"  // map

// forward declare type support functions
size_t get_serialized_size_rmf_traffic_msgs__msg__TrafficDependency(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__TrafficDependency(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, TrafficDependency)();
size_t get_serialized_size_rmf_traffic_msgs__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_traffic_msgs__msg__Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Trajectory)();


using _Route__ros_msg_type = rmf_traffic_msgs__msg__Route;

static bool _Route__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Route__ros_msg_type * ros_message = static_cast<const _Route__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const rosidl_runtime_c__String * str = &ros_message->map;
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

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: checkpoints
  {
    size_t size = ros_message->checkpoints.size;
    auto array_ptr = ros_message->checkpoints.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dependencies
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, TrafficDependency
      )()->data);
    size_t size = ros_message->dependencies.size;
    auto array_ptr = ros_message->dependencies.data;
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

static bool _Route__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Route__ros_msg_type * ros_message = static_cast<_Route__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->map.data) {
      rosidl_runtime_c__String__init(&ros_message->map);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->map,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'map'\n");
      return false;
    }
  }

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  // Field name: checkpoints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->checkpoints.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->checkpoints);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->checkpoints, size)) {
      fprintf(stderr, "failed to create array for field 'checkpoints'");
      return false;
    }
    auto array_ptr = ros_message->checkpoints.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dependencies
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, TrafficDependency
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dependencies.data) {
      rmf_traffic_msgs__msg__TrafficDependency__Sequence__fini(&ros_message->dependencies);
    }
    if (!rmf_traffic_msgs__msg__TrafficDependency__Sequence__init(&ros_message->dependencies, size)) {
      fprintf(stderr, "failed to create array for field 'dependencies'");
      return false;
    }
    auto array_ptr = ros_message->dependencies.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__Route(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Route__ros_msg_type * ros_message = static_cast<const _Route__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map.size + 1);
  // field.name trajectory

  current_alignment += get_serialized_size_rmf_traffic_msgs__msg__Trajectory(
    &(ros_message->trajectory), current_alignment);
  // field.name checkpoints
  {
    size_t array_size = ros_message->checkpoints.size;
    auto array_ptr = ros_message->checkpoints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dependencies
  {
    size_t array_size = ros_message->dependencies.size;
    auto array_ptr = ros_message->dependencies.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_traffic_msgs__msg__TrafficDependency(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Route__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_traffic_msgs__msg__Route(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__Route(
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

  // member: map
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
  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_traffic_msgs__msg__Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: checkpoints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dependencies
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
        max_serialized_size_rmf_traffic_msgs__msg__TrafficDependency(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Route__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_traffic_msgs__msg__Route(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Route = {
  "rmf_traffic_msgs::msg",
  "Route",
  _Route__cdr_serialize,
  _Route__cdr_deserialize,
  _Route__get_serialized_size,
  _Route__max_serialized_size
};

static rosidl_message_type_support_t _Route__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Route,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, Route)() {
  return &_Route__type_support;
}

#if defined(__cplusplus)
}
#endif
