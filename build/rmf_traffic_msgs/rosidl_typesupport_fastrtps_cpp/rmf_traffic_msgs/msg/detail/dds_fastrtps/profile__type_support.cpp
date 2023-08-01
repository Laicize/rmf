// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/profile__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_traffic_msgs/msg/detail/profile__struct.hpp"

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
  const rmf_traffic_msgs::msg::ConvexShape &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ConvexShape &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ConvexShape &,
  size_t current_alignment);
size_t
max_serialized_size_ConvexShape(
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
  const rmf_traffic_msgs::msg::ConvexShape &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ConvexShape &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ConvexShape &,
  size_t current_alignment);
size_t
max_serialized_size_ConvexShape(
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
  const rmf_traffic_msgs::msg::ConvexShapeContext &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs::msg::ConvexShapeContext &);
size_t get_serialized_size(
  const rmf_traffic_msgs::msg::ConvexShapeContext &,
  size_t current_alignment);
size_t
max_serialized_size_ConvexShapeContext(
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
  const rmf_traffic_msgs::msg::Profile & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: footprint
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.footprint,
    cdr);
  // Member: vicinity
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vicinity,
    cdr);
  // Member: shape_context
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.shape_context,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_traffic_msgs::msg::Profile & ros_message)
{
  // Member: footprint
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.footprint);

  // Member: vicinity
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vicinity);

  // Member: shape_context
  rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.shape_context);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
get_serialized_size(
  const rmf_traffic_msgs::msg::Profile & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: footprint

  current_alignment +=
    rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.footprint, current_alignment);
  // Member: vicinity

  current_alignment +=
    rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vicinity, current_alignment);
  // Member: shape_context

  current_alignment +=
    rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.shape_context, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_traffic_msgs
max_serialized_size_Profile(
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


  // Member: footprint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConvexShape(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: vicinity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConvexShape(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: shape_context
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConvexShapeContext(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Profile__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::Profile *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Profile__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_traffic_msgs::msg::Profile *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Profile__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_traffic_msgs::msg::Profile *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Profile__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Profile(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Profile__callbacks = {
  "rmf_traffic_msgs::msg",
  "Profile",
  _Profile__cdr_serialize,
  _Profile__cdr_deserialize,
  _Profile__get_serialized_size,
  _Profile__max_serialized_size
};

static rosidl_message_type_support_t _Profile__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Profile__callbacks,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::Profile>()
{
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_Profile__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_traffic_msgs, msg, Profile)() {
  return &rmf_traffic_msgs::msg::typesupport_fastrtps_cpp::_Profile__handle;
}

#ifdef __cplusplus
}
#endif
