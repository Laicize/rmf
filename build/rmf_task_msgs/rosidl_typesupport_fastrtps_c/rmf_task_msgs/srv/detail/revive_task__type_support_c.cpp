// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_task_msgs:srv/ReviveTask.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/srv/detail/revive_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_task_msgs/srv/detail/revive_task__struct.h"
#include "rmf_task_msgs/srv/detail/revive_task__functions.h"
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

#include "rosidl_runtime_c/string.h"  // requester, task_id
#include "rosidl_runtime_c/string_functions.h"  // requester, task_id

// forward declare type support functions


using _ReviveTask_Request__ros_msg_type = rmf_task_msgs__srv__ReviveTask_Request;

static bool _ReviveTask_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReviveTask_Request__ros_msg_type * ros_message = static_cast<const _ReviveTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: requester
  {
    const rosidl_runtime_c__String * str = &ros_message->requester;
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

  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  return true;
}

static bool _ReviveTask_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReviveTask_Request__ros_msg_type * ros_message = static_cast<_ReviveTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: requester
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requester.data) {
      rosidl_runtime_c__String__init(&ros_message->requester);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requester,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requester'\n");
      return false;
    }
  }

  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t get_serialized_size_rmf_task_msgs__srv__ReviveTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReviveTask_Request__ros_msg_type * ros_message = static_cast<const _ReviveTask_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name requester
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requester.size + 1);
  // field.name task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ReviveTask_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_task_msgs__srv__ReviveTask_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t max_serialized_size_rmf_task_msgs__srv__ReviveTask_Request(
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

  // member: requester
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
  // member: task_id
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

  return current_alignment - initial_alignment;
}

static size_t _ReviveTask_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_task_msgs__srv__ReviveTask_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReviveTask_Request = {
  "rmf_task_msgs::srv",
  "ReviveTask_Request",
  _ReviveTask_Request__cdr_serialize,
  _ReviveTask_Request__cdr_deserialize,
  _ReviveTask_Request__get_serialized_size,
  _ReviveTask_Request__max_serialized_size
};

static rosidl_message_type_support_t _ReviveTask_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReviveTask_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, srv, ReviveTask_Request)() {
  return &_ReviveTask_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rmf_task_msgs/srv/detail/revive_task__struct.h"
// already included above
// #include "rmf_task_msgs/srv/detail/revive_task__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _ReviveTask_Response__ros_msg_type = rmf_task_msgs__srv__ReviveTask_Response;

static bool _ReviveTask_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReviveTask_Response__ros_msg_type * ros_message = static_cast<const _ReviveTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ReviveTask_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReviveTask_Response__ros_msg_type * ros_message = static_cast<_ReviveTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t get_serialized_size_rmf_task_msgs__srv__ReviveTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReviveTask_Response__ros_msg_type * ros_message = static_cast<const _ReviveTask_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReviveTask_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_task_msgs__srv__ReviveTask_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t max_serialized_size_rmf_task_msgs__srv__ReviveTask_Response(
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

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ReviveTask_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_task_msgs__srv__ReviveTask_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReviveTask_Response = {
  "rmf_task_msgs::srv",
  "ReviveTask_Response",
  _ReviveTask_Response__cdr_serialize,
  _ReviveTask_Response__cdr_deserialize,
  _ReviveTask_Response__get_serialized_size,
  _ReviveTask_Response__max_serialized_size
};

static rosidl_message_type_support_t _ReviveTask_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReviveTask_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, srv, ReviveTask_Response)() {
  return &_ReviveTask_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_task_msgs/srv/revive_task.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ReviveTask__callbacks = {
  "rmf_task_msgs::srv",
  "ReviveTask",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, srv, ReviveTask_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, srv, ReviveTask_Response)(),
};

static rosidl_service_type_support_t ReviveTask__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ReviveTask__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, srv, ReviveTask)() {
  return &ReviveTask__handle;
}

#if defined(__cplusplus)
}
#endif
