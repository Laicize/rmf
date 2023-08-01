// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_obstacle_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__FUNCTIONS_H_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_obstacle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__struct.h"

/// Initialize msg/BoundingBox3D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_obstacle_msgs__msg__BoundingBox3D
 * )) before or use
 * rmf_obstacle_msgs__msg__BoundingBox3D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
bool
rmf_obstacle_msgs__msg__BoundingBox3D__init(rmf_obstacle_msgs__msg__BoundingBox3D * msg);

/// Finalize msg/BoundingBox3D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
void
rmf_obstacle_msgs__msg__BoundingBox3D__fini(rmf_obstacle_msgs__msg__BoundingBox3D * msg);

/// Create msg/BoundingBox3D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_obstacle_msgs__msg__BoundingBox3D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
rmf_obstacle_msgs__msg__BoundingBox3D *
rmf_obstacle_msgs__msg__BoundingBox3D__create();

/// Destroy msg/BoundingBox3D message.
/**
 * It calls
 * rmf_obstacle_msgs__msg__BoundingBox3D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
void
rmf_obstacle_msgs__msg__BoundingBox3D__destroy(rmf_obstacle_msgs__msg__BoundingBox3D * msg);

/// Check for msg/BoundingBox3D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
bool
rmf_obstacle_msgs__msg__BoundingBox3D__are_equal(const rmf_obstacle_msgs__msg__BoundingBox3D * lhs, const rmf_obstacle_msgs__msg__BoundingBox3D * rhs);

/// Copy a msg/BoundingBox3D message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
bool
rmf_obstacle_msgs__msg__BoundingBox3D__copy(
  const rmf_obstacle_msgs__msg__BoundingBox3D * input,
  rmf_obstacle_msgs__msg__BoundingBox3D * output);

/// Initialize array of msg/BoundingBox3D messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_obstacle_msgs__msg__BoundingBox3D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
bool
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__init(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array, size_t size);

/// Finalize array of msg/BoundingBox3D messages.
/**
 * It calls
 * rmf_obstacle_msgs__msg__BoundingBox3D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
void
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__fini(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array);

/// Create array of msg/BoundingBox3D messages.
/**
 * It allocates the memory for the array and calls
 * rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence *
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__create(size_t size);

/// Destroy array of msg/BoundingBox3D messages.
/**
 * It calls
 * rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
void
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__destroy(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array);

/// Check for msg/BoundingBox3D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
bool
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__are_equal(const rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * lhs, const rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * rhs);

/// Copy an array of msg/BoundingBox3D messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
bool
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__copy(
  const rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * input,
  rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__FUNCTIONS_H_
