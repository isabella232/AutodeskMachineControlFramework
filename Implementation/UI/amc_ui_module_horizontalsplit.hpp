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


#ifndef __AMC_UI_MODULE_HORIZONTALSPLIT
#define __AMC_UI_MODULE_HORIZONTALSPLIT

#include "header_protection.hpp"

#ifndef __AMCIMPL_UI_MODULE
#error this header is protected and should only be included in the corresponding implementation CPP files.
#endif

#include "Libraries/PugiXML/pugixml.hpp"

namespace LibMCData {
	amcDeclareDependingClass(CBuildJobHandler, PBuildJobHandler);
}


namespace AMC {

	amcDeclareDependingClass(CUIModule, PUIModule);
	amcDeclareDependingClass(CUIModule_HorizontalSplit, PUIModule_HorizontalSplit);
	amcDeclareDependingClass(CUIModule_HorizontalSection, PUIModule_HorizontalSection);
	amcDeclareDependingClass(CUIModuleItem, PUIModuleItem);
	amcDeclareDependingClass(CParameterInstances, PParameterInstances);
	amcDeclareDependingClass(CResourcePackage, PResourcePackage);

	class CUIModule_HorizontalSection {
	private:
		PUIModule m_pModule;
		double m_fixedWidthInPercentiles;
	public:
		CUIModule_HorizontalSection(PUIModule pModule, double fixedWidthInPercentiles);

		CUIModule * getModule();
		double getFixedWidthInPercentiles();
	};


	class CUIModule_HorizontalSplit : public CUIModule {
	protected:		

		std::map<std::string, PUIModuleItem> m_ItemMap;
		std::map<std::string, PUIModule_HorizontalSection> m_SectionMap;
		std::vector<PUIModule_HorizontalSection> m_SectionList;

		std::string m_sCaption;

		void addSection(PUIModule pModule, double fixedWidthInPercentiles);

	public:

		CUIModule_HorizontalSplit(pugi::xml_node & xmlNode, PParameterInstances pParameterInstances, PResourcePackage pResourcePackage, LibMCData::PBuildJobHandler pBuildJobHandler);
		
		virtual ~CUIModule_HorizontalSplit();

		virtual std::string getType() override;

		static std::string getStaticType();

		std::string getCaption () override;

		virtual void writeDefinitionToJSON(CJSONWriter& writer, CJSONWriterObject& moduleObject) override;

		virtual void populateItemMap(std::map<std::string, PUIModuleItem>& itemMap) override;

		virtual PUIModuleItem findItem(const std::string& sUUID) override;
		PUIModule_HorizontalSection findSection(const std::string& sUUID);

	};

	
}


#endif //__AMC_UI_MODULE_HORIZONTALSPLIT
