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


Abstract: This is a stub class definition of CPLCCommandList

*/

#include "libmcdriver_ads_plccommandlist.hpp"
#include "libmcdriver_ads_interfaceexception.hpp"

// Include custom headers here.


using namespace LibMCDriver_ADS::Impl;

/*************************************************************************************************************************
 Class definition of CPLCCommandList 
**************************************************************************************************************************/

void CPLCCommandList::AddCommand(IPLCCommand* pCommandInstance)
{
	throw ELibMCDriver_ADSInterfaceException(LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED);
}

void CPLCCommandList::FinishList()
{
	throw ELibMCDriver_ADSInterfaceException(LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED);
}

void CPLCCommandList::ExecuteList()
{
	throw ELibMCDriver_ADSInterfaceException(LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED);
}

bool CPLCCommandList::WaitForList(const LibMCDriver_ADS_uint32 nReactionTimeInMS, const LibMCDriver_ADS_uint32 nWaitForTimeInMS)
{
	throw ELibMCDriver_ADSInterfaceException(LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED);
}

void CPLCCommandList::PauseList()
{
	throw ELibMCDriver_ADSInterfaceException(LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED);
}

void CPLCCommandList::ResumeList()
{
	throw ELibMCDriver_ADSInterfaceException(LIBMCDRIVER_ADS_ERROR_NOTIMPLEMENTED);
}
