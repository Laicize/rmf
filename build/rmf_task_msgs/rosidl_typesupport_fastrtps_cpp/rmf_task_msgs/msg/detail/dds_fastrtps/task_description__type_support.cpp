// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/task_description__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_task_msgs/msg/detail/task_description__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace rmf_task_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_task_msgs::msg::Priority &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs::msg::Priority &);
size_t get_serialized_size(
  const rmf_task_msgs::msg::Priority &,
  size_t current_alignment);
size_t
max_serialized_size_Priority(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_task_msgs::msg::TaskType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs::msg::TaskType &);
size_t get_serialized_size(
  const rmf_task_msgs::msg::TaskType &,
  size_t current_alignment);
size_t
max_serialized_size_TaskType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_task_msgs::msg::Station &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs::msg::Station &);
size_t get_serialized_size(
  const rmf_task_msgs::msg::Station &,
  size_t current_alignment);
size_t
max_serialized_size_Station(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_task_msgs::msg::Loop &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs::msg::Loop &);
size_t get_serialized_size(
  const rmf_task_msgs::msg::Loop &,
  size_t current_alignment);
size_t
max_serialized_size_Loop(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_task_msgs::msg::Delivery &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs::msg::Delivery &);
size_t get_serialized_size(
  const rmf_task_msgs::msg::Delivery &,
  size_t current_alignment);
size_t
max_serialized_size_Delivery(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_task_msgs::msg::Clean &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs::msg::Clean &);
size_t get_serialized_size(
  const rmf_task_msgs::msg::Clean &,
  size_t current_alignment);
size_t
max_serialized_size_Clean(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
cdr_serialize(
  const rmf_task_msgs::msg::TaskDescription & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start_time
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.start_time,
    cdr);
  // Member: priority
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.priority,
    cdr);
  // Member: task_type
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.task_type,
    cdr);
  // Member: station
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.station,
    cdr);
  // Member: loop
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.loop,
    cdr);
  // Member: delivery
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.delivery,
    cdr);
  // Member: clean
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.clean,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_task_msgs::msg::TaskDescription & ros_message)
{
  // Member: start_time
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.start_time);

  // Member: priority
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.priority);

  // Member: task_type
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.task_type);

  // Member: station
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.station);

  // Member: loop
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.loop);

  // Member: delivery
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.delivery);

  // Member: clean
  rmf_task_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.clean);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
get_serialized_size(
  const rmf_task_msgs::msg::TaskDescription & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start_time

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.start_time, current_alignment);
  // Member: priority

  current_alignment +=
    rmf_task_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.priority, current_alignment);
  // Member: task_type

  current_alignment +=
    rmf_task_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.task_type, current_alignment);
  // Member: station

  current_alignment +=
    rmf_task_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.station, current_alignment);
  // Member: loop

  current_alignment +=
    rmf_task_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.loop, current_alignment);
  // Member: delivery

  current_alignment +=
    rmf_task_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.delivery, current_alignment);
  // Member: clean

  current_alignment +=
    rmf_task_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.clean, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_task_msgs
max_serialized_size_TaskDescription(
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


  // Member: start_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: priority
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_task_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Priority(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: task_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_task_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TaskType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: station
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_task_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Station(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: loop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_task_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Loop(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: delivery
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_task_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Delivery(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: clean
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_task_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Clean(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TaskDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_task_msgs::msg::TaskDescription *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TaskDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_task_msgs::msg::TaskDescription *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TaskDescription__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_task_msgs::msg::TaskDescription *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TaskDescription__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TaskDescription(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TaskDescription__callbacks = {
  "rmf_task_msgs::msg",
  "TaskDescription",
  _TaskDescription__cdr_serialize,
  _TaskDescription__cdr_deserialize,
  _TaskDescription__get_serialized_size,
  _TaskDescription__max_serialized_size
};

static rosidl_message_type_support_t _TaskDescription__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TaskDescription__callbacks,
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
get_message_type_support_handle<rmf_task_msgs::msg::TaskDescription>()
{
  return &rmf_task_msgs::msg::typesupport_fastrtps_cpp::_TaskDescription__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_task_msgs, msg, TaskDescription)() {
  return &rmf_task_msgs::msg::typesupport_fastrtps_cpp::_TaskDescription__handle;
}

#ifdef __cplusplus
}
#endif
