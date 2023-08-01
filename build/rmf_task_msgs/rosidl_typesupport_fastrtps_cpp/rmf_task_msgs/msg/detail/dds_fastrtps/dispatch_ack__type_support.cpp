// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/dispatch_ack__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_task_msgs/msg/detail/dispatch_ack__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rmf_task_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
cdr_serialize(
  const rmf_task_msgs::msg::DispatchAck & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dispatch_id
  cdr << ros_message.dispatch_id;
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: errors
  {
    cdr << ros_message.errors;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_task_msgs::msg::DispatchAck & ros_message)
{
  // Member: dispatch_id
  cdr >> ros_message.dispatch_id;

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: errors
  {
    cdr >> ros_message.errors;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
get_serialized_size(
  const rmf_task_msgs::msg::DispatchAck & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dispatch_id
  {
    size_t item_size = sizeof(ros_message.dispatch_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: errors
  {
    size_t array_size = ros_message.errors.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.errors[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
max_serialized_size_DispatchAck(
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


  // Member: dispatch_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: errors
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

  return current_alignment - initial_alignment;
}

static bool _DispatchAck__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_task_msgs::msg::DispatchAck *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DispatchAck__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_task_msgs::msg::DispatchAck *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DispatchAck__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_task_msgs::msg::DispatchAck *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DispatchAck__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DispatchAck(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DispatchAck__callbacks = {
  "rmf_task_msgs::msg",
  "DispatchAck",
  _DispatchAck__cdr_serialize,
  _DispatchAck__cdr_deserialize,
  _DispatchAck__get_serialized_size,
  _DispatchAck__max_serialized_size
};

static rosidl_message_type_support_t _DispatchAck__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DispatchAck__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_task_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_task_msgs::msg::DispatchAck>()
{
  return &rmf_task_msgs::msg::typesupport_fastrtps_cpp::_DispatchAck__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_task_msgs, msg, DispatchAck)() {
  return &rmf_task_msgs::msg::typesupport_fastrtps_cpp::_DispatchAck__handle;
}

#ifdef __cplusplus
}
#endif
