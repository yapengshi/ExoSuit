// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dynamic_biped:msg/ECJointMotordata.idl
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
#include "dynamic_biped/msg/detail/ec_joint_motordata__struct.h"
#include "dynamic_biped/msg/detail/ec_joint_motordata__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamic_biped__msg__ec_joint_motordata__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dynamic_biped.msg._ec_joint_motordata.ECJointMotordata", full_classname_dest, 54) == 0);
  }
  dynamic_biped__msg__ECJointMotordata * ros_message = _ros_message;
  {  // l_pos_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "l_pos_pitch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l_pos_pitch = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l_pos_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "l_pos_yaw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l_pos_yaw = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l_pos_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "l_pos_end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l_pos_end = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // r_pos_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "r_pos_pitch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r_pos_pitch = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // r_pos_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "r_pos_yaw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r_pos_yaw = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // r_pos_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "r_pos_end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r_pos_end = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamic_biped__msg__ec_joint_motordata__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ECJointMotordata */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamic_biped.msg._ec_joint_motordata");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ECJointMotordata");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamic_biped__msg__ECJointMotordata * ros_message = (dynamic_biped__msg__ECJointMotordata *)raw_ros_message;
  {  // l_pos_pitch
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l_pos_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l_pos_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l_pos_yaw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l_pos_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l_pos_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l_pos_end
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l_pos_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l_pos_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r_pos_pitch
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->r_pos_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r_pos_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r_pos_yaw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->r_pos_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r_pos_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r_pos_end
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->r_pos_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r_pos_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
