//------------------------------------------------------------------------------------------------------
//----==============================================================================================~~~~
//----=                                                                                            =----
//----=                      MMMM       MMM       MMM      MMMM     MMM                            =----
//----=                      M   M     M   M     M   M    M        M                               =----
//----=                      M   M     MMMMM     MMMMM    M   MM    MM                             =----
//----=                      M   M     M   M     M   M    M    M      M                            =----
//----=                      M MM      M   M     M   M     MMMM    MMM                             =----
//----=                                                                                            =----
//----==============================================================================================~~~~
//----=----------------------------------  version 0.0.1a  ----------------------------------------=----
//----==============================================================================================----
//	Author: Devon Adams (https://github.com/devonadams)
//	License : GPLv3
//	Language: C++17
//	Dependencies: A Sandbox Application
//	DAAGS - Devon Adams Asset Generation System
//	  DAAGS serves as an abstracted system for automated asset generation, such as Seeded/Random maps, and weather
//	This contains:
//	  LARG - Library Automated Random Generation
//	  LASG - Library Automated Seeded Generation
//	  LAWS - Library Automated Weather System
///////////////////////////////////////////////////
#pragma once

#include "LARG.h"
#include "LASG.h"
#include "LAWS.h"

namespace DAALS
{
	class cDAAGS
	{
	public:
		cDAAGS();
		~cDAAGS();

		void Init();
		void Shutdown();

		//	Setters
		void SetLARG(bool enable) { this->bLARG = enable; }
		void SetLASG(bool enable) { this->bLASG = enable; }
		void SetLAWS(bool enable) { this->bLAWS = enable; }

		//	Getters
		bool GetLARG() { return this->bLARG; }
		bool GetLASG() { return this->bLASG; }
		bool GetLAWS() { return this->bLAWS; }

	private:
		bool bLARG = false;	//	Random Generation
		bool bLASG = false;	//	Seeded Generation
		bool bLAWS = false;	//	Weather System
	};

}	//	END namespace DAALS
