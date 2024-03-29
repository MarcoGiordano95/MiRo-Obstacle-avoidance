# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from miro_msgs/audio_event.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class audio_event(genpy.Message):
  _md5sum = "927b70f5d010591eff5a84c7dbebec11"
  _type = "miro_msgs/audio_event"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 flags
uint32 sample_number
float32 azim
float32 elev
float32 magnitude
int32 t_complete

"""
  __slots__ = ['flags','sample_number','azim','elev','magnitude','t_complete']
  _slot_types = ['uint32','uint32','float32','float32','float32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       flags,sample_number,azim,elev,magnitude,t_complete

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(audio_event, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.flags is None:
        self.flags = 0
      if self.sample_number is None:
        self.sample_number = 0
      if self.azim is None:
        self.azim = 0.
      if self.elev is None:
        self.elev = 0.
      if self.magnitude is None:
        self.magnitude = 0.
      if self.t_complete is None:
        self.t_complete = 0
    else:
      self.flags = 0
      self.sample_number = 0
      self.azim = 0.
      self.elev = 0.
      self.magnitude = 0.
      self.t_complete = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2I3fi().pack(_x.flags, _x.sample_number, _x.azim, _x.elev, _x.magnitude, _x.t_complete))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.flags, _x.sample_number, _x.azim, _x.elev, _x.magnitude, _x.t_complete,) = _get_struct_2I3fi().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2I3fi().pack(_x.flags, _x.sample_number, _x.azim, _x.elev, _x.magnitude, _x.t_complete))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.flags, _x.sample_number, _x.azim, _x.elev, _x.magnitude, _x.t_complete,) = _get_struct_2I3fi().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I3fi = None
def _get_struct_2I3fi():
    global _struct_2I3fi
    if _struct_2I3fi is None:
        _struct_2I3fi = struct.Struct("<2I3fi")
    return _struct_2I3fi
