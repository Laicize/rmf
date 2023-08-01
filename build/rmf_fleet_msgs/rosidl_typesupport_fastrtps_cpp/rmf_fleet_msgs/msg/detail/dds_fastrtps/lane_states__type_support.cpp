// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_fleet_msgs:msg/LaneStates.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/lane_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_fleet_msgs/msg/detail/lane_states__struct.hpp"

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
namespace rmf_fleet_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_fleet_msgs::msg::SpeedLimitedLane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_fleet_msgs::msg::SpeedLimitedLane &);
size_t get_serialized_size(
  const rmf_fleet_msgs::msg::SpeedLimitedLane &,
  size_t current_alignment);
size_t
max_serialized_size_SpeedLimitedLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_fleet_msgs


namespace rmf_fleet_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_fleet_msgs
cdr_serialize(
  const rmf_fleet_msgs::msg::LaneStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fleet_name
  cdr << ros_message.fleet_name;
  // Member: closed_lanes
  {
    cdr << ros_message.closed_lanes;
  }
  // Member: speed_limits
  {
    size_t size = ros_message.speed_limits.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_fleet_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.speed_limits[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_fleet_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_fleet_msgs::msg::LaneStates & ros_message)
{
  // Member: fleet_name
  cdr >> ros_message.fleet_name;

  // Member: closed_lanes
  {
    cdr >> ros_message.closed_lanes;
  }

  // Member: speed_limits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.speed_limits.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_fleet_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.speed_limits[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_fleet_msgs
get_serialized_size(
  const rmf_fleet_msgs::msg::LaneStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fleet_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.fleet_name.size() + 1);
  // Member: closed_lanes
  {
    size_t array_size = ros_message.closed_lanes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.closed_lanes[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limits
  {
    size_t array_size = ros_message.speed_limits.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_fleet_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.speed_limits[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_fleet_msgs
max_serialized_size_LaneStates(
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


  // Member: fleet_name
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

  // Member: closed_lanes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_limits
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
        rmf_fleet_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SpeedLimitedLane(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LaneStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_fleet_msgs::msg::LaneStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_fleet_msgs::msg::LaneStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_fleet_msgs::msg::LaneStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneStates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneStates__callbacks = {
  "rmf_fleet_msgs::msg",
  "LaneStates",
  _LaneStates__cdr_serialize,
  _LaneStates__cdr_deserialize,
  _LaneStates__get_serialized_size,
  _LaneStates__max_serialized_size
};

static rosidl_message_type_support_t _LaneStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_fleet_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_fleet_msgs::msg::LaneStates>()
{
  return &rmf_fleet_msgs::msg::typesupport_fastrtps_cpp::_LaneStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_fleet_msgs, msg, LaneStates)() {
  return &rmf_fleet_msgs::msg::typesupport_fastrtps_cpp::_LaneStates__handle;
}

#ifdef __cplusplus
}
#endif
