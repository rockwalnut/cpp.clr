#include "stdafx.h"
#include "Utility.h"
#include "PiServer_h.h"
#include "PiClient_h.h"
#include "_Benchmark.h"
#include "Pocket.h"

//.net clr
using namespace System;
using namespace System::Threading;

using namespace std;

#include <exception>

/*
* [20.04.2015]
* Main for class test
*
*
*/

int main()
{
	//port and host
	CString csIp = _T("10.196.69.229");             //10.196.38.14"); //10.196.69.229"); // "10.196.69.238"); //10.196.69.231"); //"10.196.39.16";
	CString csPort = _T("4000");

	//CString csIp = _T("localhost"); // "10.196.69.238"); //10.196.69.231"); //"10.196.39.16";
	//CString csPort = _T("2848");

	CString lsPort = _T("19898");
	CString cMessage = _T("Hello");
	//CString cProgam = _T("__2dMapping");

	CString csName = _T("CLSPrintInfo"); //CelesticaMES");
	CString csGuid = _T("{ 4F54818E-623A - 4AD4 - B374 - F2F64602366E }");
	 
	//CString csGuid = _T("{A11D0083-4D01-4FC9-B0C9-76B935291788}");

	Hello::Pocket *myPocket = new Hello::Pocket();

	myPocket->StartListen((TCHAR*)(LPCTSTR)lsPort);
    //std::cout << myPocket->rpcStatus;

	//myPocket->OpenClientApi((TCHAR*)(LPCTSTR)csName, (TCHAR*)(LPCTSTR)csPort);

	//set
	myPocket->csGuid = (TCHAR*)(LPCTSTR)csGuid;
	myPocket->csName = (TCHAR*)(LPCTSTR)csName;

	BOOL val = myPocket->OpenClientApi((TCHAR*)(LPCTSTR)csIp, (TCHAR*)(LPCTSTR)csPort);
	std::wcout << "OpenClientInterface - " << (TCHAR*)(LPCTSTR)csIp << "[" << (TCHAR*)(LPCTSTR)csPort << "]" << std::endl;

	//set
	/*CString cStencil = _T("ST1");
	CString cPaste = _T("PA1");
	CString cFrontBlade = _T("FB1");
	CString cRearBlade = _T("RB1");
	CString cPump = _T("PP1");
	CString cWorkholder = _T("WH1");

	myPocket->SetSysBarcode((TCHAR*)(LPCTSTR)cStencil, (TCHAR*)(LPCTSTR)cPaste, (TCHAR*)(LPCTSTR)cFrontBlade, (TCHAR*)(LPCTSTR)cRearBlade,
	(TCHAR*)(LPCTSTR)cPump, (TCHAR*)(LPCTSTR)cWorkholder);*/

	//myPocket->LoadProcProgram((TCHAR*)(LPCTSTR)cProgam);
	//myPocket->Alarm((TCHAR*)(LPCTSTR)cMessage);

	//BOOL pause = myPocket->StopProduction(true);

	/*long bhCount = myPocket->GetBatchCount();

	if (bhCount > -1)
	{
		std::wcout << "Pocket.GetBatchCount - " << bhCount << std::endl;
	}
	else
	{
		std::wcout << "Pocket.GetBatchCount - " << "false" << std::endl;
		std::wcout << "Pocket.GetBatchCount.ulResult - " << myPocket->eCallStatus << std::endl;
	}*/

	/*std::wcout << "Pocket.GetLoadedProcProgram - " << myPocket->Ping() << std::endl;

	TCHAR* aProcName = myPocket->GetLoadedProcProgram();
	std::wcout << "Pocket.GetLoadedProcProgram - " << aProcName << std::endl;

	TCHAR* sProcPath = myPocket->GetProcProgram(aProcName);
	std::wcout << "Pocket.GetProcProgramAsXML - " << sProcPath << std::endl;

	TCH    AR* sMachine = myPocket->GetMachineInfo();
	std::wcout << "Pocket.GetMachineInfo - " << sMachine << std::endl;

	TCHAR* sOperator = myPocket->GetLogginOperator();
	std::wcout << "Pocket.GetLogginOperator - " << sOperator << std::endl;*/

	//CString csSerial = _T("3FT6RX");

	//long lBoardId = myPocket->GetNextBoardId();
	//std::wcout << "Pocket.GetNextBoardId - " << lBoardId << std::endl;
	//std::wcout << "Pocket.GetNextBoardId - " << myPocket->Exception.GetString() << std::endl;

	/*BOOL result = myPocket->SetBoardSeparation(0.75, 0.85);
	std::wcout << "Pocket.SetBoardSeparation - " << result << std::endl;*/
	
	//BOOL result = myPocket->SetSqueegee(true, -20, -100);
	//std::wcout << "Pocket.SetSqueegee - F2R " << result << std::endl;

	//result = myPocket->SetSqueegee(false, -20, -100);
	//std::wcout << "Pocket.SetSqueegee - F2R " << result << std::endl;

	//BOOL result = myPocket->SetSqueegee(false, 7, 15);
	//std::wcout << "Pocket.SetSqueegee - R2F " << result << " - " << myPocket->Exception << std::endl;

	//BOOL result = myPocket->SetBoardSerial((TCHAR*)(LPCTSTR)csSerial, lBoardId);
	//std::wcout << "Pocket.SetBoardSerial - " << csSerial << "-" << result << std::endl;

	//TCHAR* serial = myPocket->GetSqueegee(999);
	//std::wcout << "Pocket.GetSqueegee - " << serial << std::endl;

	//TCHAR* serial = myPocket->GetBoardSeparation(999);
	//std::wcout << "Pocket.GetBoardSeparation - " << serial << std::endl;

	//myPocket->CloseClientApi();

	//clr thread
	//Thread^ current = Thread::CurrentThread;
	//current->Sleep(120* 1000);

	/*time_t t1;
	t1 = time(0) + 50000;

	while (time(0) < t1)
	{
		Thread::Sleep(1*1000);
	}*/


	/*while (true)
	{
		myPocket->Ping();
		Thread::Sleep(10 * 1000);
	}*/

	//myPocket->Alarm((TCHAR*)(LPCTSTR)cMessage);
	//std::wcout << "Pocket.GetBatchCount - " << myPocket->GetBatchCount() << std::endl;


	//TCHAR* csSysBarcode = myPocket->GetSysBarcode();
	//std::wcout << "Pocket.GetSysBarcode - " << csSysBarcode << std::endl;


	//std::wcout << "Pocket.TriggerAutoPaste - " << myPocket->TriggerAutoPaste() << std::endl;

	/*
	*
	* Important !!!
	*
	*/

	//initial client to recieve incomming call from benchmark -- _plugin 
	//myPocket->Initial();

	CString usBarcode = _T("0");
	long lBoardId = 0;

	double dXCorrectionMm = 0.01;
	double dYCorrectionMm = 0.01;
	double dThetaCorrectionDeg = 0.01;
	double dXCenterRotationMm = 0.01;
	double dYCenterRotation = 0.01; 

	short lPackagedDataLength = 404;
	byte PackagedData[404] = { 0 };

	BOOL result = myPocket->SetXYTheta(lBoardId, (TCHAR*)(LPCTSTR)usBarcode, dXCorrectionMm,
		dYCorrectionMm, dThetaCorrectionDeg, dXCenterRotationMm, dYCenterRotation, lPackagedDataLength, PackagedData);

	std::wcout << "Pocket.SetXYTheta " << result << " - " << myPocket->Exception << std::endl;

	std::getchar();
}