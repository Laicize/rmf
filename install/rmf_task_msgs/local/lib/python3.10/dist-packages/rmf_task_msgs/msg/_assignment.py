# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/Assignment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Assignment(type):
    """Metaclass of message 'Assignment'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_task_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_task_msgs.msg.Assignment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__assignment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__assignment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__assignment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__assignment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__assignment

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Assignment(metaclass=Metaclass_Assignment):
    """Message class 'Assignment'."""

    __slots__ = [
        '_is_assigned',
        '_fleet_name',
        '_expected_robot_name',
    ]

    _fields_and_field_types = {
        'is_assigned': 'boolean',
        'fleet_name': 'string',
        'expected_robot_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_assigned = kwargs.get('is_assigned', bool())
        self.fleet_name = kwargs.get('fleet_name', str())
        self.expected_robot_name = kwargs.get('expected_robot_name', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.is_assigned != other.is_assigned:
            return False
        if self.fleet_name != other.fleet_name:
            return False
        if self.expected_robot_name != other.expected_robot_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_assigned(self):
        """Message field 'is_assigned'."""
        return self._is_assigned

    @is_assigned.setter
    def is_assigned(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_assigned' field must be of type 'bool'"
        self._is_assigned = value

    @builtins.property
    def fleet_name(self):
        """Message field 'fleet_name'."""
        return self._fleet_name

    @fleet_name.setter
    def fleet_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fleet_name' field must be of type 'str'"
        self._fleet_name = value

    @builtins.property
    def expected_robot_name(self):
        """Message field 'expected_robot_name'."""
        return self._expected_robot_name

    @expected_robot_name.setter
    def expected_robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'expected_robot_name' field must be of type 'str'"
        self._expected_robot_name = value
