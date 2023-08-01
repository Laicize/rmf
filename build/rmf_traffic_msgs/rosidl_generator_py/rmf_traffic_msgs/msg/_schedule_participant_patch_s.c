// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
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
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"
// end nested array functions include
bool rmf_traffic_msgs__msg__schedule_change_delay__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_change_delay__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__schedule_change_add__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_change_add__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__schedule_change_progress__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_change_progress__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__schedule_participant_patch__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("rmf_traffic_msgs.msg._schedule_participant_patch.ScheduleParticipantPatch", full_classname_dest, 73) == 0);
  }
  rmf_traffic_msgs__msg__ScheduleParticipantPatch * ros_message = _ros_message;
  {  // participant_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "participant_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->participant_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // itinerary_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "itinerary_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->itinerary_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // erasures
    PyObject * field = PyObject_GetAttrString(_pymsg, "erasures");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint64_t);
      if (!rosidl_runtime_c__uint64__Sequence__init(&(ros_message->erasures), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint64__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint64_t * dest = ros_message->erasures.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'erasures'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint64__Sequence__init(&(ros_message->erasures), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint64__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint64_t * dest = ros_message->erasures.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint64_t tmp = PyLong_AsUnsignedLongLong(item);
        memcpy(&dest[i], &tmp, sizeof(uint64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // delays
    PyObject * field = PyObject_GetAttrString(_pymsg, "delays");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'delays'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(&(ros_message->delays), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__ScheduleChangeDelay * dest = ros_message->delays.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__schedule_change_delay__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // additions
    PyObject * field = PyObject_GetAttrString(_pymsg, "additions");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__schedule_change_add__convert_from_py(field, &ros_message->additions)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "progress");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__schedule_change_progress__convert_from_py(field, &ros_message->progress)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__schedule_participant_patch__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScheduleParticipantPatch */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._schedule_participant_patch");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScheduleParticipantPatch");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__ScheduleParticipantPatch * ros_message = (rmf_traffic_msgs__msg__ScheduleParticipantPatch *)raw_ros_message;
  {  // participant_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->participant_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "participant_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // itinerary_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->itinerary_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "itinerary_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // erasures
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "erasures");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint64_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->erasures.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint64_t * src = &(ros_message->erasures.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->erasures.size * sizeof(uint64_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // delays
    PyObject * field = NULL;
    size_t size = ros_message->delays.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__ScheduleChangeDelay * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->delays.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__schedule_change_delay__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "delays", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // additions
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__schedule_change_add__convert_to_py(&ros_message->additions);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "additions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // progress
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__schedule_change_progress__convert_to_py(&ros_message->progress);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
