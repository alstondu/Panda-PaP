# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from panda_world_spawner/Task1ServiceRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class Task1ServiceRequest(genpy.Message):
  _md5sum = "f2ce7f945836acb742f2f7bc16c06e3c"
  _type = "panda_world_spawner/Task1ServiceRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/PoseStamped object_loc
geometry_msgs/PointStamped goal_loc

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point
"""
  __slots__ = ['object_loc','goal_loc']
  _slot_types = ['geometry_msgs/PoseStamped','geometry_msgs/PointStamped']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object_loc,goal_loc

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Task1ServiceRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.object_loc is None:
        self.object_loc = geometry_msgs.msg.PoseStamped()
      if self.goal_loc is None:
        self.goal_loc = geometry_msgs.msg.PointStamped()
    else:
      self.object_loc = geometry_msgs.msg.PoseStamped()
      self.goal_loc = geometry_msgs.msg.PointStamped()

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
      buff.write(_get_struct_3I().pack(_x.object_loc.header.seq, _x.object_loc.header.stamp.secs, _x.object_loc.header.stamp.nsecs))
      _x = self.object_loc.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d3I().pack(_x.object_loc.pose.position.x, _x.object_loc.pose.position.y, _x.object_loc.pose.position.z, _x.object_loc.pose.orientation.x, _x.object_loc.pose.orientation.y, _x.object_loc.pose.orientation.z, _x.object_loc.pose.orientation.w, _x.goal_loc.header.seq, _x.goal_loc.header.stamp.secs, _x.goal_loc.header.stamp.nsecs))
      _x = self.goal_loc.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.goal_loc.point.x, _x.goal_loc.point.y, _x.goal_loc.point.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.object_loc is None:
        self.object_loc = geometry_msgs.msg.PoseStamped()
      if self.goal_loc is None:
        self.goal_loc = geometry_msgs.msg.PointStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.object_loc.header.seq, _x.object_loc.header.stamp.secs, _x.object_loc.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.object_loc.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.object_loc.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 68
      (_x.object_loc.pose.position.x, _x.object_loc.pose.position.y, _x.object_loc.pose.position.z, _x.object_loc.pose.orientation.x, _x.object_loc.pose.orientation.y, _x.object_loc.pose.orientation.z, _x.object_loc.pose.orientation.w, _x.goal_loc.header.seq, _x.goal_loc.header.stamp.secs, _x.goal_loc.header.stamp.nsecs,) = _get_struct_7d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal_loc.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.goal_loc.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.goal_loc.point.x, _x.goal_loc.point.y, _x.goal_loc.point.z,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.object_loc.header.seq, _x.object_loc.header.stamp.secs, _x.object_loc.header.stamp.nsecs))
      _x = self.object_loc.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d3I().pack(_x.object_loc.pose.position.x, _x.object_loc.pose.position.y, _x.object_loc.pose.position.z, _x.object_loc.pose.orientation.x, _x.object_loc.pose.orientation.y, _x.object_loc.pose.orientation.z, _x.object_loc.pose.orientation.w, _x.goal_loc.header.seq, _x.goal_loc.header.stamp.secs, _x.goal_loc.header.stamp.nsecs))
      _x = self.goal_loc.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.goal_loc.point.x, _x.goal_loc.point.y, _x.goal_loc.point.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.object_loc is None:
        self.object_loc = geometry_msgs.msg.PoseStamped()
      if self.goal_loc is None:
        self.goal_loc = geometry_msgs.msg.PointStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.object_loc.header.seq, _x.object_loc.header.stamp.secs, _x.object_loc.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.object_loc.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.object_loc.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 68
      (_x.object_loc.pose.position.x, _x.object_loc.pose.position.y, _x.object_loc.pose.position.z, _x.object_loc.pose.orientation.x, _x.object_loc.pose.orientation.y, _x.object_loc.pose.orientation.z, _x.object_loc.pose.orientation.w, _x.goal_loc.header.seq, _x.goal_loc.header.stamp.secs, _x.goal_loc.header.stamp.nsecs,) = _get_struct_7d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal_loc.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.goal_loc.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.goal_loc.point.x, _x.goal_loc.point.y, _x.goal_loc.point.z,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_7d3I = None
def _get_struct_7d3I():
    global _struct_7d3I
    if _struct_7d3I is None:
        _struct_7d3I = struct.Struct("<7d3I")
    return _struct_7d3I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from panda_world_spawner/Task1ServiceResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Task1ServiceResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "panda_world_spawner/Task1ServiceResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Task1ServiceResponse, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class Task1Service(object):
  _type          = 'panda_world_spawner/Task1Service'
  _md5sum = 'f2ce7f945836acb742f2f7bc16c06e3c'
  _request_class  = Task1ServiceRequest
  _response_class = Task1ServiceResponse
