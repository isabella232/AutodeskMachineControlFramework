/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Autodesk Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++-Header file with basic types in
order to allow an easy use of MC Driver ADS

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVER_ADS_TYPES_HEADER_CPP
#define __LIBMCDRIVER_ADS_TYPES_HEADER_CPP


/*************************************************************************************************************************
 Scalar types definition
**************************************************************************************************************************/

#ifdef LIBMCDRIVER_ADS_USELEGACYINTEGERTYPES

typedef unsigned char LibMCDriver_ADS_uint8;
typedef unsigned short LibMCDriver_ADS_uint16 ;
typedef unsigned int LibMCDriver_ADS_uint32;
typedef unsigned long long LibMCDriver_ADS_uint64;
typedef char LibMCDriver_ADS_int8;
typedef short LibMCDriver_ADS_int16;
typedef int LibMCDriver_ADS_int32;
typedef long long LibMCDriver_ADS_int64;

#else // LIBMCDRIVER_ADS_USELEGACYINTEGERTYPES

#include <stdint.h>

typedef uint8_t LibMCDriver_ADS_uint8;
typedef uint16_t LibMCDriver_ADS_uint16;
typedef uint32_t LibMCDriver_ADS_uint32;
typedef uint64_t LibMCDriver_ADS_uint64;
typedef int8_t LibMCDriver_ADS_int8;
typedef int16_t LibMCDriver_ADS_int16;
typedef int32_t LibMCDriver_ADS_int32;
typedef int64_t LibMCDriver_ADS_int64 ;

#endif // LIBMCDRIVER_ADS_USELEGACYINTEGERTYPES

typedef float LibMCDriver_ADS_single;
typedef double LibMCDriver_ADS_double;

/*************************************************************************************************************************
 General type definitions
**************************************************************************************************************************/

typedef LibMCDriver_ADS_int32 LibMCDriver_ADSResult;
typedef void * LibMCDriver_ADSHandle;
typedef void * LibMCDriver_ADS_pvoid;

/*************************************************************************************************************************
 Version for LibMCDriver_ADS
**************************************************************************************************************************/

#define LIBMCDRIVER_ADS_VERSION_MAJOR 1
#define LIBMCDRIVER_ADS_VERSION_MINOR 0
#define LIBMCDRIVER_ADS_VERSION_MICRO 0
#define LIBMCDRIVER_ADS_VERSION_PRERELEASEINFO ""
#define LIBMCDRIVER_ADS_VERSION_BUILDINFO ""

/*************************************************************************************************************************
 Error constants for LibMCDriver_ADS
**************************************************************************************************************************/

#define LIBMCDRIVER_ADS_SUCCESS 0
#define LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED 1
#define LIBMCDRIVER_ADS_ERROR_INVALIDPARAM 2
#define LIBMCDRIVER_ADS_ERROR_INVALIDCAST 3
#define LIBMCDRIVER_ADS_ERROR_BUFFERTOOSMALL 4
#define LIBMCDRIVER_ADS_ERROR_GENERICEXCEPTION 5
#define LIBMCDRIVER_ADS_ERROR_COULDNOTLOADLIBRARY 6
#define LIBMCDRIVER_ADS_ERROR_COULDNOTFINDLIBRARYEXPORT 7
#define LIBMCDRIVER_ADS_ERROR_INCOMPATIBLEBINARYVERSION 8
#define LIBMCDRIVER_ADS_ERROR_INVALIDSTATENAME 9
#define LIBMCDRIVER_ADS_ERROR_DRIVERERROR 1000
#define LIBMCDRIVER_ADS_ERROR_DRIVERNOTINITIALISED 1001
#define LIBMCDRIVER_ADS_ERROR_DRIVERNOTCONNECTED 1002
#define LIBMCDRIVER_ADS_ERROR_INVALIDDRIVERPROTOCOL 1003
#define LIBMCDRIVER_ADS_ERROR_COULDNOTPARSEDRIVERPROTOCOL 1004
#define LIBMCDRIVER_ADS_ERROR_NOTCONNECTED 1005
#define LIBMCDRIVER_ADS_ERROR_INTEGERVALUEOUTOFRANGE 1006
#define LIBMCDRIVER_ADS_ERROR_COULDNOTREADDATA 1007
#define LIBMCDRIVER_ADS_ERROR_COULDNOTREADHANDLEVALUE 1008
#define LIBMCDRIVER_ADS_ERROR_NAMELENGTHEXCEEDSMAXIMUM 1009

/*************************************************************************************************************************
 Error strings for LibMCDriver_ADS
**************************************************************************************************************************/

inline const char * LIBMCDRIVER_ADS_GETERRORSTRING (LibMCDriver_ADSResult nErrorCode) {
  switch (nErrorCode) {
    case LIBMCDRIVER_ADS_SUCCESS: return "no error";
    case LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED: return "functionality not implemented";
    case LIBMCDRIVER_ADS_ERROR_INVALIDPARAM: return "an invalid parameter was passed";
    case LIBMCDRIVER_ADS_ERROR_INVALIDCAST: return "a type cast failed";
    case LIBMCDRIVER_ADS_ERROR_BUFFERTOOSMALL: return "a provided buffer is too small";
    case LIBMCDRIVER_ADS_ERROR_GENERICEXCEPTION: return "a generic exception occurred";
    case LIBMCDRIVER_ADS_ERROR_COULDNOTLOADLIBRARY: return "the library could not be loaded";
    case LIBMCDRIVER_ADS_ERROR_COULDNOTFINDLIBRARYEXPORT: return "a required exported symbol could not be found in the library";
    case LIBMCDRIVER_ADS_ERROR_INCOMPATIBLEBINARYVERSION: return "the version of the binary interface does not match the bindings interface";
    case LIBMCDRIVER_ADS_ERROR_INVALIDSTATENAME: return "invalid state name";
    case LIBMCDRIVER_ADS_ERROR_DRIVERERROR: return "a driver error occured";
    case LIBMCDRIVER_ADS_ERROR_DRIVERNOTINITIALISED: return "the driver is not initialised";
    case LIBMCDRIVER_ADS_ERROR_DRIVERNOTCONNECTED: return "the driver is not connected";
    case LIBMCDRIVER_ADS_ERROR_INVALIDDRIVERPROTOCOL: return "invalid driver protocol definition";
    case LIBMCDRIVER_ADS_ERROR_COULDNOTPARSEDRIVERPROTOCOL: return "could not parse driver protocol";
    case LIBMCDRIVER_ADS_ERROR_NOTCONNECTED: return "Not connected";
    case LIBMCDRIVER_ADS_ERROR_INTEGERVALUEOUTOFRANGE: return "Integer value out of range";
    case LIBMCDRIVER_ADS_ERROR_COULDNOTREADDATA: return "Could not read data";
    case LIBMCDRIVER_ADS_ERROR_COULDNOTREADHANDLEVALUE: return "Could not read handle value";
    case LIBMCDRIVER_ADS_ERROR_NAMELENGTHEXCEEDSMAXIMUM: return "Name length exceeds maximum";
    default: return "unknown error";
  }
}

/*************************************************************************************************************************
 Declaration of handle classes 
**************************************************************************************************************************/

typedef LibMCDriver_ADSHandle LibMCDriver_ADS_Base;
typedef LibMCDriver_ADSHandle LibMCDriver_ADS_Driver;
typedef LibMCDriver_ADSHandle LibMCDriver_ADS_PLCCommand;
typedef LibMCDriver_ADSHandle LibMCDriver_ADS_PLCCommandList;
typedef LibMCDriver_ADSHandle LibMCDriver_ADS_Driver_ADS;

namespace LibMCDriver_ADS {

} // namespace LibMCDriver_ADS;

// define legacy C-names for enums, structs and function types

#endif // __LIBMCDRIVER_ADS_TYPES_HEADER_CPP