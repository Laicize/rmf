// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
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
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__struct.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"
#include "rmf_traffic_msgs/msg/detail/route__functions.h"
// end nested array functions include
bool rmf_traffic_msgs__msg__negotiation_key__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__negotiation_key__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__route__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__route__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__negotiation_proposal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("rmf_traffic_msgs.msg._negotiation_proposal.NegotiationProposal", full_classname_dest, 62) == 0);
  }
  rmf_traffic_msgs__msg__NegotiationProposal * ros_message = _ros_message;
  {  // conflict_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "conflict_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->conflict_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // proposal_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "proposal_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->proposal_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // for_participant
    PyObject * field = PyObject_GetAttrString(_pymsg, "for_participant");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->for_participant = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // to_accommodate
    PyObject * field = PyObject_GetAttrString(_pymsg, "to_accommodate");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'to_accommodate'");
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
    if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(&(ros_message->to_accommodate), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__NegotiationKey__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__NegotiationKey * dest = ros_message->to_accommodate.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__negotiation_key__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // plan_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plan_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // itinerary
    PyObject * field = PyObject_GetAttrString(_pymsg, "itinerary");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'itinerary'");
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
    if (!rmf_traffic_msgs__msg__Route__Sequence__init(&(ros_message->itinerary), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__Route__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__Route * dest = ros_message->itinerary.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__route__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__negotiation_proposal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NegotiationProposal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._negotiation_proposal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NegotiationProposal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__NegotiationProposal * ros_message = (rmf_traffic_msgs__msg__NegotiationProposal *)raw_ros_message;
  {  // conflict_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->conflict_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "conflict_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // proposal_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->proposal_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "proposal_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // for_participant
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->for_participant);
    {
      int rc = PyObject_SetAttrString(_pymessage, "for_participant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // to_accommodate
    PyObject * field = NULL;
    size_t size = ros_message->to_accommodate.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__NegotiationKey * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->to_accommodate.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__negotiation_key__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "to_accommodate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->plan_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // itinerary
    PyObject * field = NULL;
    size_t size = ros_message->itinerary.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__Route * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->itinerary.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__route__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "itinerary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}