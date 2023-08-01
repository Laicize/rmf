// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/graph__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmf_building_map_msgs/msg/detail/graph__struct.hpp"

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
namespace rmf_building_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_building_map_msgs::msg::GraphNode &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_building_map_msgs::msg::GraphNode &);
size_t get_serialized_size(
  const rmf_building_map_msgs::msg::GraphNode &,
  size_t current_alignment);
size_t
max_serialized_size_GraphNode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_building_map_msgs

namespace rmf_building_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_building_map_msgs::msg::GraphEdge &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_building_map_msgs::msg::GraphEdge &);
size_t get_serialized_size(
  const rmf_building_map_msgs::msg::GraphEdge &,
  size_t current_alignment);
size_t
max_serialized_size_GraphEdge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_building_map_msgs

namespace rmf_building_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmf_building_map_msgs::msg::Param &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmf_building_map_msgs::msg::Param &);
size_t get_serialized_size(
  const rmf_building_map_msgs::msg::Param &,
  size_t current_alignment);
size_t
max_serialized_size_Param(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmf_building_map_msgs


namespace rmf_building_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_building_map_msgs
cdr_serialize(
  const rmf_building_map_msgs::msg::Graph & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: vertices
  {
    size_t size = ros_message.vertices.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vertices[i],
        cdr);
    }
  }
  // Member: edges
  {
    size_t size = ros_message.edges.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.edges[i],
        cdr);
    }
  }
  // Member: params
  {
    size_t size = ros_message.params.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.params[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_building_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_building_map_msgs::msg::Graph & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: vertices
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.vertices.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vertices[i]);
    }
  }

  // Member: edges
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.edges.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.edges[i]);
    }
  }

  // Member: params
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.params.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.params[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_building_map_msgs
get_serialized_size(
  const rmf_building_map_msgs::msg::Graph & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: vertices
  {
    size_t array_size = ros_message.vertices.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vertices[index], current_alignment);
    }
  }
  // Member: edges
  {
    size_t array_size = ros_message.edges.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.edges[index], current_alignment);
    }
  }
  // Member: params
  {
    size_t array_size = ros_message.params.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.params[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_building_map_msgs
max_serialized_size_Graph(
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


  // Member: name
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

  // Member: vertices
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
        rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GraphNode(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: edges
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
        rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GraphEdge(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: params
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
        rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Param(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Graph__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmf_building_map_msgs::msg::Graph *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Graph__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmf_building_map_msgs::msg::Graph *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Graph__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmf_building_map_msgs::msg::Graph *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Graph__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Graph(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Graph__callbacks = {
  "rmf_building_map_msgs::msg",
  "Graph",
  _Graph__cdr_serialize,
  _Graph__cdr_deserialize,
  _Graph__get_serialized_size,
  _Graph__max_serialized_size
};

static rosidl_message_type_support_t _Graph__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Graph__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_building_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_building_map_msgs::msg::Graph>()
{
  return &rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::_Graph__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_building_map_msgs, msg, Graph)() {
  return &rmf_building_map_msgs::msg::typesupport_fastrtps_cpp::_Graph__handle;
}

#ifdef __cplusplus
}
#endif
