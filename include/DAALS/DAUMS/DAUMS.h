//------------------------------------------------------------------------------------------------------
//----==============================================================================================~~~~
//----=                                                                                            =----
//----=                      MMMM       MMM      M   M     MM   MM      MMM                        =----
//----=                      M   M     M   M     M   M     M M M M     M                           =----
//----=                      M   M     MMMMM     M   M     M  M  M      MM                         =----
//----=                      M   M     M   M     M   M     M     M        M                        =----
//----=                      M MM      M   M      MMM      M     M     MMM                         =----
//----=                                                                                            =----
//----==============================================================================================~~~~
//----=----------------------------------  version 0.0.1a  ----------------------------------------=----
//----==============================================================================================----
//	Author: Devon Adams (https://github.com/devonadams)
//	License : GPLv3
//	Language: C++17
//	Dependencies: A Sandbox Application
//	DAUMS - Devon Adams Universal Health Management System
//	  DAUMS serves as an abstracted class for health management
//	This contains:
//	  HARE - Health Automated Realism Engine
//	  HATE - Health Automated Typical Engine
///////////////////////////////////////////////////
#pragma once

#include "HARE.h"
#include "HATE.h"

namespace DAALS
{
	class cDAUMS
	{
	public:
		cDAUMS();
		~cDAUMS();

		void Init();
		void Shutdown();

		//	Setters
		void SetHARE(bool enable) { this->bHARE = enable; }
		void SetHATE(bool enable) { this->bHATE = enable; }

		//	Getters
		bool GetHARE() { return this->bHARE; }
		bool GetHATE() { return this->bHATE; }

	private:
		bool bHARE = false;	//	Life-like health engine
		bool bHATE = false;	//	Typical health engine
	};

}	//	END namespace DAALS
