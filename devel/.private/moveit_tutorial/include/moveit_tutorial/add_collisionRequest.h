// Generated by gencpp from file moveit_tutorial/add_collisionRequest.msg
// DO NOT EDIT!


#ifndef MOVEIT_TUTORIAL_MESSAGE_ADD_COLLISIONREQUEST_H
#define MOVEIT_TUTORIAL_MESSAGE_ADD_COLLISIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Quaternion.h>

namespace moveit_tutorial
{
template <class ContainerAllocator>
struct add_collisionRequest_
{
  typedef add_collisionRequest_<ContainerAllocator> Type;

  add_collisionRequest_()
    : object_name()
    , centre()
    , dimensions()
    , orientation()  {
    }
  add_collisionRequest_(const ContainerAllocator& _alloc)
    : object_name(_alloc)
    , centre(_alloc)
    , dimensions(_alloc)
    , orientation(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _object_name_type;
  _object_name_type object_name;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _centre_type;
  _centre_type centre;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _dimensions_type;
  _dimensions_type dimensions;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;





  typedef boost::shared_ptr< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct add_collisionRequest_

typedef ::moveit_tutorial::add_collisionRequest_<std::allocator<void> > add_collisionRequest;

typedef boost::shared_ptr< ::moveit_tutorial::add_collisionRequest > add_collisionRequestPtr;
typedef boost::shared_ptr< ::moveit_tutorial::add_collisionRequest const> add_collisionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator1> & lhs, const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.object_name == rhs.object_name &&
    lhs.centre == rhs.centre &&
    lhs.dimensions == rhs.dimensions &&
    lhs.orientation == rhs.orientation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator1> & lhs, const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace moveit_tutorial

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c38312d2a4bdf5fafeb316fb55e40e1";
  }

  static const char* value(const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c38312d2a4bdf5fULL;
  static const uint64_t static_value2 = 0xafeb316fb55e40e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_tutorial/add_collisionRequest";
  }

  static const char* value(const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string object_name\n"
"geometry_msgs/Point centre\n"
"geometry_msgs/Vector3 dimensions\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_name);
      stream.next(m.centre);
      stream.next(m.dimensions);
      stream.next(m.orientation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct add_collisionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_tutorial::add_collisionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_tutorial::add_collisionRequest_<ContainerAllocator>& v)
  {
    s << indent << "object_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.object_name);
    s << indent << "centre: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.centre);
    s << indent << "dimensions: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.dimensions);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_TUTORIAL_MESSAGE_ADD_COLLISIONREQUEST_H