# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UnregisterParticipant_Request(type):
    """Metaclass of message 'UnregisterParticipant_Request'."""

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
            module = import_type_support('rmf_traffic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_traffic_msgs.srv.UnregisterParticipant_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__unregister_participant__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__unregister_participant__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__unregister_participant__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__unregister_participant__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__unregister_participant__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UnregisterParticipant_Request(metaclass=Metaclass_UnregisterParticipant_Request):
    """Message class 'UnregisterParticipant_Request'."""

    __slots__ = [
        '_participant_id',
    ]

    _fields_and_field_types = {
        'participant_id': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.participant_id = kwargs.get('participant_id', int())

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
        if self.participant_id != other.participant_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def participant_id(self):
        """Message field 'participant_id'."""
        return self._participant_id

    @participant_id.setter
    def participant_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'participant_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'participant_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._participant_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UnregisterParticipant_Response(type):
    """Metaclass of message 'UnregisterParticipant_Response'."""

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
            module = import_type_support('rmf_traffic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_traffic_msgs.srv.UnregisterParticipant_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__unregister_participant__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__unregister_participant__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__unregister_participant__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__unregister_participant__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__unregister_participant__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UnregisterParticipant_Response(metaclass=Metaclass_UnregisterParticipant_Response):
    """Message class 'UnregisterParticipant_Response'."""

    __slots__ = [
        '_confirmation',
        '_error',
    ]

    _fields_and_field_types = {
        'confirmation': 'boolean',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.confirmation = kwargs.get('confirmation', bool())
        self.error = kwargs.get('error', str())

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
        if self.confirmation != other.confirmation:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def confirmation(self):
        """Message field 'confirmation'."""
        return self._confirmation

    @confirmation.setter
    def confirmation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'confirmation' field must be of type 'bool'"
        self._confirmation = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_UnregisterParticipant(type):
    """Metaclass of service 'UnregisterParticipant'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_traffic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_traffic_msgs.srv.UnregisterParticipant')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__unregister_participant

            from rmf_traffic_msgs.srv import _unregister_participant
            if _unregister_participant.Metaclass_UnregisterParticipant_Request._TYPE_SUPPORT is None:
                _unregister_participant.Metaclass_UnregisterParticipant_Request.__import_type_support__()
            if _unregister_participant.Metaclass_UnregisterParticipant_Response._TYPE_SUPPORT is None:
                _unregister_participant.Metaclass_UnregisterParticipant_Response.__import_type_support__()


class UnregisterParticipant(metaclass=Metaclass_UnregisterParticipant):
    from rmf_traffic_msgs.srv._unregister_participant import UnregisterParticipant_Request as Request
    from rmf_traffic_msgs.srv._unregister_participant import UnregisterParticipant_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
