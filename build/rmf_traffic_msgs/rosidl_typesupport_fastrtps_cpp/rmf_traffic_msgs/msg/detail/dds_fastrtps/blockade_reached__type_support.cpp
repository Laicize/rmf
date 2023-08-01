// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/BlockadeReached.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_reached__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_traffic_msgs/msg/detail/blockade_reached__struct.hpp"

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

namespace rmf_traffic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_serialize(
  const rmf_traffic_msgs::msg::BlockadeReached & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: participant
  cdr << ros_message.participant;
  // Member: reservation
  cdr << ros_message.reservation;
  // Member: checkpoint
  cdr << ros_message.checkpoint;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_traffic_msgs::msg::BlockadeReached & ros_message)
{
  // Member: participant
  cdr >> ros_message.participant;

  // Member: reservation
  cdr >> ros_message.reservation;

  // Member: checkpoint
  cdr >> ros_message.checkpoint;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
get_serialized_size(
  const rmf_traffic_msgs::msg::BlockadeReached & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: participant
  {
    size_t item_size = sizeof(ros_message.participant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reservation
  {
    size_t item_size = sizeof(ros_message.reservation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: checkpoint
  {
    size_t item_size = sizeof(ros_message.checkpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
max_serialized_size_BlockadeReached(
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


  // Member: participant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reservation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: checkpoint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BlockadeReached__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::BlockadeReached *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BlockadeReached__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_traffic_msgs::msg::BlockadeReached *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BlockadeReached__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::BlockadeReached *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BlockadeReached__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BlockadeReached(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BlockadeReached__callbacks = {
  "rmf_traffic_msgs::msg",
  "BlockadeReached",
  _BlockadeReached__cdr_serialize,
  _BlockadeReached__cdr_deserialize,
  _BlockadeReached__get_serialized_size,
  _BlockadeReached__max_serialized_size
};

static rosidl_message_type_support_t _BlockadeReached__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BlockadeReached__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::BlockadeReached>()
{
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_BlockadeReached__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_traffic_msgs, msg, BlockadeReached)() {
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_BlockadeReached__handle;
}

#ifdef __cplusplus
}
#endif
