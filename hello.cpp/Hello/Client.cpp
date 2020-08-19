#include "stdafx.h"
#include "Client.h"

/*#include "PiClient_h.h"
#include "PiClientEnviroment_h.h"
#include "PiClientBoard_h.h"
#include "PiClientAlarm_h.h"
#include "PiClientState_h.h"*/
 

/*
* [27.04.2015]
* native c++ dll wrapper of Pocket
* compile with /clr
*
*
* [28.04.2015]
* have a problem with interior_prt (crl pin pointer) and native c++ pointer (& --address operator)
*
* [29.04.2015]
* Changed signature parameters to managed string
*/

Hello::Client::Client()
{
	myPocket = new Pocket();
}

//start client listenner
BOOL Hello::Client::StartListen(System::String^ port)
{
	/*type def unicode*/
	/*#ifdef _UNICODE
		str = (TCHAR*)Marshal::StringToHGlobalUni(name).ToPointer();
		#else
		str = (TCHAR*)Marshal::StringToHGlobalAnsi(name).ToPointer();
		#endif*/

	//std::cout << "Client.lsPort - " << myPocket->lsPort << std::endl;

	TCHAR* str = ToManagedString(port);
	BOOL val = myPocket->StartListen(str);

	//freemem
	//Marshal::FreeHGlobal(IntPtr(str));

	return val;
}

//start client listenner
BOOL Hello::Client::StopListen()
{
	return myPocket->StopListen();
}

//start client listenner
RPC_STATUS Hello::Client::GetRpcStatus()
{
	return myPocket->rpcStatus;
}

//make a handcheck
BOOL Hello::Client::OpenClientApi(System::String^ csName, System::String^ csPort)
{
	//convert
	TCHAR* strName = ToManagedString(csName);
	TCHAR* strPort = ToManagedString(csPort);

	//std::cout << "Plugin.lsPort - " << myPocket->lsPort << std::endl;

	BOOL val = myPocket->OpenClientApi(strName, strPort);

	//free memory
	//Marshal::FreeHGlobal(IntPtr(strName));
	//Marshal::FreeHGlobal(IntPtr(strPort));

	return val;
}

BOOL Hello::Client::CloseClientApi()
{
	return myPocket->CloseClientApi();
}

long Hello::Client::GetCallStatus()
{
	return myPocket->eCallStatus;
}

//plugin method
BOOL Hello::Client::Alarm(System::String^  aMessage)
{
	//convert
	TCHAR* amsg = ToManagedString(aMessage);

	//free memory
	//Marshal::FreeHGlobal(IntPtr(amsg));
	BOOL val = myPocket->Alarm(amsg);

	return val;
}

System::String^  Hello::Client::GetException()
{
	CString cError = myPocket->Exception;
	return  gcnew String(cError);
}


//plugin method
BOOL Hello::Client::LdProcProgram(System::String^  cName)
{
	//convert
	TCHAR* amsg = ToManagedString(cName);

	//free memory
	//Marshal::FreeHGlobal(IntPtr(amsg));
	BOOL val = myPocket->LoadProcProgram(amsg);

	return val;
}

//return NULL if fail
System::String^ Hello::Client::GetXmlProcProgram(System::String^  cName)
{
	//convert
	TCHAR* amsg = ToManagedString(cName);

	try
	{
		TCHAR* result = myPocket->GetProcProgram(amsg);
		return  gcnew String(result);
	}
	catch (const std::string&)// ex)
	{
		//throw ex;
		return  gcnew String("NULL");
	}
}

//plugin method
long Hello::Client::GetMachState()
{
	return  myPocket->GetMachineState();
}


long Hello::Client::GetBatchCount()
{
	return  myPocket->GetBatchCount();
}


//plugin method
BOOL Hello::Client::Ping()
{
	return  myPocket->Ping();
}

//plugin method
BOOL Hello::Client::SetSysBarcode(System::String^  bcStencil, System::String^  bcPaste, System::String^  bcFrontBlade, System::String^  bcRearBlade, System::String^  bcPump,
	System::String^  bWorkholder)
{
	TCHAR* aStencil = ToManagedString(bcStencil);
	TCHAR* aPaste = ToManagedString(bcPaste);
	TCHAR* aFrontBlade = ToManagedString(bcFrontBlade);
	TCHAR* aRearBlade = ToManagedString(bcRearBlade);
	TCHAR* aPump = ToManagedString(bcPump);
	TCHAR* aWorkholder = ToManagedString(bWorkholder);

	BOOL val = myPocket->SetSysBarcode(aStencil, aPaste, aFrontBlade, aRearBlade, aPump, aWorkholder);

	//free memory
	/*Marshal::FreeHGlobal(IntPtr(aStencil));
	Marshal::FreeHGlobal(IntPtr(aPaste));
	Marshal::FreeHGlobal(IntPtr(aFrontBlade));
	Marshal::FreeHGlobal(IntPtr(aRearBlade));
	Marshal::FreeHGlobal(IntPtr(aPump));
	Marshal::FreeHGlobal(IntPtr(aWorkholder));*/

	return val;
}

void Hello::Client::SetGuId(System::String^ csGuid)
{
	TCHAR* guid = ToManagedString(csGuid);
	myPocket->csGuid = guid;
}

void Hello::Client::SetAppName(System::String^ csAppName)
{
	TCHAR* name = ToManagedString(csAppName);
	myPocket->csName = name;
}

BOOL Hello::Client::Initial()
{
	return myPocket->Initial();
}

BOOL Hello::Client::Terminate()
{
	return myPocket->Terminate();
}

//new for stanalone trace
//no try catch !
System::String^  Hello::Client::GetLoadedProcProgram()
{
	CString cProcName = myPocket->GetLoadedProcProgram();
	return  gcnew String(cProcName);
}

System::String^  Hello::Client::GetMachineInfo()
{
	CString cMachineId = myPocket->GetMachineInfo();
	return  gcnew String(cMachineId);
}

System::String^  Hello::Client::GetLoggedOperator()
{
	CString cOperator = myPocket->GetLogginOperator();
	return  gcnew String(cOperator);

}


//return NULL if fail
System::String^ Hello::Client::GetBoardSerial(long sBoardId)
{
	try
	{
		TCHAR* result = myPocket->GetBoardSerial(sBoardId);
		return  gcnew String(result);
	}
	catch (const std::string&)// ex)
	{
		//throw ex;
		return  gcnew String("NULL");
	}
}

System::String^ Hello::Client::GetSysBarcode()
{
	try
	{
		TCHAR* result = myPocket->GetSysBarcode();
		return  gcnew String(result);
	}
	catch (const std::string&)// ex)
	{
		//throw ex;
		return  gcnew String("NULL");
	}
}

// new function

//plugin method
BOOL Hello::Client::TriggerAutoPaste()
{
	return  myPocket->TriggerAutoPaste();
}

BOOL Hello::Client::TriggerManualPaste()
{
	return  myPocket->TriggerManualPaste();
}

BOOL Hello::Client::TriggerManualCleanStencil()
{
	return  myPocket->TriggerManualCleanStencil();
}

BOOL Hello::Client::TriggerManualInspection()
{
	return  myPocket->TriggerManualInspection();
}

BOOL Hello::Client::TriggerWipe()
{
	return  myPocket->TriggerWipe();
}

//new for squeegee
System::String^ Hello::Client::GetSqueegee(long lBoardId)
{
	try
	{
		TCHAR* result = myPocket->GetSqueegee(lBoardId);
		return  gcnew String(result);
	}
	catch (const std::string&)// ex)
	{
		//throw ex;
		return  gcnew String("NULL");
	}
}

BOOL Hello::Client::SetSqueegee(BOOL bRearToFront, double dForceOffsetKg, double dSpeedOffsetMmSec)
{
	return  myPocket->SetSqueegee(bRearToFront, dForceOffsetKg, dSpeedOffsetMmSec);
}

System::String^ Hello::Client::GetBoardSeparation(long lBoardId)
{
	try
	{
		TCHAR* result = myPocket->GetBoardSeparation(lBoardId);
		return  gcnew String(result);
	}
	catch (const std::string&)// ex)
	{
		//throw ex;
		return  gcnew String("NULL");
	}
}

BOOL Hello::Client::SetBoardSeparation(double dDistOffsetMm, double dSpeedOffsetMmSec)
{
	return  myPocket->SetBoardSeparation(dDistOffsetMm, dSpeedOffsetMmSec);
}

BOOL Hello::Client::StopProduction(BOOL bProcessAllBoard)
{
	return  myPocket->StopProduction(bProcessAllBoard);
}

BOOL Hello::Client::PauseProduction()
{
	return  myPocket->PauseProduction();
}

BOOL Hello::Client::SendMessage(System::String^  aMessage)
{
	//convert
	TCHAR* amsg = ToManagedString(aMessage);

	//free memory
	//Marshal::FreeHGlobal(IntPtr(amsg));
	BOOL val = myPocket->SendMessage(amsg);

	return val;
}




