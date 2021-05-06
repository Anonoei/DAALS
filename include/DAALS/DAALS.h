//------------------------------------------------------------------------------------------------------
//----==============================================================================================~~~~
//----=                                                                                            =----
//----=                      MMMM       MMM       MMM      M         MMM                           =----
//----=                      M   M     M   M     M   M     M        M                              =----
//----=                      M   M     MMMMM     MMMMM     M         MM                            =----
//----=                      M   M     M   M     M   M     M           M                           =----
//----=                      M MM      M   M     M   M     MMMMM    MMM                            =----
//----=                                                                                            =----
//----==============================================================================================~~~~
//----=----------------------------------  version 0.0.1a  ----------------------------------------=----
//----==============================================================================================----
//	Author: Devon Adams (https://github.com/devonadams)
//	License : GPLv3
//	Language: C++17
//	Dependencies: A Sandbox Application
//	DAALS - Devon Adams Asset Library Systemics
//	  DAALS are various abstracted DAGGer libraries that serve specific tasks
//	  They are intended to be systemic (IE work together and know of eachother) but don't have to
/*
            |   DAALS Name   |             Purpose             |       Sub-items
            |      DAAGS     |  Generation of maps / weather   |  LARG, LASG, LAWS
            |      DACMS     |  Color Management Systems       |  CAPE, CARP
            |      DAINS     |  A.I. / machine learning        |  NIANN, NIME, NISST, NNICS
            |      DAUMS     |  Health Management              |  HARE, HATE
            |      DAUSS     |  Musicand Sound                 |  MASAE, MASTA
*////////////////////////////////////////////////////
#pragma once

#include "DAAGS/DAAGS.h"
#include "DACMS/DACMS.h"
#include "DAINS/DAINS.h"
#include "DAUMS/DAUMS.h"
#include "DAUSS/DAUSS.h"

namespace DAALS
{
	class DAALS
	{
	public:
		DAALS();
		~DAALS();
		DAALS* Get() { return this->s_Instance; }
		cDAAGS* GetDAAGS() { return this->s_DAAGS; }
		cDACMS* GetDACMS() { return this->s_DACMS; }
		cDAINS* GetDAINS() { return this->s_DAINS; }
		cDAUMS* GetDAUMS() { return this->s_DAUMS; }
		cDAUSS* GetDAUSS() { return this->s_DAUSS; }

		void Init();
		void Shutdown();

		//	Setters
		void SetDAAGS(bool enable) { this->bDAAGS = enable; }
		void SetDACMS(bool enable) { this->bDACMS = enable; }
		void SetDAINS(bool enable) { this->bDAINS = enable; }
		void SetDAUMS(bool enable) { this->bDAUMS = enable; }
		void SetDAUSS(bool enable) { this->bDAUSS = enable; }

		//	Getters
		bool IsDAAGS() { return this->bDAAGS; }
		bool IsDACMS() { return this->bDACMS; }
		bool IsDAINS() { return this->bDAINS; }
		bool IsDAUMS() { return this->bDAUMS; }
		bool IsDAUSS() { return this->bDAUSS; }

	private:
		bool bDAAGS = false;	//	Asset Generation
		bool bDACMS = false;	//	Color Management
		bool bDAINS = false;	//	Machine Learning / A.I.
		bool bDAUMS = false;	//	Health Management
		bool bDAUSS = false;	//	Music and Sound
	private:
		DAALS* s_Instance;

		cDAAGS* s_DAAGS;
		cDACMS* s_DACMS;
		cDAINS* s_DAINS;
		cDAUMS* s_DAUMS;
		cDAUSS* s_DAUSS;

		void StartDAAGS();
		void StartDACMS();
		void StartDAINS();
		void StartDAUMS();
		void StartDAUSS();
	};
}	//	END namespace DAALS
