# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: search_msg.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='search_msg.proto',
  package='',
  syntax='proto2',
  serialized_pb=_b('\n\x10search_msg.proto\"\x1a\n\nsearch_msg\x12\x0c\n\x04word\x18\x01 \x03(\x0c\"\x1b\n\rsearch_result\x12\n\n\x02id\x18\x01 \x03(\x05')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_SEARCH_MSG = _descriptor.Descriptor(
  name='search_msg',
  full_name='search_msg',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='word', full_name='search_msg.word', index=0,
      number=1, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=20,
  serialized_end=46,
)


_SEARCH_RESULT = _descriptor.Descriptor(
  name='search_result',
  full_name='search_result',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='search_result.id', index=0,
      number=1, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=48,
  serialized_end=75,
)

DESCRIPTOR.message_types_by_name['search_msg'] = _SEARCH_MSG
DESCRIPTOR.message_types_by_name['search_result'] = _SEARCH_RESULT

search_msg = _reflection.GeneratedProtocolMessageType('search_msg', (_message.Message,), dict(
  DESCRIPTOR = _SEARCH_MSG,
  __module__ = 'search_msg_pb2'
  # @@protoc_insertion_point(class_scope:search_msg)
  ))
_sym_db.RegisterMessage(search_msg)

search_result = _reflection.GeneratedProtocolMessageType('search_result', (_message.Message,), dict(
  DESCRIPTOR = _SEARCH_RESULT,
  __module__ = 'search_msg_pb2'
  # @@protoc_insertion_point(class_scope:search_result)
  ))
_sym_db.RegisterMessage(search_result)


# @@protoc_insertion_point(module_scope)
