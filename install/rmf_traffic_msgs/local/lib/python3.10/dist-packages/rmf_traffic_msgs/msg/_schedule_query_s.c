// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.h"
#include "rmf_traffic_msgs/msg/detail/schedule_query__functions.h"

bool rmf_traffic_msgs__msg__schedule_query_spacetime__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_query_spacetime__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__schedule_query_participants__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_query_participants__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__schedule_query__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rmf_traffic_msgs.msg._schedule_query.ScheduleQuery", full_classname_dest, 50) == 0);
  }
  rmf_traffic_msgs__msg__ScheduleQuery * ros_message = _ros_message;
  {  // spacetime
    PyObject * field = PyObject_GetAttrString(_pymsg, "spacetime");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__schedule_query_spacetime__convert_from_py(field, &ros_message->spacetime)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // participants
    PyObject * field = PyObject_GetAttrString(_pymsg, "participants");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__schedule_query_participants__convert_from_py(field, &ros_message->participants)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__schedule_query__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScheduleQuery */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._schedule_query");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScheduleQuery");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__ScheduleQuery * ros_message = (rmf_traffic_msgs__msg__ScheduleQuery *)raw_ros_message;
  {  // spacetime
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__schedule_query_spacetime__convert_to_py(&ros_message->spacetime);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "spacetime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // participants
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__schedule_query_participants__convert_to_py(&ros_message->participants);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "participants", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
