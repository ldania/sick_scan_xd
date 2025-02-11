#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetResultPoseEnabledSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETRESULTPOSEENABLEDSRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCSETRESULTPOSEENABLEDSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocSetResultPoseEnabledSrvRequest_
{
  typedef SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> Type;

  SickLocSetResultPoseEnabledSrvRequest_()
    : enabled(0)  {
    }
  SickLocSetResultPoseEnabledSrvRequest_(const ContainerAllocator& _alloc)
    : enabled(0)  {
  (void)_alloc;
    }



   typedef int32_t _enabled_type;
  _enabled_type enabled;





  typedef std::shared_ptr< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocSetResultPoseEnabledSrvRequest_

typedef ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<std::allocator<void> > SickLocSetResultPoseEnabledSrvRequest;

typedef std::shared_ptr< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest > SickLocSetResultPoseEnabledSrvRequestPtr;
typedef std::shared_ptr< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest const> SickLocSetResultPoseEnabledSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.enabled == rhs.enabled;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e0ec6411cf041bfb5f539456c58a321";
  }

  static const char* value(const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e0ec6411cf041bfULL;
  static const uint64_t static_value2 = 0xb5f539456c58a321ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocSetResultPoseEnabledSrvRequest";
  }

  static const char* value(const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocSetResultPoseEnabled for sick localization.\n"
"#\n"
"# ROS service SickLocSetResultPoseEnabled enables or disables result output telegrams\n"
"# by sending cola command (\"sMN LocSetResultPoseEnabled <enabled>\")\n"
"# with parameter\n"
"# <enabled>: 0: disabled, 1: enabled, default: enabled\n"
"#\n"
"# See Telegram-Listing-v1.1.0.241R.pdf for further details about \n"
"# Cola telegrams and this command.\n"
"\n"
"#\n"
"# Request (input)\n"
"#\n"
"\n"
"int32 enabled # 0: result output disabled, result output 1: enabled, default: enabled\n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocSetResultPoseEnabledSrvRequest_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::SickLocSetResultPoseEnabledSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "enabled: ";
    Printer<int32_t>::stream(s, indent + "  ", v.enabled);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETRESULTPOSEENABLEDSRVREQUEST_H
