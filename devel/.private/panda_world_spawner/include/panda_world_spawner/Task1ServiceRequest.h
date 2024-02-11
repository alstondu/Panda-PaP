// Generated by gencpp from file panda_world_spawner/Task1ServiceRequest.msg
// DO NOT EDIT!


#ifndef PANDA_WORLD_SPAWNER_MESSAGE_TASK1SERVICEREQUEST_H
#define PANDA_WORLD_SPAWNER_MESSAGE_TASK1SERVICEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PointStamped.h>

namespace panda_world_spawner
{
template <class ContainerAllocator>
struct Task1ServiceRequest_
{
  typedef Task1ServiceRequest_<ContainerAllocator> Type;

  Task1ServiceRequest_()
    : object_loc()
    , goal_loc()  {
    }
  Task1ServiceRequest_(const ContainerAllocator& _alloc)
    : object_loc(_alloc)
    , goal_loc(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _object_loc_type;
  _object_loc_type object_loc;

   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _goal_loc_type;
  _goal_loc_type goal_loc;





  typedef boost::shared_ptr< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Task1ServiceRequest_

typedef ::panda_world_spawner::Task1ServiceRequest_<std::allocator<void> > Task1ServiceRequest;

typedef boost::shared_ptr< ::panda_world_spawner::Task1ServiceRequest > Task1ServiceRequestPtr;
typedef boost::shared_ptr< ::panda_world_spawner::Task1ServiceRequest const> Task1ServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator1> & lhs, const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.object_loc == rhs.object_loc &&
    lhs.goal_loc == rhs.goal_loc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator1> & lhs, const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace panda_world_spawner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2ce7f945836acb742f2f7bc16c06e3c";
  }

  static const char* value(const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2ce7f945836acb7ULL;
  static const uint64_t static_value2 = 0x42f2f7bc16c06e3cULL;
};

template<class ContainerAllocator>
struct DataType< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "panda_world_spawner/Task1ServiceRequest";
  }

  static const char* value(const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseStamped object_loc\n"
"geometry_msgs/PointStamped goal_loc\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
;
  }

  static const char* value(const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_loc);
      stream.next(m.goal_loc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Task1ServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::panda_world_spawner::Task1ServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "object_loc: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.object_loc);
    s << indent << "goal_loc: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_loc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PANDA_WORLD_SPAWNER_MESSAGE_TASK1SERVICEREQUEST_H
