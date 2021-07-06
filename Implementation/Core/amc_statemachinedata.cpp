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

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/


#include "amc_statemachinedata.hpp"
#include "libmc_exceptiontypes.hpp"


namespace AMC {

	CStateMachineData::CStateMachineData()
	{

	}

	CStateMachineData::~CStateMachineData()
	{

	}


	void CStateMachineData::registerParameterHandler(const std::string& sInstanceName, PParameterHandler pParameterHandler)
	{
		LibMCAssertNotNull(pParameterHandler.get());
		std::lock_guard<std::mutex> lockGuard(m_Mutex);

		m_StateMachineParameters.insert(std::make_pair(sInstanceName, pParameterHandler));
		m_StateMachineDataStores.insert(std::make_pair(sInstanceName, std::make_shared<CParameterGroup> ("", "")));
		m_StateMachineStates.insert(std::make_pair(sInstanceName, ""));
	}

	PParameterHandler CStateMachineData::getParameterHandler(const std::string& sInstanceName)
	{
		std::lock_guard<std::mutex> lockGuard(m_Mutex);

		auto iter = m_StateMachineParameters.find(sInstanceName);
		if(iter == m_StateMachineParameters.end ())
			throw ELibMCCustomException(LIBMC_ERROR_STATEMACHINENOTFOUND, sInstanceName);

		return iter->second;
	}


	CParameterGroup* CStateMachineData::getDataStore(const std::string& sInstanceName)
	{
		std::lock_guard<std::mutex> lockGuard(m_Mutex);
		auto iIter = m_StateMachineDataStores.find(sInstanceName);
		if (iIter != m_StateMachineDataStores.end())
			return iIter->second.get();

		throw ELibMCCustomException(LIBMC_ERROR_STATEMACHINENOTFOUND, sInstanceName);
	}

	void CStateMachineData::setInstanceStateName(const std::string& sInstanceName, const std::string& sInstanceState)
	{
		std::lock_guard<std::mutex> lockGuard(m_Mutex);
		m_StateMachineStates.insert(std::make_pair (sInstanceName, sInstanceState));

	}

	std::string CStateMachineData::getInstanceStateName(const std::string& sInstanceName)
	{
		std::lock_guard<std::mutex> lockGuard(m_Mutex);
		auto iIter = m_StateMachineStates.find(sInstanceName);
		if (iIter != m_StateMachineStates.end())
			return iIter->second;

		return "";
	}

}

