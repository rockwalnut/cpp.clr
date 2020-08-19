#include "stdafx.h"
#include "Plugin.h"


/*
* [27.04.2015]
* native c++ dll wrapper of Pocket
* compile with /clr
*
*
* [28.04.2015]
* have a problem with interior_prt (crl pin pointer) and native c++ point (& --address operator)
*
* [29.04.2015]
* Change signature parameters to managed string
*
*/

Hello::Plugin::Plugin()
{
	myPocket = new Pocket();
}

BOOL Hello::Plugin::OpenClientApi(System::String^ csName, System::String^ csPort)
{

	//convert
	TCHAR* strName = toManagedString(csName);
	TCHAR* strPort = toManagedString(csPort);
	
	//std::cout << "Plugin.lsPort - " << myPocket->lsPort << std::endl;

	BOOL val = myPocket->OpenClientApi(strName, strPort);
	
	//free memory
	Marshal::FreeHGlobal(IntPtr(strName));
	Marshal::FreeHGlobal(IntPtr(strPort));

	return val;
}

BOOL Hello::Plugin::CloseClientApi()
{
	return myPocket->CloseClientApi();
}


BOOL Hello::Plugin::Alarm(System::String^  aMessage)
{
	//convert
	TCHAR* amsg = toManagedString(aMessage);

	//free memory
	Marshal::FreeHGlobal(IntPtr(amsg));
	BOOL val = myPocket->Alarm(amsg);

	return val;
}

EPICallStatus Hello::Plugin::GetCallStatus()
{
	return myPocket->eCallStatus;
}

//start client listenner
RPC_STATUS Hello::Plugin::GetRpcStatus()
{
	return myPocket->rpcStatus;
}

