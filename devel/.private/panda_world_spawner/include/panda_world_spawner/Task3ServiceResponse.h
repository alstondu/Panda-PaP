// Generated by gencpp from file panda_world_spawner/Task3ServiceResponse.msg
// DO NOT EDIT!


#ifndef PANDA_WORLD_SPAWNER_MESSAGE_TASK3SERVICERESPONSE_H
#define PANDA_WORLD_SPAWNER_MESSAGE_TASK3SERVICERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace panda_world_spawner
{
template <class ContainerAllocator>
struct Task3ServiceResponse_
{
  typedef Task3ServiceResponse_<ContainerAllocator> Type;

  Task3ServiceResponse_()
    {
    }
  Task3ServiceResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Task3ServiceResponse_

typedef ::panda_world_spawner::Task3ServiceResponse_<std::allocator<void> > Task3ServiceResponse;

typedef boost::shared_ptr< ::panda_world_spawner::Task3ServiceResponse > Task3ServiceResponsePtr;
typedef boost::shared_ptr< ::panda_world_spawner::Task3ServiceResponse const> Task3ServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace panda_world_spawner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "panda_world_spawner/Task3ServiceResponse";
  }

  static const char* value(const ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
;
  }

  static const char* value(const ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Task3ServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::panda_world_spawner::Task3ServiceResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PANDA_WORLD_SPAWNER_MESSAGE_TASK3SERVICERESPONSE_H