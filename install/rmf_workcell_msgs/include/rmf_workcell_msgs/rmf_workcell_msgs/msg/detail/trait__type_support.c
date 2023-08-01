// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_workcell_msgs/msg/detail/trait__rosidl_typesupport_introspection_c.h"
#include "rmf_workcell_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_workcell_msgs/msg/detail/trait__functions.h"
#include "rmf_workcell_msgs/msg/detail/trait__struct.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_workcell_msgs__msg__Trait__init(message_memory);
}

void rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_fini_function(void * message_memory)
{
  rmf_workcell_msgs__msg__Trait__fini(message_memory);
}

size_t rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__size_function__Trait__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__get_const_function__Trait__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__get_function__Trait__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__fetch_function__Trait__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__get_const_function__Trait__value(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__assign_function__Trait__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__get_function__Trait__value(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__resize_function__Trait__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__Trait, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__Trait, value),  // bytes offset in struct
    NULL,  // default value
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__size_function__Trait__value,  // size() function pointer
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__get_const_function__Trait__value,  // get_const(index) function pointer
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__get_function__Trait__value,  // get(index) function pointer
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__fetch_function__Trait__value,  // fetch(index, &value) function pointer
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__assign_function__Trait__value,  // assign(index, value) function pointer
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__resize_function__Trait__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_members = {
  "rmf_workcell_msgs__msg",  // message namespace
  "Trait",  // message name
  2,  // number of fields
  sizeof(rmf_workcell_msgs__msg__Trait),
  rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_member_array,  // message members
  rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_type_support_handle = {
  0,
  &rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_workcell_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_workcell_msgs, msg, Trait)() {
  if (!rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_type_support_handle.typesupport_identifier) {
    rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_workcell_msgs__msg__Trait__rosidl_typesupport_introspection_c__Trait_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
