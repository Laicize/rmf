// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_scheduler_msgs:srv/ListScheduleStates.idl
// generated code does not contain a copyright notice
#include "rmf_scheduler_msgs/srv/detail/list_schedule_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_scheduler_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_scheduler_msgs/srv/detail/list_schedule_states__struct.h"
#include "rmf_scheduler_msgs/srv/detail/list_schedule_states__functions.h"
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


// forward declare type support functions


using _ListScheduleStates_Request__ros_msg_type = rmf_scheduler_msgs__srv__ListScheduleStates_Request;

static bool _ListScheduleStates_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListScheduleStates_Request__ros_msg_type * ros_message = static_cast<const _ListScheduleStates_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: modified_after
  {
    cdr << ros_message->modified_after;
  }

  return true;
}

static bool _ListScheduleStates_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListScheduleStates_Request__ros_msg_type * ros_message = static_cast<_ListScheduleStates_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: modified_after
  {
    cdr >> ros_message->modified_after;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_scheduler_msgs
size_t get_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListScheduleStates_Request__ros_msg_type * ros_message = static_cast<const _ListScheduleStates_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name modified_after
  {
    size_t item_size = sizeof(ros_message->modified_after);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListScheduleStates_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_scheduler_msgs
size_t max_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Request(
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

  // member: modified_after
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ListScheduleStates_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListScheduleStates_Request = {
  "rmf_scheduler_msgs::srv",
  "ListScheduleStates_Request",
  _ListScheduleStates_Request__cdr_serialize,
  _ListScheduleStates_Request__cdr_deserialize,
  _ListScheduleStates_Request__get_serialized_size,
  _ListScheduleStates_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListScheduleStates_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListScheduleStates_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, srv, ListScheduleStates_Request)() {
  return &_ListScheduleStates_Request__type_support;
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
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedule_states__struct.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedule_states__functions.h"
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

#include "rmf_scheduler_msgs/msg/detail/schedule_state__functions.h"  // schedules
#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions
size_t get_serialized_size_rmf_scheduler_msgs__msg__ScheduleState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_scheduler_msgs__msg__ScheduleState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, ScheduleState)();


using _ListScheduleStates_Response__ros_msg_type = rmf_scheduler_msgs__srv__ListScheduleStates_Response;

static bool _ListScheduleStates_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListScheduleStates_Response__ros_msg_type * ros_message = static_cast<const _ListScheduleStates_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: schedules
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, ScheduleState
      )()->data);
    size_t size = ros_message->schedules.size;
    auto array_ptr = ros_message->schedules.data;
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

static bool _ListScheduleStates_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListScheduleStates_Response__ros_msg_type * ros_message = static_cast<_ListScheduleStates_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: schedules
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, msg, ScheduleState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->schedules.data) {
      rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini(&ros_message->schedules);
    }
    if (!rmf_scheduler_msgs__msg__ScheduleState__Sequence__init(&ros_message->schedules, size)) {
      fprintf(stderr, "failed to create array for field 'schedules'");
      return false;
    }
    auto array_ptr = ros_message->schedules.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_scheduler_msgs
size_t get_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListScheduleStates_Response__ros_msg_type * ros_message = static_cast<const _ListScheduleStates_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name schedules
  {
    size_t array_size = ros_message->schedules.size;
    auto array_ptr = ros_message->schedules.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_scheduler_msgs__msg__ScheduleState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListScheduleStates_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_scheduler_msgs
size_t max_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Response(
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
  // member: message
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
  // member: schedules
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
        max_serialized_size_rmf_scheduler_msgs__msg__ScheduleState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ListScheduleStates_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_scheduler_msgs__srv__ListScheduleStates_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListScheduleStates_Response = {
  "rmf_scheduler_msgs::srv",
  "ListScheduleStates_Response",
  _ListScheduleStates_Response__cdr_serialize,
  _ListScheduleStates_Response__cdr_deserialize,
  _ListScheduleStates_Response__get_serialized_size,
  _ListScheduleStates_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListScheduleStates_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListScheduleStates_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, srv, ListScheduleStates_Response)() {
  return &_ListScheduleStates_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_scheduler_msgs/srv/list_schedule_states.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ListScheduleStates__callbacks = {
  "rmf_scheduler_msgs::srv",
  "ListScheduleStates",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, srv, ListScheduleStates_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, srv, ListScheduleStates_Response)(),
};

static rosidl_service_type_support_t ListScheduleStates__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ListScheduleStates__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_scheduler_msgs, srv, ListScheduleStates)() {
  return &ListScheduleStates__handle;
}

#if defined(__cplusplus)
}
#endif
