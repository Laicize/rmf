# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IngestorRequestItem(type):
    """Metaclass of message 'IngestorRequestItem'."""

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
            module = import_type_support('rmf_ingestor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_ingestor_msgs.msg.IngestorRequestItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ingestor_request_item
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ingestor_request_item
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ingestor_request_item
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ingestor_request_item
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ingestor_request_item

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IngestorRequestItem(metaclass=Metaclass_IngestorRequestItem):
    """Message class 'IngestorRequestItem'."""

    __slots__ = [
        '_type_guid',
        '_quantity',
        '_compartment_name',
    ]

    _fields_and_field_types = {
        'type_guid': 'string',
        'quantity': 'int32',
        'compartment_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type_guid = kwargs.get('type_guid', str())
        self.quantity = kwargs.get('quantity', int())
        self.compartment_name = kwargs.get('compartment_name', str())

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
        if self.type_guid != other.type_guid:
            return False
        if self.quantity != other.quantity:
            return False
        if self.compartment_name != other.compartment_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def type_guid(self):
        """Message field 'type_guid'."""
        return self._type_guid

    @type_guid.setter
    def type_guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type_guid' field must be of type 'str'"
        self._type_guid = value

    @builtins.property
    def quantity(self):
        """Message field 'quantity'."""
        return self._quantity

    @quantity.setter
    def quantity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quantity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'quantity' field must be an integer in [-2147483648, 2147483647]"
        self._quantity = value

    @builtins.property
    def compartment_name(self):
        """Message field 'compartment_name'."""
        return self._compartment_name

    @compartment_name.setter
    def compartment_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'compartment_name' field must be of type 'str'"
        self._compartment_name = value
