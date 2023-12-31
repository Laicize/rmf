// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
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
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__struct.h"
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__traffic_dependency__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("rmf_traffic_msgs.msg._traffic_dependency.TrafficDependency", full_classname_dest, 58) == 0);
  }
  rmf_traffic_msgs__msg__TrafficDependency * ros_message = _ros_message;
  {  // dependent_checkpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "dependent_checkpoint");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dependent_checkpoint = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // on_participant
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_participant");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_participant = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // on_plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_plan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_plan = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // on_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_route");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_route = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // on_checkpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_checkpoint");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_checkpoint = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__traffic_dependency__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficDependency */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._traffic_dependency");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficDependency");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__TrafficDependency * ros_message = (rmf_traffic_msgs__msg__TrafficDependency *)raw_ros_message;
  {  // dependent_checkpoint
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->dependent_checkpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dependent_checkpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_participant
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->on_participant);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_participant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_plan
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->on_plan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_plan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_route
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->on_route);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_checkpoint
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->on_checkpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_checkpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
