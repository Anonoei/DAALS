//------------------------------------------------------------------------------------------------------
//----==============================================================================================~~~~
//----=                                                                                            =----
//----=                      MMMM       MMM     MMMMM     MM   M      MMM                          =----
//----=                      M   M     M   M      M       M M  M     M                             =----
//----=                      M   M     MMMMM      M       M  M M      MM                           =----
//----=                      M   M     M   M      M       M   MM        M                          =----
//----=                      M MM      M   M    MMMMM     M    M     MMM                           =----
//----=                                                                                            =----
//----==============================================================================================~~~~
//----=----------------------------------  version 0.0.1a  ----------------------------------------=----
//----==============================================================================================----
//	Author: Anonoei (https://github.com/anonoei)
//	License : GPLv3
//	Language: C++17
//	Dependencies: A Sandbox Application
//	DAINS - DA Intelligent Networking System
//	  DAINS serves as an abstracted class for A.I. and machine learning
//	This contains:
//	  NIANN - Networked Intelligent Artificial Neural Engine
//	  NIMEA - Networked Intelligent Machine Education Algorithms
//	  NISST - Networked Intelligent Speech To Text
//	  NNICS - Networked Not-Intelligent Control System
///////////////////////////////////////////////////
#pragma once

#include "NIANN.h"
#include "NIMEA.h"
#include "NISST.h"
#include "NNICS.h"

namespace DAALS
{
	class cDAINS
	{
	public:
		cDAINS();
		~cDAINS();

		void Init();
		void Shutdown();

		//	Setters
		void SetNIANN(bool enable) { this->bNIANN = enable; }
		void SetNIMEA(bool enable) { this->bNIMEA = enable; }
		void SetNISST(bool enable) { this->bNISST = enable; }
		void SetNNICS(bool enable) { this->bNNICS = enable; }

		//	Getters
		bool GetNIANN() { return this->bNIANN; }
		bool GetNIMEA() { return this->bNIMEA; }
		bool GetNISST() { return this->bNISST; }
		bool GetNNICS() { return this->bNNICS; }

	private:
		bool bNIANN = false;	//	Neural Network/A.I.
		bool bNIMEA = false;	//	Machine Learning
		bool bNISST = false;	//	Voice Recognition
		bool bNNICS = false;	//	Dumb NPC A.I.
	};

}	//	END namespace DAALS
