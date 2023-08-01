// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_patch__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.hpp"

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
  const rmf_traffic_msgs::msg::ScheduleParticipantPatch &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ScheduleParticipantPatch &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleParticipantPatch &,
  size_t current_alignment);
size_t
max_serialized_size_ScheduleParticipantPatch(
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
  const rmf_traffic_msgs::msg::ScheduleChangeCull &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ScheduleChangeCull &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ScheduleChangeCull &,
  size_t current_alignment);
size_t
max_serialized_size_ScheduleChangeCull(
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
  const rmf_traffic_msgs::msg::SchedulePatch & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: participants
  {
    size_t size = ros_message.participants.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.participants[i],
        cdr);
    }
  }
  // Member: cull
  {
    size_t size = ros_message.cull.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cull[i],
        cdr);
    }
  }
  // Member: has_base_version
  cdr << (ros_message.has_base_version ? true : false);
  // Member: base_version
  cdr << ros_message.base_version;
  // Member: latest_version
  cdr << ros_message.latest_version;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_traffic_msgs::msg::SchedulePatch & ros_message)
{
  // Member: participants
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.participants.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.participants[i]);
    }
  }

  // Member: cull
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cull.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cull[i]);
    }
  }

  // Member: has_base_version
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_base_version = tmp ? true : false;
  }

  // Member: base_version
  cdr >> ros_message.base_version;

  // Member: latest_version
  cdr >> ros_message.latest_version;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
get_serialized_size(
  const rmf_traffic_msgs::msg::SchedulePatch & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: participants
  {
    size_t array_size = ros_message.participants.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.participants[index], current_alignment);
    }
  }
  // Member: cull
  {
    size_t array_size = ros_message.cull.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cull[index], current_alignment);
    }
  }
  // Member: has_base_version
  {
    size_t item_size = sizeof(ros_message.has_base_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_version
  {
    size_t item_size = sizeof(ros_message.base_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latest_version
  {
    size_t item_size = sizeof(ros_message.latest_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
max_serialized_size_SchedulePatch(
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


  // Member: participants
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
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScheduleParticipantPatch(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cull
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
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScheduleChangeCull(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: has_base_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: base_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: latest_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SchedulePatch__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::SchedulePatch *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SchedulePatch__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_traffic_msgs::msg::SchedulePatch *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SchedulePatch__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::SchedulePatch *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SchedulePatch__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SchedulePatch(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SchedulePatch__callbacks = {
  "rmf_traffic_msgs::msg",
  "SchedulePatch",
  _SchedulePatch__cdr_serialize,
  _SchedulePatch__cdr_deserialize,
  _SchedulePatch__get_serialized_size,
  _SchedulePatch__max_serialized_size
};

static rosidl_message_type_support_t _SchedulePatch__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SchedulePatch__callbacks,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::SchedulePatch>()
{
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_SchedulePatch__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_traffic_msgs, msg, SchedulePatch)() {
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_SchedulePatch__handle;
}

#ifdef __cplusplus
}
#endif
