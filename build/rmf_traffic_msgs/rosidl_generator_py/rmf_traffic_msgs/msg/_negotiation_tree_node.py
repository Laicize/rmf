# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/NegotiationTreeNode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NegotiationTreeNode(type):
    """Metaclass of message 'NegotiationTreeNode'."""

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
                'rmf_traffic_msgs.msg.NegotiationTreeNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__negotiation_tree_node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__negotiation_tree_node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__negotiation_tree_node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__negotiation_tree_node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__negotiation_tree_node

            from rmf_traffic_msgs.msg import NegotiationKey
            if NegotiationKey.__class__._TYPE_SUPPORT is None:
                NegotiationKey.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import Route
            if Route.__class__._TYPE_SUPPORT is None:
                Route.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NegotiationTreeNode(metaclass=Metaclass_NegotiationTreeNode):
    """Message class 'NegotiationTreeNode'."""

    __slots__ = [
        '_parent',
        '_key',
        '_rejected',
        '_itinerary',
    ]

    _fields_and_field_types = {
        'parent': 'int64',
        'key': 'rmf_traffic_msgs/NegotiationKey',
        'rejected': 'boolean',
        'itinerary': 'sequence<rmf_traffic_msgs/Route>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationKey'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Route')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parent = kwargs.get('parent', int())
        from rmf_traffic_msgs.msg import NegotiationKey
        self.key = kwargs.get('key', NegotiationKey())
        self.rejected = kwargs.get('rejected', bool())
        self.itinerary = kwargs.get('itinerary', [])

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
        if self.parent != other.parent:
            return False
        if self.key != other.key:
            return False
        if self.rejected != other.rejected:
            return False
        if self.itinerary != other.itinerary:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def parent(self):
        """Message field 'parent'."""
        return self._parent

    @parent.setter
    def parent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parent' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'parent' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._parent = value

    @builtins.property
    def key(self):
        """Message field 'key'."""
        return self._key

    @key.setter
    def key(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationKey
            assert \
                isinstance(value, NegotiationKey), \
                "The 'key' field must be a sub message of type 'NegotiationKey'"
        self._key = value

    @builtins.property
    def rejected(self):
        """Message field 'rejected'."""
        return self._rejected

    @rejected.setter
    def rejected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rejected' field must be of type 'bool'"
        self._rejected = value

    @builtins.property
    def itinerary(self):
        """Message field 'itinerary'."""
        return self._itinerary

    @itinerary.setter
    def itinerary(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Route
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
                 all(isinstance(v, Route) for v in value) and
                 True), \
                "The 'itinerary' field must be a set or sequence and each value of type 'Route'"
        self._itinerary = value
