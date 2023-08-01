# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'remove_limits'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedLimitRequest(type):
    """Metaclass of message 'SpeedLimitRequest'."""

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
            module = import_type_support('rmf_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_fleet_msgs.msg.SpeedLimitRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_limit_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_limit_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_limit_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_limit_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_limit_request

            from rmf_fleet_msgs.msg import SpeedLimitedLane
            if SpeedLimitedLane.__class__._TYPE_SUPPORT is None:
                SpeedLimitedLane.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedLimitRequest(metaclass=Metaclass_SpeedLimitRequest):
    """Message class 'SpeedLimitRequest'."""

    __slots__ = [
        '_fleet_name',
        '_speed_limits',
        '_remove_limits',
    ]

    _fields_and_field_types = {
        'fleet_name': 'string',
        'speed_limits': 'sequence<rmf_fleet_msgs/SpeedLimitedLane>',
        'remove_limits': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'SpeedLimitedLane')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fleet_name = kwargs.get('fleet_name', str())
        self.speed_limits = kwargs.get('speed_limits', [])
        self.remove_limits = array.array('Q', kwargs.get('remove_limits', []))

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
        if self.fleet_name != other.fleet_name:
            return False
        if self.speed_limits != other.speed_limits:
            return False
        if self.remove_limits != other.remove_limits:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def speed_limits(self):
        """Message field 'speed_limits'."""
        return self._speed_limits

    @speed_limits.setter
    def speed_limits(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import SpeedLimitedLane
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, SpeedLimitedLane) for v in value) and
                 True), \
                "The 'speed_limits' field must be a set or sequence and each value of type 'SpeedLimitedLane'"
        self._speed_limits = value

    @builtins.property
    def remove_limits(self):
        """Message field 'remove_limits'."""
        return self._remove_limits

    @remove_limits.setter
    def remove_limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'remove_limits' array.array() must have the type code of 'Q'"
            self._remove_limits = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'remove_limits' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._remove_limits = array.array('Q', value)
