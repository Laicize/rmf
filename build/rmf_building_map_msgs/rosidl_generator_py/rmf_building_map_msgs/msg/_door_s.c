// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_building_map_msgs:msg/Door.idl
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
#include "rmf_building_map_msgs/msg/detail/door__struct.h"
#include "rmf_building_map_msgs/msg/detail/door__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_building_map_msgs__msg__door__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("rmf_building_map_msgs.msg._door.Door", full_classname_dest, 36) == 0);
  }
  rmf_building_map_msgs__msg__Door * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // v1_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "v1_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v1_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v1_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "v1_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v1_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v2_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "v2_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v2_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v2_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "v2_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v2_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // door_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motion_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motion_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motion_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motion_direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_building_map_msgs__msg__door__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Door */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_building_map_msgs.msg._door");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Door");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_building_map_msgs__msg__Door * ros_message = (rmf_building_map_msgs__msg__Door *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v1_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v1_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v1_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v1_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v1_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v1_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v2_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v2_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v2_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v2_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v2_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v2_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motion_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motion_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
