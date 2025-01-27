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

Abstract: This is an autogenerated C++-Header file in order to allow an easy
 use of MC Driver ADS

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVER_ADS_HEADER_CPP
#define __LIBMCDRIVER_ADS_HEADER_CPP

#ifdef __LIBMCDRIVER_ADS_EXPORTS
#ifdef _WIN32
#define LIBMCDRIVER_ADS_DECLSPEC __declspec (dllexport)
#else // _WIN32
#define LIBMCDRIVER_ADS_DECLSPEC __attribute__((visibility("default")))
#endif // _WIN32
#else // __LIBMCDRIVER_ADS_EXPORTS
#define LIBMCDRIVER_ADS_DECLSPEC
#endif // __LIBMCDRIVER_ADS_EXPORTS

#include "libmcdriver_ads_types.hpp"

#include "libmcenv_dynamic.hpp"

#ifdef __cplusplus
extern "C" {
#endif

/*************************************************************************************************************************
 Class definition for Base
**************************************************************************************************************************/

/*************************************************************************************************************************
 Class definition for Driver
**************************************************************************************************************************/

/**
* Configures a driver with its specific configuration data.
*
* @param[in] pDriver - Driver instance.
* @param[in] pConfigurationString - Configuration data of driver.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_configure(LibMCDriver_ADS_Driver pDriver, const char * pConfigurationString);

/**
* returns the name identifier of the driver
*
* @param[in] pDriver - Driver instance.
* @param[in] nNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pNameBuffer -  buffer of Name of the driver., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_getname(LibMCDriver_ADS_Driver pDriver, const LibMCDriver_ADS_uint32 nNameBufferSize, LibMCDriver_ADS_uint32* pNameNeededChars, char * pNameBuffer);

/**
* returns the type identifier of the driver
*
* @param[in] pDriver - Driver instance.
* @param[in] nTypeBufferSize - size of the buffer (including trailing 0)
* @param[out] pTypeNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pTypeBuffer -  buffer of Type of the driver., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_gettype(LibMCDriver_ADS_Driver pDriver, const LibMCDriver_ADS_uint32 nTypeBufferSize, LibMCDriver_ADS_uint32* pTypeNeededChars, char * pTypeBuffer);

/**
* returns the version identifiers of the driver
*
* @param[in] pDriver - Driver instance.
* @param[out] pMajor - Major version.
* @param[out] pMinor - Minor version.
* @param[out] pMicro - Micro version.
* @param[in] nBuildBufferSize - size of the buffer (including trailing 0)
* @param[out] pBuildNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pBuildBuffer -  buffer of Build identifier., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_getversion(LibMCDriver_ADS_Driver pDriver, LibMCDriver_ADS_uint32 * pMajor, LibMCDriver_ADS_uint32 * pMinor, LibMCDriver_ADS_uint32 * pMicro, const LibMCDriver_ADS_uint32 nBuildBufferSize, LibMCDriver_ADS_uint32* pBuildNeededChars, char * pBuildBuffer);

/**
* returns the header information
*
* @param[in] pDriver - Driver instance.
* @param[in] nNameSpaceBufferSize - size of the buffer (including trailing 0)
* @param[out] pNameSpaceNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pNameSpaceBuffer -  buffer of NameSpace of the driver., may be NULL
* @param[in] nBaseNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pBaseNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pBaseNameBuffer -  buffer of BaseName of the driver., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_getheaderinformation(LibMCDriver_ADS_Driver pDriver, const LibMCDriver_ADS_uint32 nNameSpaceBufferSize, LibMCDriver_ADS_uint32* pNameSpaceNeededChars, char * pNameSpaceBuffer, const LibMCDriver_ADS_uint32 nBaseNameBufferSize, LibMCDriver_ADS_uint32* pBaseNameNeededChars, char * pBaseNameBuffer);

/**
* Stores the driver parameters in the driver environment.
*
* @param[in] pDriver - Driver instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_queryparameters(LibMCDriver_ADS_Driver pDriver);

/*************************************************************************************************************************
 Class definition for PLCCommand
**************************************************************************************************************************/

/**
* Sets an integer parameter of the command
*
* @param[in] pPLCCommand - PLCCommand instance.
* @param[in] pParameterName - Parameter Value
* @param[in] nValue - Parameter Value
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommand_setintegerparameter(LibMCDriver_ADS_PLCCommand pPLCCommand, const char * pParameterName, LibMCDriver_ADS_int64 nValue);

/**
* Sets a bool parameter of the command
*
* @param[in] pPLCCommand - PLCCommand instance.
* @param[in] pParameterName - Parameter Value
* @param[in] bValue - Parameter Value
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommand_setboolparameter(LibMCDriver_ADS_PLCCommand pPLCCommand, const char * pParameterName, bool bValue);

/**
* Sets a double parameter of the command
*
* @param[in] pPLCCommand - PLCCommand instance.
* @param[in] pParameterName - Parameter Value
* @param[in] dValue - Parameter Value
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommand_setdoubleparameter(LibMCDriver_ADS_PLCCommand pPLCCommand, const char * pParameterName, LibMCDriver_ADS_double dValue);

/*************************************************************************************************************************
 Class definition for PLCCommandList
**************************************************************************************************************************/

/**
* Adds a command to the list. List must not be executed before.
*
* @param[in] pPLCCommandList - PLCCommandList instance.
* @param[in] pCommandInstance - Add a command instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommandlist_addcommand(LibMCDriver_ADS_PLCCommandList pPLCCommandList, LibMCDriver_ADS_PLCCommand pCommandInstance);

/**
* Finish command list.
*
* @param[in] pPLCCommandList - PLCCommandList instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommandlist_finishlist(LibMCDriver_ADS_PLCCommandList pPLCCommandList);

/**
* Execute command list.
*
* @param[in] pPLCCommandList - PLCCommandList instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommandlist_executelist(LibMCDriver_ADS_PLCCommandList pPLCCommandList);

/**
* Wait for command list to finish executing
*
* @param[in] pPLCCommandList - PLCCommandList instance.
* @param[in] nReactionTimeInMS - How much time the PLC may need to react to the command in Milliseconds. Will fail if no reaction in that time.
* @param[in] nWaitForTimeInMS - How long to wait for the command to be finished in Milliseconds. Will return false if command has not finished.
* @param[out] pCommandSuccess - Returns true if the command was finished successfully.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommandlist_waitforlist(LibMCDriver_ADS_PLCCommandList pPLCCommandList, LibMCDriver_ADS_uint32 nReactionTimeInMS, LibMCDriver_ADS_uint32 nWaitForTimeInMS, bool * pCommandSuccess);

/**
* Pause command list. Must be executed or resumed before.
*
* @param[in] pPLCCommandList - PLCCommandList instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommandlist_pauselist(LibMCDriver_ADS_PLCCommandList pPLCCommandList);

/**
* Resume command list. Must be paused before.
*
* @param[in] pPLCCommandList - PLCCommandList instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_plccommandlist_resumelist(LibMCDriver_ADS_PLCCommandList pPLCCommandList);

/*************************************************************************************************************************
 Class definition for Driver_ADS
**************************************************************************************************************************/

/**
* Turns the driver into a simulation mode.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_settosimulationmode(LibMCDriver_ADS_Driver_ADS pDriver_ADS);

/**
* Returns if the driver is in simulation mode.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @param[out] pSimulationModeEnabled - Flag if driver is in simulation mode.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_issimulationmode(LibMCDriver_ADS_Driver_ADS pDriver_ADS, bool * pSimulationModeEnabled);

/**
* Connects to a ADS PLC Controller.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @param[in] pIPAddress - IP Address of PLC Service.
* @param[in] nPort - Port of PLC Service.
* @param[in] nTimeout - Timeout in milliseconds.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_connect(LibMCDriver_ADS_Driver_ADS pDriver_ADS, const char * pIPAddress, LibMCDriver_ADS_uint32 nPort, LibMCDriver_ADS_uint32 nTimeout);

/**
* Disconnects from the ADS PLC Controller.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_disconnect(LibMCDriver_ADS_Driver_ADS pDriver_ADS);

/**
* Create Command
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @param[out] pListInstance - Command list instance
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_createcommandlist(LibMCDriver_ADS_Driver_ADS pDriver_ADS, LibMCDriver_ADS_PLCCommandList * pListInstance);

/**
* Creates a command instance.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @param[in] pCommandName - Command Name.
* @param[out] pCommandInstance - Returns a command instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_createcommand(LibMCDriver_ADS_Driver_ADS pDriver_ADS, const char * pCommandName, LibMCDriver_ADS_PLCCommand * pCommandInstance);

/**
* Start Journaling.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_startjournaling(LibMCDriver_ADS_Driver_ADS pDriver_ADS);

/**
* Stop Journaling.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_stopjournaling(LibMCDriver_ADS_Driver_ADS pDriver_ADS);

/**
* Refresh Journal.
*
* @param[in] pDriver_ADS - Driver_ADS instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_driver_ads_refreshjournal(LibMCDriver_ADS_Driver_ADS pDriver_ADS);

/*************************************************************************************************************************
 Global functions
**************************************************************************************************************************/

/**
* retrieves the binary version of this library.
*
* @param[out] pMajor - returns the major version of this library
* @param[out] pMinor - returns the minor version of this library
* @param[out] pMicro - returns the micro version of this library
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_getversion(LibMCDriver_ADS_uint32 * pMajor, LibMCDriver_ADS_uint32 * pMinor, LibMCDriver_ADS_uint32 * pMicro);

/**
* Returns the last error recorded on this object
*
* @param[in] pInstance - Instance Handle
* @param[in] nErrorMessageBufferSize - size of the buffer (including trailing 0)
* @param[out] pErrorMessageNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pErrorMessageBuffer -  buffer of Message of the last error, may be NULL
* @param[out] pHasError - Is there a last error to query
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_getlasterror(LibMCDriver_ADS_Base pInstance, const LibMCDriver_ADS_uint32 nErrorMessageBufferSize, LibMCDriver_ADS_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_releaseinstance(LibMCDriver_ADS_Base pInstance);

/**
* Acquires shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_acquireinstance(LibMCDriver_ADS_Base pInstance);

/**
* Injects an imported component for usage within this component
*
* @param[in] pNameSpace - NameSpace of the injected component
* @param[in] pSymbolAddressMethod - Address of the SymbolAddressMethod of the injected component
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_injectcomponent(const char * pNameSpace, LibMCDriver_ADS_pvoid pSymbolAddressMethod);

/**
* Returns the address of the SymbolLookupMethod
*
* @param[out] pSymbolLookupMethod - Address of the SymbolAddressMethod
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_getsymbollookupmethod(LibMCDriver_ADS_pvoid * pSymbolLookupMethod);

/**
* Creates a driver instance with a specific name.
*
* @param[in] pName - Name of driver to be created.
* @param[in] pType - Type of driver to be created.
* @param[in] pDriverEnvironment - Environment of this driver.
* @param[out] pInstance - New Driver instance
* @return error code or 0 (success)
*/
LIBMCDRIVER_ADS_DECLSPEC LibMCDriver_ADSResult libmcdriver_ads_createdriver(const char * pName, const char * pType, LibMCEnv_DriverEnvironment pDriverEnvironment, LibMCDriver_ADS_Driver * pInstance);

#ifdef __cplusplus
}
#endif

#endif // __LIBMCDRIVER_ADS_HEADER_CPP

