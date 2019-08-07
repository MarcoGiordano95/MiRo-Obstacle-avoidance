// Generated by gencpp from file miro_msgs/push.msg
// DO NOT EDIT!


#ifndef MIRO_MSGS_MESSAGE_PUSH_H
#define MIRO_MSGS_MESSAGE_PUSH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>

namespace miro_msgs
{
template <class ContainerAllocator>
struct push_
{
  typedef push_<ContainerAllocator> Type;

  push_()
    : link(0)
    , flags(0)
    , pushpos()
    , pushvec()  {
    }
  push_(const ContainerAllocator& _alloc)
    : link(0)
    , flags(0)
    , pushpos(_alloc)
    , pushvec(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _link_type;
  _link_type link;

   typedef uint32_t _flags_type;
  _flags_type flags;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pushpos_type;
  _pushpos_type pushpos;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _pushvec_type;
  _pushvec_type pushvec;




  typedef boost::shared_ptr< ::miro_msgs::push_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::miro_msgs::push_<ContainerAllocator> const> ConstPtr;

}; // struct push_

typedef ::miro_msgs::push_<std::allocator<void> > push;

typedef boost::shared_ptr< ::miro_msgs::push > pushPtr;
typedef boost::shared_ptr< ::miro_msgs::push const> pushConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::miro_msgs::push_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::miro_msgs::push_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace miro_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/msg'], 'miro_msgs': ['/mnt/data/Dropbox/CqR/MIRO1/miro1/mdk/share/miro_msgs/msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::miro_msgs::push_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::miro_msgs::push_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro_msgs::push_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro_msgs::push_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro_msgs::push_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro_msgs::push_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::miro_msgs::push_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6271e5b7c8f54208b938d70e5eaafbe6";
  }

  static const char* value(const ::miro_msgs::push_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6271e5b7c8f54208ULL;
  static const uint64_t static_value2 = 0xb938d70e5eaafbe6ULL;
};

template<class ContainerAllocator>
struct DataType< ::miro_msgs::push_<ContainerAllocator> >
{
  static const char* value()
  {
    return "miro_msgs/push";
  }

  static const char* value(const ::miro_msgs::push_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::miro_msgs::push_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#	The identifier of the pushed link\n\
int32 link\n\
\n\
#	Flags (see miro_constants/miro.py)\n\
#\n\
#	MIRO_BODY_PUSH_IMPULSE\n\
#		Treat push as an impulse (in mm).\n\
#\n\
#	MIRO_BODY_PUSH_VELOCITY\n\
#		Treat push as a velocity (in mm/sec).\n\
#\n\
#	NB: If neither of the above flags is set, the push should\n\
#	not be actioned at all (this condition is used in server\n\
#	to indicate \"not pending\").\n\
#\n\
#	MIRO_BODY_PUSH_ZERO_POSE_DR\n\
#		Zero out any resultant change in pose.dr.\n\
uint32 flags\n\
\n\
#	The pushed point, in the reference frame of the pushed link\n\
geometry_msgs/Point pushpos\n\
\n\
#	The push vector, in the reference frame of the pushed link\n\
geometry_msgs/Vector3 pushvec\n\
\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::miro_msgs::push_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::miro_msgs::push_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link);
      stream.next(m.flags);
      stream.next(m.pushpos);
      stream.next(m.pushvec);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct push_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::miro_msgs::push_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::miro_msgs::push_<ContainerAllocator>& v)
  {
    s << indent << "link: ";
    Printer<int32_t>::stream(s, indent + "  ", v.link);
    s << indent << "flags: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.flags);
    s << indent << "pushpos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pushpos);
    s << indent << "pushvec: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.pushvec);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRO_MSGS_MESSAGE_PUSH_H
