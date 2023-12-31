// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
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
#include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.h"
#include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_fleet_msgs__srv__lift_clearance__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("rmf_fleet_msgs.srv._lift_clearance.LiftClearance_Request", full_classname_dest, 56) == 0);
  }
  rmf_fleet_msgs__srv__LiftClearance_Request * ros_message = _ros_message;
  {  // robot_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lift_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lift_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_fleet_msgs__srv__lift_clearance__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LiftClearance_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_fleet_msgs.srv._lift_clearance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LiftClearance_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_fleet_msgs__srv__LiftClearance_Request * ros_message = (rmf_fleet_msgs__srv__LiftClearance_Request *)raw_ros_message;
  {  // robot_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_name.data,
      strlen(ros_message->robot_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lift_name.data,
      strlen(ros_message->lift_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_fleet_msgs__srv__lift_clearance__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("rmf_fleet_msgs.srv._lift_clearance.LiftClearance_Response", full_classname_dest, 57) == 0);
  }
  rmf_fleet_msgs__srv__LiftClearance_Response * ros_message = _ros_message;
  {  // decision
    PyObject * field = PyObject_GetAttrString(_pymsg, "decision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->decision = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_fleet_msgs__srv__lift_clearance__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LiftClearance_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_fleet_msgs.srv._lift_clearance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LiftClearance_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_fleet_msgs__srv__LiftClearance_Response * ros_message = (rmf_fleet_msgs__srv__LiftClearance_Response *)raw_ros_message;
  {  // decision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->decision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
