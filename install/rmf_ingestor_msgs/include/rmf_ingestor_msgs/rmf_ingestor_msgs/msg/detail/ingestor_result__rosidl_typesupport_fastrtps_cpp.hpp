// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_ingestor_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_result__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace rmf_ingestor_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_ingestor_msgs
cdr_serialize(
  const rmf_ingestor_msgs::msg::IngestorResult & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_ingestor_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_ingestor_msgs::msg::IngestorResult & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_ingestor_msgs
get_serialized_size(
  const rmf_ingestor_msgs::msg::IngestorResult & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_ingestor_msgs
max_serialized_size_IngestorResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_ingestor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_ingestor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_ingestor_msgs, msg, IngestorResult)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
