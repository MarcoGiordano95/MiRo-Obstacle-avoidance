// Generated by gencpp from file miro_msgs/platform_state.msg
// DO NOT EDIT!


#ifndef MIRO_MSGS_MESSAGE_PLATFORM_STATE_H
#define MIRO_MSGS_MESSAGE_PLATFORM_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace miro_msgs
{
template <class ContainerAllocator>
struct platform_state_
{
  typedef platform_state_<ContainerAllocator> Type;

  platform_state_()
    : header()
    , msg_flags(0)
    , time_usec(0)
    , P1_release(0)
    , P1_mode(0)
    , P1_error_code(0)
    , P1_R_signals(0)
    , success_r(0)
    , success_w(0)
    , seed(0)
    , P2_release(0)
    , P2_bootloader_release(0)
    , serial_number(0)
    , P2_mode(0)
    , P2C_R_signals(0)
    , P2L_R_signals(0)
    , P2U_R_signals(0)
    , num_free_stream_buf(0)
    , msg_id_of_last_stream_buf_recv(0)
    , rtc_hrs(0)
    , rtc_min(0)
    , rtc_sec(0)
    , rtc_skew(0)
    , P3_release(0)
    , number_of_loaded_sounds(0)  {
    }
  platform_state_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , msg_flags(0)
    , time_usec(0)
    , P1_release(0)
    , P1_mode(0)
    , P1_error_code(0)
    , P1_R_signals(0)
    , success_r(0)
    , success_w(0)
    , seed(0)
    , P2_release(0)
    , P2_bootloader_release(0)
    , serial_number(0)
    , P2_mode(0)
    , P2C_R_signals(0)
    , P2L_R_signals(0)
    , P2U_R_signals(0)
    , num_free_stream_buf(0)
    , msg_id_of_last_stream_buf_recv(0)
    , rtc_hrs(0)
    , rtc_min(0)
    , rtc_sec(0)
    , rtc_skew(0)
    , P3_release(0)
    , number_of_loaded_sounds(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _msg_flags_type;
  _msg_flags_type msg_flags;

   typedef int32_t _time_usec_type;
  _time_usec_type time_usec;

   typedef uint16_t _P1_release_type;
  _P1_release_type P1_release;

   typedef uint8_t _P1_mode_type;
  _P1_mode_type P1_mode;

   typedef uint8_t _P1_error_code_type;
  _P1_error_code_type P1_error_code;

   typedef uint32_t _P1_R_signals_type;
  _P1_R_signals_type P1_R_signals;

   typedef uint32_t _success_r_type;
  _success_r_type success_r;

   typedef uint32_t _success_w_type;
  _success_w_type success_w;

   typedef uint32_t _seed_type;
  _seed_type seed;

   typedef uint16_t _P2_release_type;
  _P2_release_type P2_release;

   typedef uint16_t _P2_bootloader_release_type;
  _P2_bootloader_release_type P2_bootloader_release;

   typedef uint32_t _serial_number_type;
  _serial_number_type serial_number;

   typedef uint8_t _P2_mode_type;
  _P2_mode_type P2_mode;

   typedef uint32_t _P2C_R_signals_type;
  _P2C_R_signals_type P2C_R_signals;

   typedef uint32_t _P2L_R_signals_type;
  _P2L_R_signals_type P2L_R_signals;

   typedef uint32_t _P2U_R_signals_type;
  _P2U_R_signals_type P2U_R_signals;

   typedef uint8_t _num_free_stream_buf_type;
  _num_free_stream_buf_type num_free_stream_buf;

   typedef uint16_t _msg_id_of_last_stream_buf_recv_type;
  _msg_id_of_last_stream_buf_recv_type msg_id_of_last_stream_buf_recv;

   typedef int8_t _rtc_hrs_type;
  _rtc_hrs_type rtc_hrs;

   typedef int8_t _rtc_min_type;
  _rtc_min_type rtc_min;

   typedef int8_t _rtc_sec_type;
  _rtc_sec_type rtc_sec;

   typedef int8_t _rtc_skew_type;
  _rtc_skew_type rtc_skew;

   typedef uint16_t _P3_release_type;
  _P3_release_type P3_release;

   typedef int16_t _number_of_loaded_sounds_type;
  _number_of_loaded_sounds_type number_of_loaded_sounds;




  typedef boost::shared_ptr< ::miro_msgs::platform_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::miro_msgs::platform_state_<ContainerAllocator> const> ConstPtr;

}; // struct platform_state_

typedef ::miro_msgs::platform_state_<std::allocator<void> > platform_state;

typedef boost::shared_ptr< ::miro_msgs::platform_state > platform_statePtr;
typedef boost::shared_ptr< ::miro_msgs::platform_state const> platform_stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::miro_msgs::platform_state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::miro_msgs::platform_state_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace miro_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/msg'], 'miro_msgs': ['/mnt/data/Dropbox/CqR/MIRO1/miro1/mdk/share/miro_msgs/msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::miro_msgs::platform_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::miro_msgs::platform_state_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro_msgs::platform_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro_msgs::platform_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro_msgs::platform_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro_msgs::platform_state_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::miro_msgs::platform_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09c2ef52295e8a4f8b13c274212a1728";
  }

  static const char* value(const ::miro_msgs::platform_state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09c2ef52295e8a4fULL;
  static const uint64_t static_value2 = 0x8b13c274212a1728ULL;
};

template<class ContainerAllocator>
struct DataType< ::miro_msgs::platform_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "miro_msgs/platform_state";
  }

  static const char* value(const ::miro_msgs::platform_state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::miro_msgs::platform_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
# direction: upstream\n\
# source: robot platform\n\
# description: state data\n\
\n\
\n\
\n\
#### HEADER\n\
\n\
# standard header\n\
std_msgs/Header header\n\
\n\
# message flags\n\
uint32 msg_flags\n\
\n\
# additional header\n\
int32 time_usec			# time in usec with rollover at 1<<29\n\
\n\
\n\
\n\
#### P1\n\
\n\
# firmware release\n\
uint16 P1_release\n\
\n\
# mode\n\
uint8 P1_mode\n\
\n\
# error\n\
uint8 P1_error_code\n\
\n\
# signals\n\
uint32 P1_R_signals\n\
\n\
# success\n\
uint32 success_r\n\
uint32 success_w\n\
\n\
# rng\n\
uint32 seed\n\
\n\
\n\
\n\
#### P2\n\
\n\
# firmware release\n\
uint16 P2_release\n\
\n\
# firmware release\n\
uint16 P2_bootloader_release\n\
\n\
# serial number\n\
uint32 serial_number\n\
\n\
# mode\n\
uint8 P2_mode\n\
\n\
# signals\n\
uint32 P2C_R_signals\n\
uint32 P2L_R_signals\n\
uint32 P2U_R_signals\n\
\n\
# streaming buffer state\n\
uint8 num_free_stream_buf\n\
uint16 msg_id_of_last_stream_buf_recv\n\
\n\
# real time clock\n\
int8 rtc_hrs\n\
int8 rtc_min\n\
int8 rtc_sec\n\
int8 rtc_skew\n\
\n\
\n\
\n\
#### P3\n\
\n\
# firmware release\n\
uint16 P3_release\n\
\n\
\n\
\n\
#### bridge\n\
\n\
int16 number_of_loaded_sounds\n\
\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::miro_msgs::platform_state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::miro_msgs::platform_state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.msg_flags);
      stream.next(m.time_usec);
      stream.next(m.P1_release);
      stream.next(m.P1_mode);
      stream.next(m.P1_error_code);
      stream.next(m.P1_R_signals);
      stream.next(m.success_r);
      stream.next(m.success_w);
      stream.next(m.seed);
      stream.next(m.P2_release);
      stream.next(m.P2_bootloader_release);
      stream.next(m.serial_number);
      stream.next(m.P2_mode);
      stream.next(m.P2C_R_signals);
      stream.next(m.P2L_R_signals);
      stream.next(m.P2U_R_signals);
      stream.next(m.num_free_stream_buf);
      stream.next(m.msg_id_of_last_stream_buf_recv);
      stream.next(m.rtc_hrs);
      stream.next(m.rtc_min);
      stream.next(m.rtc_sec);
      stream.next(m.rtc_skew);
      stream.next(m.P3_release);
      stream.next(m.number_of_loaded_sounds);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct platform_state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::miro_msgs::platform_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::miro_msgs::platform_state_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "msg_flags: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.msg_flags);
    s << indent << "time_usec: ";
    Printer<int32_t>::stream(s, indent + "  ", v.time_usec);
    s << indent << "P1_release: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.P1_release);
    s << indent << "P1_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.P1_mode);
    s << indent << "P1_error_code: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.P1_error_code);
    s << indent << "P1_R_signals: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.P1_R_signals);
    s << indent << "success_r: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.success_r);
    s << indent << "success_w: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.success_w);
    s << indent << "seed: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.seed);
    s << indent << "P2_release: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.P2_release);
    s << indent << "P2_bootloader_release: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.P2_bootloader_release);
    s << indent << "serial_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.serial_number);
    s << indent << "P2_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.P2_mode);
    s << indent << "P2C_R_signals: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.P2C_R_signals);
    s << indent << "P2L_R_signals: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.P2L_R_signals);
    s << indent << "P2U_R_signals: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.P2U_R_signals);
    s << indent << "num_free_stream_buf: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_free_stream_buf);
    s << indent << "msg_id_of_last_stream_buf_recv: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.msg_id_of_last_stream_buf_recv);
    s << indent << "rtc_hrs: ";
    Printer<int8_t>::stream(s, indent + "  ", v.rtc_hrs);
    s << indent << "rtc_min: ";
    Printer<int8_t>::stream(s, indent + "  ", v.rtc_min);
    s << indent << "rtc_sec: ";
    Printer<int8_t>::stream(s, indent + "  ", v.rtc_sec);
    s << indent << "rtc_skew: ";
    Printer<int8_t>::stream(s, indent + "  ", v.rtc_skew);
    s << indent << "P3_release: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.P3_release);
    s << indent << "number_of_loaded_sounds: ";
    Printer<int16_t>::stream(s, indent + "  ", v.number_of_loaded_sounds);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRO_MSGS_MESSAGE_PLATFORM_STATE_H
