/*++

Copyright (C) 2021 Autodesk Inc.

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

Abstract: This is an autogenerated plain C Header file with basic types in
order to allow an easy use of Autodesk Machine Control Framework SDK

Interface version: 1.0.0

*/

#ifndef __LIBAMCF_TYPES_HEADER
#define __LIBAMCF_TYPES_HEADER

#include <stdbool.h>

/*************************************************************************************************************************
 Scalar types definition
**************************************************************************************************************************/

#ifdef LIBAMCF_USELEGACYINTEGERTYPES

typedef unsigned char LibAMCF_uint8;
typedef unsigned short LibAMCF_uint16 ;
typedef unsigned int LibAMCF_uint32;
typedef unsigned long long LibAMCF_uint64;
typedef char LibAMCF_int8;
typedef short LibAMCF_int16;
typedef int LibAMCF_int32;
typedef long long LibAMCF_int64;

#else // LIBAMCF_USELEGACYINTEGERTYPES

#include <stdint.h>

typedef uint8_t LibAMCF_uint8;
typedef uint16_t LibAMCF_uint16;
typedef uint32_t LibAMCF_uint32;
typedef uint64_t LibAMCF_uint64;
typedef int8_t LibAMCF_int8;
typedef int16_t LibAMCF_int16;
typedef int32_t LibAMCF_int32;
typedef int64_t LibAMCF_int64 ;

#endif // LIBAMCF_USELEGACYINTEGERTYPES

typedef float LibAMCF_single;
typedef double LibAMCF_double;

/*************************************************************************************************************************
 General type definitions
**************************************************************************************************************************/

typedef LibAMCF_int32 LibAMCFResult;
typedef void * LibAMCFHandle;
typedef void * LibAMCF_pvoid;

/*************************************************************************************************************************
 Version for LibAMCF
**************************************************************************************************************************/

#define LIBAMCF_VERSION_MAJOR 1
#define LIBAMCF_VERSION_MINOR 0
#define LIBAMCF_VERSION_MICRO 0
#define LIBAMCF_VERSION_PRERELEASEINFO ""
#define LIBAMCF_VERSION_BUILDINFO ""

/*************************************************************************************************************************
 Error constants for LibAMCF
**************************************************************************************************************************/

#define LIBAMCF_SUCCESS 0
#define LIBAMCF_ERROR_NOTIMPLEMENTED 1
#define LIBAMCF_ERROR_INVALIDPARAM 2
#define LIBAMCF_ERROR_INVALIDCAST 3
#define LIBAMCF_ERROR_BUFFERTOOSMALL 4
#define LIBAMCF_ERROR_GENERICEXCEPTION 5
#define LIBAMCF_ERROR_COULDNOTLOADLIBRARY 6
#define LIBAMCF_ERROR_COULDNOTFINDLIBRARYEXPORT 7
#define LIBAMCF_ERROR_INCOMPATIBLEBINARYVERSION 8
#define LIBAMCF_ERROR_INVALIDTIMEOUT 9
#define LIBAMCF_ERROR_INVALIDRETRYCOUNT 10
#define LIBAMCF_ERROR_INVALIDBASEURL 11
#define LIBAMCF_ERROR_INVALIDKEYNAME 12
#define LIBAMCF_ERROR_RESTRESPONSEISNOOBJECT 13
#define LIBAMCF_ERROR_COULDNOTPARSERESTRESPONSE 14
#define LIBAMCF_ERROR_RESTRESPONSETIMEOUT 15
#define LIBAMCF_ERROR_INVALIDRESTRESPONSE 16
#define LIBAMCF_ERROR_COULDNOTCREATESESSION 17
#define LIBAMCF_ERROR_COULDNOTRECEIVETOKEN 18
#define LIBAMCF_ERROR_OPERATIONRESULTNOTREADY 19
#define LIBAMCF_ERROR_RESTERROR 20
#define LIBAMCF_ERROR_INVALIDUPLOADCHUNKSIZE 21
#define LIBAMCF_ERROR_CANNOTUPLOADEMPTYDATA 22
#define LIBAMCF_ERROR_COULDNOTBEGINSTREAMUPLOAD 23
#define LIBAMCF_ERROR_BEGINCHUNKINGALREADYCALLED 24
#define LIBAMCF_ERROR_BEGINCHUNKINGNOTCALLED 25
#define LIBAMCF_ERROR_UPLOADDATAEXCEEDSTOTALSIZE 26
#define LIBAMCF_ERROR_BEGINCHUNKINGFAILED 27
#define LIBAMCF_ERROR_DIDNOTUPLOADFULLDATA 28
#define LIBAMCF_ERROR_UPLOADISALREADYFINISHED 29
#define LIBAMCF_ERROR_INVALIDHASHBLOCKINDEX 30
#define LIBAMCF_ERROR_CHUNKSIZEMUSTBEAMULTIPLEOFHASHBLOCKSIZE 31
#define LIBAMCF_ERROR_CHUNKSTARTMUSTBEAMULTIPLEOFHASHBLOCKSIZE 32
#define LIBAMCF_ERROR_INVALIDHASHBLOCKSIZE 33
#define LIBAMCF_ERROR_CHECKSUMOFBLOCKMISSING 34
#define LIBAMCF_ERROR_OPERATIONERROR 35
#define LIBAMCF_ERROR_OPERATIONTIMEOUT 36
#define LIBAMCF_ERROR_UPLOADDIDNOTFINISH 37

/*************************************************************************************************************************
 Error strings for LibAMCF
**************************************************************************************************************************/

inline const char * LIBAMCF_GETERRORSTRING (LibAMCFResult nErrorCode) {
  switch (nErrorCode) {
    case LIBAMCF_SUCCESS: return "no error";
    case LIBAMCF_ERROR_NOTIMPLEMENTED: return "functionality not implemented";
    case LIBAMCF_ERROR_INVALIDPARAM: return "an invalid parameter was passed";
    case LIBAMCF_ERROR_INVALIDCAST: return "a type cast failed";
    case LIBAMCF_ERROR_BUFFERTOOSMALL: return "a provided buffer is too small";
    case LIBAMCF_ERROR_GENERICEXCEPTION: return "a generic exception occurred";
    case LIBAMCF_ERROR_COULDNOTLOADLIBRARY: return "the library could not be loaded";
    case LIBAMCF_ERROR_COULDNOTFINDLIBRARYEXPORT: return "a required exported symbol could not be found in the library";
    case LIBAMCF_ERROR_INCOMPATIBLEBINARYVERSION: return "the version of the binary interface does not match the bindings interface";
    case LIBAMCF_ERROR_INVALIDTIMEOUT: return "invalid timeout";
    case LIBAMCF_ERROR_INVALIDRETRYCOUNT: return "invalid retry count";
    case LIBAMCF_ERROR_INVALIDBASEURL: return "invalid base url";
    case LIBAMCF_ERROR_INVALIDKEYNAME: return "invalid key name";
    case LIBAMCF_ERROR_RESTRESPONSEISNOOBJECT: return "REST response is no object";
    case LIBAMCF_ERROR_COULDNOTPARSERESTRESPONSE: return "Could not parse REST response";
    case LIBAMCF_ERROR_RESTRESPONSETIMEOUT: return "REST response timeout";
    case LIBAMCF_ERROR_INVALIDRESTRESPONSE: return "Invalid REST response";
    case LIBAMCF_ERROR_COULDNOTCREATESESSION: return "Could not create session";
    case LIBAMCF_ERROR_COULDNOTRECEIVETOKEN: return "Could not retrieve token";
    case LIBAMCF_ERROR_OPERATIONRESULTNOTREADY: return "Operation result is not ready";
    case LIBAMCF_ERROR_RESTERROR: return "REST error:";
    case LIBAMCF_ERROR_INVALIDUPLOADCHUNKSIZE: return "Invalid upload chunk size";
    case LIBAMCF_ERROR_CANNOTUPLOADEMPTYDATA: return "Can not upload empty data";
    case LIBAMCF_ERROR_COULDNOTBEGINSTREAMUPLOAD: return "Could not begin stream upload";
    case LIBAMCF_ERROR_BEGINCHUNKINGALREADYCALLED: return "Begin chunking already called";
    case LIBAMCF_ERROR_BEGINCHUNKINGNOTCALLED: return "Begin chunking not called";
    case LIBAMCF_ERROR_UPLOADDATAEXCEEDSTOTALSIZE: return "Upload exceeds total size";
    case LIBAMCF_ERROR_BEGINCHUNKINGFAILED: return "Begin chunking failed";
    case LIBAMCF_ERROR_DIDNOTUPLOADFULLDATA: return "Did not upload full data";
    case LIBAMCF_ERROR_UPLOADISALREADYFINISHED: return "Upload is already finished.";
    case LIBAMCF_ERROR_INVALIDHASHBLOCKINDEX: return "Invalid hash block index.";
    case LIBAMCF_ERROR_CHUNKSIZEMUSTBEAMULTIPLEOFHASHBLOCKSIZE: return "Chunk size must be a multiple of hash block size.";
    case LIBAMCF_ERROR_CHUNKSTARTMUSTBEAMULTIPLEOFHASHBLOCKSIZE: return "Chunk start must be a multiple of hash block size.";
    case LIBAMCF_ERROR_INVALIDHASHBLOCKSIZE: return "Invalid hash block size.";
    case LIBAMCF_ERROR_CHECKSUMOFBLOCKMISSING: return "Checksum of block missing.";
    case LIBAMCF_ERROR_OPERATIONERROR: return "Operation Error.";
    case LIBAMCF_ERROR_OPERATIONTIMEOUT: return "Operation Timeout.";
    case LIBAMCF_ERROR_UPLOADDIDNOTFINISH: return "Upload did not finish.";
    default: return "unknown error";
  }
}

/*************************************************************************************************************************
 Declaration of handle classes 
**************************************************************************************************************************/

typedef LibAMCFHandle LibAMCF_Base;
typedef LibAMCFHandle LibAMCF_OperationResult;
typedef LibAMCFHandle LibAMCF_DataStream;
typedef LibAMCFHandle LibAMCF_StreamUpload;
typedef LibAMCFHandle LibAMCF_Connection;


#endif // __LIBAMCF_TYPES_HEADER