// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
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
#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.h"
#include "rmf_traffic_msgs/msg/detail/mirror_update__functions.h"

bool rmf_traffic_msgs__msg__schedule_identity__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_identity__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__schedule_patch__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_patch__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__mirror_update__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("rmf_traffic_msgs.msg._mirror_update.MirrorUpdate", full_classname_dest, 48) == 0);
  }
  rmf_traffic_msgs__msg__MirrorUpdate * ros_message = _ros_message;
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__schedule_identity__convert_from_py(field, &ros_message->node_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // database_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "database_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->database_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // patch
    PyObject * field = PyObject_GetAttrString(_pymsg, "patch");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__schedule_patch__convert_from_py(field, &ros_message->patch)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_remedial_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_remedial_update");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_remedial_update = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__mirror_update__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MirrorUpdate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._mirror_update");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MirrorUpdate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__MirrorUpdate * ros_message = (rmf_traffic_msgs__msg__MirrorUpdate *)raw_ros_message;
  {  // node_id
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__schedule_identity__convert_to_py(&ros_message->node_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // database_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->database_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "database_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // patch
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__schedule_patch__convert_to_py(&ros_message->patch);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "patch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_remedial_update
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_remedial_update ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_remedial_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
