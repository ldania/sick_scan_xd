#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickDevSetLidarConfigSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKDEVSETLIDARCONFIGSRV_H
#define SICK_SCAN_MESSAGE_SICKDEVSETLIDARCONFIGSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickDevSetLidarConfigSrvRequest.h>
#include <sick_scan/SickDevSetLidarConfigSrvResponse.h>


namespace sick_scan
{

struct SickDevSetLidarConfigSrv
{

typedef SickDevSetLidarConfigSrvRequest Request;
typedef SickDevSetLidarConfigSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickDevSetLidarConfigSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickDevSetLidarConfigSrv > {
  static const char* value()
  {
    return "0a78ee1375a17bb658971417f10b26eb";
  }

  static const char* value(const ::sick_scan::SickDevSetLidarConfigSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickDevSetLidarConfigSrv > {
  static const char* value()
  {
    return "sick_scan/SickDevSetLidarConfigSrv";
  }

  static const char* value(const ::sick_scan::SickDevSetLidarConfigSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickDevSetLidarConfigSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickDevSetLidarConfigSrv >
template<>
struct MD5Sum< ::sick_scan::SickDevSetLidarConfigSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickDevSetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevSetLidarConfigSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickDevSetLidarConfigSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickDevSetLidarConfigSrv >
template<>
struct DataType< ::sick_scan::SickDevSetLidarConfigSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickDevSetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevSetLidarConfigSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickDevSetLidarConfigSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickDevSetLidarConfigSrv >
template<>
struct MD5Sum< ::sick_scan::SickDevSetLidarConfigSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickDevSetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevSetLidarConfigSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickDevSetLidarConfigSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickDevSetLidarConfigSrv >
template<>
struct DataType< ::sick_scan::SickDevSetLidarConfigSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickDevSetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevSetLidarConfigSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKDEVSETLIDARCONFIGSRV_H
