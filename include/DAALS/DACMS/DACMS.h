//------------------------------------------------------------------------------------------------------
//----==============================================================================================~~~~
//----=                                                                                            =----
//----=                      MMMM       MMM       MMM     MM   MM      MMM                         =----
//----=                      M   M     M   M     M        M M M M     M                            =----
//----=                      M   M     MMMMM     M        M  M  M      MM                          =----
//----=                      M   M     M   M     M        M     M        M                         =----
//----=                      M MM      M   M      MMM     M     M     MMM                          =----
//----=                                                                                            =----
//----==============================================================================================~~~~
//----=----------------------------------  version 0.0.1a  ----------------------------------------=----
//----==============================================================================================----
//	Author: Devon Adams (https://github.com/devonadams)
//	License : GPLv3
//	Language: C++17
//	Dependencies: A Sandbox Application
//	DACMS - Devon Adams Color Management System
//	  DAAGS serves as an abstracted system for automated asset generation, such as Seeded/Random maps, and weather
//	This contains:
//	  CAPE - Color Automated Picking Engine
//	  CARP - Color Automated Random Pallet
///////////////////////////////////////////////////
#pragma once

#include "CAPE.h"
#include "CARP.h"

namespace DAALS
{
	class cDACMS
	{
	public:
		cDACMS();
		~cDACMS();

		void Init();
		void Shutdown();

		//	Setters
		void SetCAPE(bool enable) { this->bCAPE = enable; }
		void SetCARP(bool enable) { this->bCARP = enable; }

		//	Getters
		bool GetCAPE() { return this->bCAPE; }
		bool GetCARP() { return this->bCARP; }

	private:
		bool bCAPE = false;	//	Automated Color Picking Engine
		bool bCARP = false;	//	Random Color Picking Engine
	};

}	//	END namespace DAALS
