//------------------------------------------------------------------------------------------------------
//----==============================================================================================~~~~
//----=                                                                                            =----
//----=                      MMMM       MMM      M   M      MMM      MMM                           =----
//----=                      M   M     M   M     M   M     M        M                              =----
//----=                      M   M     MMMMM     M   M      MM       MM                            =----
//----=                      M   M     M   M     M   M        M        M                           =----
//----=                      M MM      M   M      MMM      MMM      MMM                            =----
//----=                                                                                            =----
//----==============================================================================================~~~~
//----=----------------------------------  version 0.0.1a  ----------------------------------------=----
//----==============================================================================================----
//	Author: Anonoei (https://github.com/anonoei)
//	License : GPLv3
//	Language: C++17
//	Dependencies: A Sandbox Application
//	DAUSS - DA Universal Sound System
//	  DAUSS serves as an abstracted class for music and sound generation
//	This contains:
//	  MASAE - Music And Sound Ambient Engine
//	  MASTA - Music And Sound Triggering Athenaeum
///////////////////////////////////////////////////
#pragma once

#include "MASAE.h"
#include "MASTA.h"

namespace DAALS
{
	class cDAUSS
	{
	public:
		cDAUSS();
		~cDAUSS();

		void Init();
		void Shutdown();

		//	Setters
		void SetMASAE(bool enable) { this->bMASAE = enable; }
		void SetMASTA(bool enable) { this->bMASTA = enable; }

		//	Getters
		bool GetMASAE() { return this->bMASAE; }
		bool GetMASTA() { return this->bMASTA; }

	private:
		bool bMASAE = false;	//	Ambient Sound engine
		bool bMASTA = false;	//	Triggered Sound engine
	};

}	//	END namespace DAALS
