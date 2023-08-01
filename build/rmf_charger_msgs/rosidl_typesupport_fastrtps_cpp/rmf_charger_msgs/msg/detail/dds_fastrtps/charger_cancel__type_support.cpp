// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice
#include "rmf_charger_msgs/msg/detail/charger_cancel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_charger_msgs/msg/detail/charger_cancel__struct.hpp"

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

namespace rmf_charger_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_charger_msgs
cdr_serialize(
  const rmf_charger_msgs::msg::ChargerCancel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: charger_name
  cdr << ros_message.charger_name;
  // Member: request_id
  cdr << ros_message.request_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_charger_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_charger_msgs::msg::ChargerCancel & ros_message)
{
  // Member: charger_name
  cdr >> ros_message.charger_name;

  // Member: request_id
  cdr >> ros_message.request_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_charger_msgs
get_serialized_size(
  const rmf_charger_msgs::msg::ChargerCancel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: charger_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.charger_name.size() + 1);
  // Member: request_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.request_id.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_charger_msgs
max_serialized_size_ChargerCancel(
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


  // Member: charger_name
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

  // Member: request_id
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

static bool _ChargerCancel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_charger_msgs::msg::ChargerCancel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChargerCancel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_charger_msgs::msg::ChargerCancel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChargerCancel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_charger_msgs::msg::ChargerCancel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChargerCancel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ChargerCancel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ChargerCancel__callbacks = {
  "rmf_charger_msgs::msg",
  "ChargerCancel",
  _ChargerCancel__cdr_serialize,
  _ChargerCancel__cdr_deserialize,
  _ChargerCancel__get_serialized_size,
  _ChargerCancel__max_serialized_size
};

static rosidl_message_type_support_t _ChargerCancel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ChargerCancel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_charger_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmf_charger_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_charger_msgs::msg::ChargerCancel>()
{
  return &rmf_charger_msgs::msg::typesupport_fastrtps_cpp::_ChargerCancel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_charger_msgs, msg, ChargerCancel)() {
  return &rmf_charger_msgs::msg::typesupport_fastrtps_cpp::_ChargerCancel__handle;
}

#ifdef __cplusplus
}
#endif
