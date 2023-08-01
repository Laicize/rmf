// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/level__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_building_map_msgs/msg/detail/level__struct.h"
#include "rmf_building_map_msgs/msg/detail/level__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"  // images
#include "rmf_building_map_msgs/msg/detail/door__functions.h"  // doors
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"  // nav_graphs, wall_graph
#include "rmf_building_map_msgs/msg/detail/place__functions.h"  // places
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions
size_t get_serialized_size_rmf_building_map_msgs__msg__AffineImage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_building_map_msgs__msg__AffineImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, AffineImage)();
size_t get_serialized_size_rmf_building_map_msgs__msg__Door(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_building_map_msgs__msg__Door(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Door)();
size_t get_serialized_size_rmf_building_map_msgs__msg__Graph(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_building_map_msgs__msg__Graph(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Graph)();
size_t get_serialized_size_rmf_building_map_msgs__msg__Place(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_building_map_msgs__msg__Place(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Place)();


using _Level__ros_msg_type = rmf_building_map_msgs__msg__Level;

static bool _Level__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Level__ros_msg_type * ros_message = static_cast<const _Level__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: elevation
  {
    cdr << ros_message->elevation;
  }

  // Field name: images
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, AffineImage
      )()->data);
    size_t size = ros_message->images.size;
    auto array_ptr = ros_message->images.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: places
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Place
      )()->data);
    size_t size = ros_message->places.size;
    auto array_ptr = ros_message->places.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: doors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Door
      )()->data);
    size_t size = ros_message->doors.size;
    auto array_ptr = ros_message->doors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: nav_graphs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Graph
      )()->data);
    size_t size = ros_message->nav_graphs.size;
    auto array_ptr = ros_message->nav_graphs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: wall_graph
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Graph
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wall_graph, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Level__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Level__ros_msg_type * ros_message = static_cast<_Level__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: elevation
  {
    cdr >> ros_message->elevation;
  }

  // Field name: images
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, AffineImage
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->images.data) {
      rmf_building_map_msgs__msg__AffineImage__Sequence__fini(&ros_message->images);
    }
    if (!rmf_building_map_msgs__msg__AffineImage__Sequence__init(&ros_message->images, size)) {
      fprintf(stderr, "failed to create array for field 'images'");
      return false;
    }
    auto array_ptr = ros_message->images.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: places
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Place
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->places.data) {
      rmf_building_map_msgs__msg__Place__Sequence__fini(&ros_message->places);
    }
    if (!rmf_building_map_msgs__msg__Place__Sequence__init(&ros_message->places, size)) {
      fprintf(stderr, "failed to create array for field 'places'");
      return false;
    }
    auto array_ptr = ros_message->places.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: doors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Door
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->doors.data) {
      rmf_building_map_msgs__msg__Door__Sequence__fini(&ros_message->doors);
    }
    if (!rmf_building_map_msgs__msg__Door__Sequence__init(&ros_message->doors, size)) {
      fprintf(stderr, "failed to create array for field 'doors'");
      return false;
    }
    auto array_ptr = ros_message->doors.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: nav_graphs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Graph
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nav_graphs.data) {
      rmf_building_map_msgs__msg__Graph__Sequence__fini(&ros_message->nav_graphs);
    }
    if (!rmf_building_map_msgs__msg__Graph__Sequence__init(&ros_message->nav_graphs, size)) {
      fprintf(stderr, "failed to create array for field 'nav_graphs'");
      return false;
    }
    auto array_ptr = ros_message->nav_graphs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: wall_graph
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Graph
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wall_graph))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_building_map_msgs
size_t get_serialized_size_rmf_building_map_msgs__msg__Level(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Level__ros_msg_type * ros_message = static_cast<const _Level__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name elevation
  {
    size_t item_size = sizeof(ros_message->elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name images
  {
    size_t array_size = ros_message->images.size;
    auto array_ptr = ros_message->images.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_building_map_msgs__msg__AffineImage(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name places
  {
    size_t array_size = ros_message->places.size;
    auto array_ptr = ros_message->places.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_building_map_msgs__msg__Place(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name doors
  {
    size_t array_size = ros_message->doors.size;
    auto array_ptr = ros_message->doors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_building_map_msgs__msg__Door(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name nav_graphs
  {
    size_t array_size = ros_message->nav_graphs.size;
    auto array_ptr = ros_message->nav_graphs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_building_map_msgs__msg__Graph(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name wall_graph

  current_alignment += get_serialized_size_rmf_building_map_msgs__msg__Graph(
    &(ros_message->wall_graph), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Level__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_building_map_msgs__msg__Level(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_building_map_msgs
size_t max_serialized_size_rmf_building_map_msgs__msg__Level(
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

  // member: name
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
  // member: elevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: images
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
        max_serialized_size_rmf_building_map_msgs__msg__AffineImage(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: places
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
        max_serialized_size_rmf_building_map_msgs__msg__Place(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: doors
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
        max_serialized_size_rmf_building_map_msgs__msg__Door(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nav_graphs
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
        max_serialized_size_rmf_building_map_msgs__msg__Graph(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: wall_graph
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_building_map_msgs__msg__Graph(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Level__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_building_map_msgs__msg__Level(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Level = {
  "rmf_building_map_msgs::msg",
  "Level",
  _Level__cdr_serialize,
  _Level__cdr_deserialize,
  _Level__get_serialized_size,
  _Level__max_serialized_size
};

static rosidl_message_type_support_t _Level__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Level,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_building_map_msgs, msg, Level)() {
  return &_Level__type_support;
}

#if defined(__cplusplus)
}
#endif
