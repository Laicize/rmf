# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_workcell_msgs:msg/WorkcellState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WorkcellState(type):
    """Metaclass of message 'WorkcellState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IDLE': 0,
        'BUSY': 1,
        'OFFLINE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_workcell_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_workcell_msgs.msg.WorkcellState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__workcell_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__workcell_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__workcell_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__workcell_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__workcell_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IDLE': cls.__constants['IDLE'],
            'BUSY': cls.__constants['BUSY'],
            'OFFLINE': cls.__constants['OFFLINE'],
        }

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_WorkcellState.__constants['IDLE']

    @property
    def BUSY(self):
        """Message constant 'BUSY'."""
        return Metaclass_WorkcellState.__constants['BUSY']

    @property
    def OFFLINE(self):
        """Message constant 'OFFLINE'."""
        return Metaclass_WorkcellState.__constants['OFFLINE']


class WorkcellState(metaclass=Metaclass_WorkcellState):
    """
    Message class 'WorkcellState'.

    Constants:
      IDLE
      BUSY
      OFFLINE
    """

    __slots__ = [
        '_time',
        '_guid',
        '_mode',
        '_request_guid_queue',
    ]

    _fields_and_field_types = {
        'time': 'builtin_interfaces/Time',
        'guid': 'string',
        'mode': 'int32',
        'request_guid_queue': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.time = kwargs.get('time', Time())
        self.guid = kwargs.get('guid', str())
        self.mode = kwargs.get('mode', int())
        self.request_guid_queue = kwargs.get('request_guid_queue', [])

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
        if self.time != other.time:
            return False
        if self.guid != other.guid:
            return False
        if self.mode != other.mode:
            return False
        if self.request_guid_queue != other.request_guid_queue:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time' field must be a sub message of type 'Time'"
        self._time = value

    @builtins.property
    def guid(self):
        """Message field 'guid'."""
        return self._guid

    @guid.setter
    def guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'guid' field must be of type 'str'"
        self._guid = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

    @builtins.property
    def request_guid_queue(self):
        """Message field 'request_guid_queue'."""
        return self._request_guid_queue

    @request_guid_queue.setter
    def request_guid_queue(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'request_guid_queue' field must be a set or sequence and each value of type 'str'"
        self._request_guid_queue = value
