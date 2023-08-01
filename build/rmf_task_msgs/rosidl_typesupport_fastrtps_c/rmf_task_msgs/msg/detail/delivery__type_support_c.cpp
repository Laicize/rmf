// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/delivery__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_task_msgs/msg/detail/delivery__struct.h"
#include "rmf_task_msgs/msg/detail/delivery__functions.h"
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

#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"  // items
#include "rmf_task_msgs/msg/detail/behavior__functions.h"  // dropoff_behavior, pickup_behavior
#include "rosidl_runtime_c/string.h"  // dropoff_ingestor, dropoff_place_name, pickup_dispenser, pickup_place_name, task_id
#include "rosidl_runtime_c/string_functions.h"  // dropoff_ingestor, dropoff_place_name, pickup_dispenser, pickup_place_name, task_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_task_msgs
size_t get_serialized_size_rmf_dispenser_msgs__msg__DispenserRequestItem(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_task_msgs
size_t max_serialized_size_rmf_dispenser_msgs__msg__DispenserRequestItem(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rmf_task_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_dispenser_msgs, msg, DispenserRequestItem)();
size_t get_serialized_size_rmf_task_msgs__msg__Behavior(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmf_task_msgs__msg__Behavior(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Behavior)();


using _Delivery__ros_msg_type = rmf_task_msgs__msg__Delivery;

static bool _Delivery__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Delivery__ros_msg_type * ros_message = static_cast<const _Delivery__ros_msg_type *>(untyped_ros_message);
  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: items
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_dispenser_msgs, msg, DispenserRequestItem
      )()->data);
    size_t size = ros_message->items.size;
    auto array_ptr = ros_message->items.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: pickup_place_name
  {
    const rosidl_runtime_c__String * str = &ros_message->pickup_place_name;
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

  // Field name: pickup_dispenser
  {
    const rosidl_runtime_c__String * str = &ros_message->pickup_dispenser;
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

  // Field name: pickup_behavior
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Behavior
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pickup_behavior, cdr))
    {
      return false;
    }
  }

  // Field name: dropoff_place_name
  {
    const rosidl_runtime_c__String * str = &ros_message->dropoff_place_name;
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

  // Field name: dropoff_ingestor
  {
    const rosidl_runtime_c__String * str = &ros_message->dropoff_ingestor;
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

  // Field name: dropoff_behavior
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Behavior
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dropoff_behavior, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Delivery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Delivery__ros_msg_type * ros_message = static_cast<_Delivery__ros_msg_type *>(untyped_ros_message);
  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  // Field name: items
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_dispenser_msgs, msg, DispenserRequestItem
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->items.data) {
      rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(&ros_message->items);
    }
    if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(&ros_message->items, size)) {
      fprintf(stderr, "failed to create array for field 'items'");
      return false;
    }
    auto array_ptr = ros_message->items.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: pickup_place_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pickup_place_name.data) {
      rosidl_runtime_c__String__init(&ros_message->pickup_place_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pickup_place_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pickup_place_name'\n");
      return false;
    }
  }

  // Field name: pickup_dispenser
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pickup_dispenser.data) {
      rosidl_runtime_c__String__init(&ros_message->pickup_dispenser);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pickup_dispenser,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pickup_dispenser'\n");
      return false;
    }
  }

  // Field name: pickup_behavior
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Behavior
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pickup_behavior))
    {
      return false;
    }
  }

  // Field name: dropoff_place_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dropoff_place_name.data) {
      rosidl_runtime_c__String__init(&ros_message->dropoff_place_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dropoff_place_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dropoff_place_name'\n");
      return false;
    }
  }

  // Field name: dropoff_ingestor
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dropoff_ingestor.data) {
      rosidl_runtime_c__String__init(&ros_message->dropoff_ingestor);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dropoff_ingestor,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dropoff_ingestor'\n");
      return false;
    }
  }

  // Field name: dropoff_behavior
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Behavior
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dropoff_behavior))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t get_serialized_size_rmf_task_msgs__msg__Delivery(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Delivery__ros_msg_type * ros_message = static_cast<const _Delivery__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);
  // field.name items
  {
    size_t array_size = ros_message->items.size;
    auto array_ptr = ros_message->items.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmf_dispenser_msgs__msg__DispenserRequestItem(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name pickup_place_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pickup_place_name.size + 1);
  // field.name pickup_dispenser
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pickup_dispenser.size + 1);
  // field.name pickup_behavior

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Behavior(
    &(ros_message->pickup_behavior), current_alignment);
  // field.name dropoff_place_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dropoff_place_name.size + 1);
  // field.name dropoff_ingestor
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dropoff_ingestor.size + 1);
  // field.name dropoff_behavior

  current_alignment += get_serialized_size_rmf_task_msgs__msg__Behavior(
    &(ros_message->dropoff_behavior), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Delivery__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmf_task_msgs__msg__Delivery(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t max_serialized_size_rmf_task_msgs__msg__Delivery(
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

  // member: task_id
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
  // member: items
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
        max_serialized_size_rmf_dispenser_msgs__msg__DispenserRequestItem(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pickup_place_name
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
  // member: pickup_dispenser
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
  // member: pickup_behavior
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Behavior(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dropoff_place_name
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
  // member: dropoff_ingestor
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
  // member: dropoff_behavior
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rmf_task_msgs__msg__Behavior(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Delivery__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rmf_task_msgs__msg__Delivery(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Delivery = {
  "rmf_task_msgs::msg",
  "Delivery",
  _Delivery__cdr_serialize,
  _Delivery__cdr_deserialize,
  _Delivery__get_serialized_size,
  _Delivery__max_serialized_size
};

static rosidl_message_type_support_t _Delivery__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Delivery,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Delivery)() {
  return &_Delivery__type_support;
}

#if defined(__cplusplus)
}
#endif
