// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_queries__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_traffic_msgs/msg/detail/schedule_queries__struct.hpp"

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
  const rmf_traffic_msgs::msg::ScheduleIdentity &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ScheduleIdentity &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleIdentity &,
  size_t current_alignment);
size_t
max_serialized_size_ScheduleIdentity(
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
  const rmf_traffic_msgs::msg::ScheduleQuery &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ScheduleQuery &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleQuery &,
  size_t current_alignment);
size_t
max_serialized_size_ScheduleQuery(
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
  const rmf_traffic_msgs::msg::ScheduleQueries & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_id
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.node_id,
    cdr);
  // Member: queries
  {
    size_t size = ros_message.queries.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.queries[i],
        cdr);
    }
  }
  // Member: query_ids
  {
    cdr << ros_message.query_ids;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_traffic_msgs::msg::ScheduleQueries & ros_message)
{
  // Member: node_id
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.node_id);

  // Member: queries
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.queries.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.queries[i]);
    }
  }

  // Member: query_ids
  {
    cdr >> ros_message.query_ids;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleQueries & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_id

  current_alignment +=
    rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.node_id, current_alignment);
  // Member: queries
  {
    size_t array_size = ros_message.queries.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.queries[index], current_alignment);
    }
  }
  // Member: query_ids
  {
    size_t array_size = ros_message.query_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.query_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
max_serialized_size_ScheduleQueries(
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


  // Member: node_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScheduleIdentity(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: queries
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
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScheduleQuery(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: query_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ScheduleQueries__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::ScheduleQueries *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScheduleQueries__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_traffic_msgs::msg::ScheduleQueries *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScheduleQueries__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::ScheduleQueries *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScheduleQueries__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScheduleQueries(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScheduleQueries__callbacks = {
  "rmf_traffic_msgs::msg",
  "ScheduleQueries",
  _ScheduleQueries__cdr_serialize,
  _ScheduleQueries__cdr_deserialize,
  _ScheduleQueries__get_serialized_size,
  _ScheduleQueries__max_serialized_size
};

static rosidl_message_type_support_t _ScheduleQueries__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScheduleQueries__callbacks,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleQueries>()
{
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_ScheduleQueries__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_traffic_msgs, msg, ScheduleQueries)() {
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_ScheduleQueries__handle;
}

#ifdef __cplusplus
}
#endif
