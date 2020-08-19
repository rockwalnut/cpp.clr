#include "stdafx.h"
#include "Pocket.h"

/*using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;
*/

#pragma once

/*
* [27.04.2015]
* dll wrapper of Pocket
* compile with /clr
*
* [28.04.2015]
* have a problem with interior_prt (crl pin pointer) and native c++ point (& --address operator)
*
* [26.06.2015]
* add way to set guid and appname
*
*/


#pragma once
namespace Hello 
{
	public ref class Client
	{
		public:



			Client();
			BOOL StartListen(System::String^ name);//const char * csPort);
			BOOL StopListen();

			//initialize
			//call status
			long GetCallStatus();

			//initialize
			BOOL OpenClientApi(System::String^ csName, System::String^ csPort);
			BOOL CloseClientApi();

			//main function
			BOOL Alarm(System::String^  aMessage);
			BOOL LdProcProgram(System::String^  cName);
			System::String^ GetXmlProcProgram(System::String^  cName);

			System::String^ GetBoardSerial(long lBoardId);

			System::String^  GetLoadedProcProgram();
			System::String^  GetMachineInfo();
			System::String^  GetLoggedOperator();

			//new version
			System::String^ GetSqueegee(long lBoardId);
			BOOL SetSqueegee(BOOL bRearToFront, double dForceOffsetKg, double dSpeedOffsetMmSec);

			System::String^ GetBoardSeparation(long lBoardId);
			BOOL SetBoardSeparation(double dDistOffsetMm, double dSpeedOffsetMmSec);

			long GetMachState();
			BOOL Ping();
			BOOL SetSysBarcode(System::String^  bcStencil, System::String^  bcPaste, System::String^  bcFrontBlade, System::String^  bcRearBlade, System::String^  bcPump,
				System::String^  bWorkholder);

			System::String^ GetSysBarcode();

			long GetBatchCount();

			//status
			RPC_STATUS GetRpcStatus();

			System::String^  GetException();
			
			void SetGuId(System::String^ csGuid);
			void SetAppName(System::String^ csAppName);

			BOOL TriggerAutoPaste();
			BOOL TriggerManualPaste();
			BOOL TriggerWipe();
			BOOL TriggerManualInspection();
			BOOL TriggerManualCleanStencil();

			BOOL Initial();
			BOOL Terminate();

			//stop
			BOOL StopProduction(BOOL bProcessAllBoard);
			BOOL PauseProduction();

			BOOL SendMessage(System::String^  aMessage);

		private:
			Pocket *myPocket;

	};


}

