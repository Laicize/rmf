// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/BlockadeReached.idl
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
#include "rmf_traffic_msgs/msg/detail/blockade_reached__struct.h"
#include "rmf_traffic_msgs/msg/detail/blockade_reached__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__blockade_reached__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("rmf_traffic_msgs.msg._blockade_reached.BlockadeReached", full_classname_dest, 54) == 0);
  }
  rmf_traffic_msgs__msg__BlockadeReached * ros_message = _ros_message;
  {  // participant
    PyObject * field = PyObject_GetAttrString(_pymsg, "participant");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->participant = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // reservation
    PyObject * field = PyObject_GetAttrString(_pymsg, "reservation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reservation = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // checkpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "checkpoint");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->checkpoint = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__blockade_reached__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BlockadeReached */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._blockade_reached");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BlockadeReached");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__BlockadeReached * ros_message = (rmf_traffic_msgs__msg__BlockadeReached *)raw_ros_message;
  {  // participant
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->participant);
    {
      int rc = PyObject_SetAttrString(_pymessage, "participant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reservation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->reservation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reservation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // checkpoint
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->checkpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "checkpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
