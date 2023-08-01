# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_scheduler_msgs:msg/ScheduleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScheduleState(type):
    """Metaclass of message 'ScheduleState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CREATED': 1,
        'STARTED': 2,
        'FINISHED': 3,
        'CANCELLED': 4,
        'FAILED': -1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_scheduler_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_scheduler_msgs.msg.ScheduleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__schedule_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__schedule_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__schedule_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__schedule_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__schedule_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CREATED': cls.__constants['CREATED'],
            'STARTED': cls.__constants['STARTED'],
            'FINISHED': cls.__constants['FINISHED'],
            'CANCELLED': cls.__constants['CANCELLED'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def CREATED(self):
        """Message constant 'CREATED'."""
        return Metaclass_ScheduleState.__constants['CREATED']

    @property
    def STARTED(self):
        """Message constant 'STARTED'."""
        return Metaclass_ScheduleState.__constants['STARTED']

    @property
    def FINISHED(self):
        """Message constant 'FINISHED'."""
        return Metaclass_ScheduleState.__constants['FINISHED']

    @property
    def CANCELLED(self):
        """Message constant 'CANCELLED'."""
        return Metaclass_ScheduleState.__constants['CANCELLED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_ScheduleState.__constants['FAILED']


class ScheduleState(metaclass=Metaclass_ScheduleState):
    """
    Message class 'ScheduleState'.

    Constants:
      CREATED
      STARTED
      FINISHED
      CANCELLED
      FAILED
    """

    __slots__ = [
        '_name',
        '_last_modified',
        '_last_ran',
        '_next_run',
        '_status',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'last_modified': 'int64',
        'last_ran': 'int64',
        'next_run': 'int64',
        'status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.last_modified = kwargs.get('last_modified', int())
        self.last_ran = kwargs.get('last_ran', int())
        self.next_run = kwargs.get('next_run', int())
        self.status = kwargs.get('status', int())

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
        if self.name != other.name:
            return False
        if self.last_modified != other.last_modified:
            return False
        if self.last_ran != other.last_ran:
            return False
        if self.next_run != other.next_run:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def last_modified(self):
        """Message field 'last_modified'."""
        return self._last_modified

    @last_modified.setter
    def last_modified(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_modified' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'last_modified' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._last_modified = value

    @builtins.property
    def last_ran(self):
        """Message field 'last_ran'."""
        return self._last_ran

    @last_ran.setter
    def last_ran(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_ran' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'last_ran' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._last_ran = value

    @builtins.property
    def next_run(self):
        """Message field 'next_run'."""
        return self._next_run

    @next_run.setter
    def next_run(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'next_run' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'next_run' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._next_run = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value
