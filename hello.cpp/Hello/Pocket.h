#include "PiDefine.h"
#include "PiServer_h.h"
#include "PiClient_h.h"

#include "PiClientEnviroment_h.h"
#include "PiClientBoard_h.h"
#include "PiClientAlarm_h.h"
#include "PiClientState_h.h"
#include "PiClientAlign_h.h"

#include "_Benchmark.h"
#include "Utility.h"

#include <wchar.h>


#pragma once

namespace Hello
{

	/*
	* [27.04.2015]
	* compile with /clr
	*
	* [28.04.2015]
	* have a problem with interior_prt (crl pin pointer) and native c++ point (& --address operator) 
	*
	* [14.05.2015]
	* update new function
	*
	* [06.08.2015]
	* stop production function
	*
	*/



	class Pocket
	{

		public:

			//name and guid;
			TCHAR*  csName;
			TCHAR*  csGuid;

			//
			CString  Exception;
			
			//unsign long status
			//const TCHAR* csError;
			RPC_STATUS rpcStatus;

			//move to plugin class
			EPICallStatus eCallStatus;
			
			Pocket();

			//Pocket(char* csName);

			//start server
			BOOL StartListen(TCHAR* csPort);
			//stop server
			BOOL StopListen();

			//open connection to benchamrk
			BOOL OpenClientApi(TCHAR*  csName, TCHAR*  csPort);
			//close connection to benchmark
			BOOL CloseClientApi();

			//pause and alrm to benchmark
			BOOL Alarm(TCHAR*  aMessage);

			//loads the specified process program
			BOOL LoadProcProgram(TCHAR*  aProgram);
			TCHAR* GetProcProgram(TCHAR*  aProgram);

			//new for stand alone trace
			TCHAR* GetLoadedProcProgram();
			TCHAR* GetMachineInfo();
			TCHAR* GetLogginOperator();

			BOOL Ping();
			BOOL SetSysBarcode(TCHAR* csStencilBarcode, TCHAR* csPasteBarcode, TCHAR* csFrontBladeBarcode, TCHAR* csRearBladeBarcode, TCHAR* csPumpBarcode, TCHAR* csWorkholderBarcode);
			
			//return a string concatination with ';' delimiter
			TCHAR* GetSysBarcode();

			BOOL StopProduction(BOOL bProcAllBoard);

			//return current state of the machine
			long GetMachineState();
			long GetBatchCount();

			TCHAR* GetBoardSerial(long lBoardId);
			BOOL SetBoardSerial(TCHAR*  cSerial, long lBoardId);

			//send or return a string concatination with ';' delimiter
			TCHAR* GetBoardPanel(long lBoardId);
			//BOOL SetBoardPanel(TCHAR* cSerialList, long lBoardId);


			long GetNextBoardId();

			//new for squeegee and separation 
			TCHAR* GetBoardSeparation(long lBoardId);
			BOOL SetBoardSeparation(double dDistOffsetMm, double dSpeedOffsetMmSec);
			TCHAR* GetSqueegee(long lBoardId);
			BOOL SetSqueegee(BOOL bRearToFront, double dForceOffsetKg, double dSpeedOffsetMmSec);

			//machine state operation
			BOOL TriggerAutoPaste();
			BOOL TriggerManualPaste();
			BOOL TriggerWipe();
			BOOL TriggerManualInspection();
			BOOL TriggerManualCleanStencil();
		
			// new function for listenner
			BOOL Initial();
			BOOL Terminate();

			//message
			BOOL PauseProduction();
			BOOL SendMessage(TCHAR*  aMessage);

			//align
			BOOL SetXYTheta(long lBoardId, TCHAR* csBarcode, double dXCorrectionMm, double dYCorrectionMm, double dThetaCorrectionDeg, double dXCenterRotationMm,
				double dYCenterRotation, short uPackagedDataLen, byte usPackagedData[]);

		private:
			//port and host ip
			TCHAR* Host;
			TCHAR* Port;

			//listenner port
			TCHAR* lsPort;

			//handle interface for client only
			RPC_IF_HANDLE		*hRpc;
			RPC_IF_HANDLE		*sRpc;

			//server thread response an rpc call
			CWinThread*			pCWinThread;

			//hanndle
			RPC_BINDING_HANDLE	hBinding;
			
			//client
			unsigned short		usClientBinding[128];
			short				sClientBindingLen;
			unsigned int		uiNumInterfaces;

			//server
			TCHAR*				szServerBinding;

			//return
			//unsigned long       ulResult;
			PCONTEXT_HDL_TYPE	phContext;

			BOOL ValidateResult(unsigned long ulResult, EPICallStatus eCallStatus);
			
	};
}

