// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.hpp"

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

namespace rmf_dispenser_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_dispenser_msgs
cdr_serialize(
  const rmf_dispenser_msgs::msg::DispenserRequestItem & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type_guid
  cdr << ros_message.type_guid;
  // Member: quantity
  cdr << ros_message.quantity;
  // Member: compartment_name
  cdr << ros_message.compartment_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_dispenser_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_dispenser_msgs::msg::DispenserRequestItem & ros_message)
{
  // Member: type_guid
  cdr >> ros_message.type_guid;

  // Member: quantity
  cdr >> ros_message.quantity;

  // Member: compartment_name
  cdr >> ros_message.compartment_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_dispenser_msgs
get_serialized_size(
  const rmf_dispenser_msgs::msg::DispenserRequestItem & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type_guid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type_guid.size() + 1);
  // Member: quantity
  {
    size_t item_size = sizeof(ros_message.quantity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compartment_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.compartment_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_dispenser_msgs
max_serialized_size_DispenserRequestItem(
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


  // Member: type_guid
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

  // Member: quantity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: compartment_name
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

static bool _DispenserRequestItem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_dispenser_msgs::msg::DispenserRequestItem *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DispenserRequestItem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_dispenser_msgs::msg::DispenserRequestItem *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DispenserRequestItem__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_dispenser_msgs::msg::DispenserRequestItem *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DispenserRequestItem__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DispenserRequestItem(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DispenserRequestItem__callbacks = {
  "rmf_dispenser_msgs::msg",
  "DispenserRequestItem",
  _DispenserRequestItem__cdr_serialize,
  _DispenserRequestItem__cdr_deserialize,
  _DispenserRequestItem__get_serialized_size,
  _DispenserRequestItem__max_serialized_size
};

static rosidl_message_type_support_t _DispenserRequestItem__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DispenserRequestItem__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_dispenser_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmf_dispenser_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_dispenser_msgs::msg::DispenserRequestItem>()
{
  return &rmf_dispenser_msgs::msg::typesupport_fastrtps_cpp::_DispenserRequestItem__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_dispenser_msgs, msg, DispenserRequestItem)() {
  return &rmf_dispenser_msgs::msg::typesupport_fastrtps_cpp::_DispenserRequestItem__handle;
}

#ifdef __cplusplus
}
#endif
