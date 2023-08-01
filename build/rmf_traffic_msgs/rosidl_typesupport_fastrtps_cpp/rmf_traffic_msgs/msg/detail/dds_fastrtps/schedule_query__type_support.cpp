// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_query__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.hpp"

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
bool cdr_serialize(
  const rmf_traffic_msgs::msg::ScheduleQuerySpacetime &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ScheduleQuerySpacetime &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleQuerySpacetime &,
  size_t current_alignment);
size_t
max_serialized_size_ScheduleQuerySpacetime(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_traffic_msgs

namespace rmf_traffic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_traffic_msgs::msg::ScheduleQueryParticipants &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ScheduleQueryParticipants &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleQueryParticipants &,
  size_t current_alignment);
size_t
max_serialized_size_ScheduleQueryParticipants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_serialize(
  const rmf_traffic_msgs::msg::ScheduleQuery & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: spacetime
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.spacetime,
    cdr);
  // Member: participants
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.participants,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_traffic_msgs::msg::ScheduleQuery & ros_message)
{
  // Member: spacetime
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.spacetime);

  // Member: participants
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.participants);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleQuery & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: spacetime

  current_alignment +=
    rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.spacetime, current_alignment);
  // Member: participants

  current_alignment +=
    rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.participants, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
max_serialized_size_ScheduleQuery(
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


  // Member: spacetime
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScheduleQuerySpacetime(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: participants
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScheduleQueryParticipants(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ScheduleQuery__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::ScheduleQuery *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScheduleQuery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_traffic_msgs::msg::ScheduleQuery *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScheduleQuery__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::ScheduleQuery *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScheduleQuery__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScheduleQuery(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScheduleQuery__callbacks = {
  "rmf_traffic_msgs::msg",
  "ScheduleQuery",
  _ScheduleQuery__cdr_serialize,
  _ScheduleQuery__cdr_deserialize,
  _ScheduleQuery__get_serialized_size,
  _ScheduleQuery__max_serialized_size
};

static rosidl_message_type_support_t _ScheduleQuery__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScheduleQuery__callbacks,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleQuery>()
{
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_ScheduleQuery__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_traffic_msgs, msg, ScheduleQuery)() {
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_ScheduleQuery__handle;
}

#ifdef __cplusplus
}
#endif
