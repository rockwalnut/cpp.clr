#include "stdafx.h"
#include "Pocket.h"


Hello::Pocket::Pocket()
{
	//initialization
	uiNumInterfaces = 5;

	/*hRpc = new RPC_IF_HANDLE[uiNumInterfaces];
	hRpc[0] = { PICliConnectInterface_v1_0_s_ifspec };
	hRpc[1] = { PICliBoardInterface_v1_0_s_ifspec };
	hRpc[2] = { PICliEnviromentInterface_v1_0_s_ifspec };
	hRpc[3] = { PICliAlarmInterface_v1_0_s_ifspec };
	hRpc[4] = { PICliStateInterface_v1_0_s_ifspec };*/

	// global list of RPC interfaces this program supports
	Hello::Pocket::hRpc = new RPC_IF_HANDLE[uiNumInterfaces]
	{
		PICliConnectInterface_v1_0_s_ifspec,
		PICliBoardInterface_v1_0_s_ifspec,
		PICliEnviromentInterface_v1_0_s_ifspec,
		PICliStateInterface_v1_0_s_ifspec,
		PICliAlignInterface_v1_0_s_ifspec,

	};

	//client
	Hello::Pocket::sRpc = new RPC_IF_HANDLE[1]
	{ 
		PISerConnectInterface_v1_0_c_ifspec 
	};

	pCWinThread = NULL;

	//ulResult = 0;

	//default name and guid, user can set and get after
	//csName = _T("CelesticaMES");
	//csGuid = _T("{A28D6F5D-ED3C-4327-96AF-CEB00EA333B6}");

	phContext;
	hBinding; //assume is null

	//sClientBindingLen = 128;
	//usClientBinding = NULL;
}

BOOL Hello::Pocket::StartListen(TCHAR* csPort)
{
	//set port
	Pocket::lsPort = csPort;

	//start the server listenner
	BOOL val = StartServer(ServerThread, lsPort, uiNumInterfaces /*sizeof(hRpc) / sizeof(hRpc[0])*/, hRpc, pCWinThread);
	//rpcStatus

	//0 is RPC_OK
	if (val)
	{
		//std::cout << "StartListen - " << "true" << std::endl;
		Exception = _T("%d - %s"), rpcStatus, GetSystemError(rpcStatus);
		//std::wcout << "Exception - " << GetSystemError(rpcStatus).GetString() << std::endl;

		return true;
	}
	else
	{
		Exception = _T("%d - %s"), rpcStatus, GetSystemError(rpcStatus);
		return false;
	}
}

BOOL Hello::Pocket::StopListen()
{
	//stop the server listenner
	BOOL val = StopServer(uiNumInterfaces /*sizeof(hRpc) / sizeof(hRpc[0])*/, hRpc);

	// 1 is false server not stop
	//0 is RPC_OK
	if (val)
	{
		return true;
	}
	else
	{
		Exception = _T("%d - %s"), rpcStatus, GetSystemError(rpcStatus);
		return false;
	}
}

BOOL Hello::Pocket::OpenClientApi(TCHAR*  csName, TCHAR* csPort)
{
	//set value
	Pocket::Host = csName;
	Pocket::Port = csPort;

	//update the binding string - first determine this computer's name for send to benchmark
	WKSTA_INFO_100  *workstationInfoPtr;
	if (NetWkstaGetInfo(NULL, 100, (LPBYTE *)&workstationInfoPtr) == 0)
	{
		sClientBindingLen = 128;

		//blinding string with potocol:ip:port:computer name listenner for brnchamark
		_sntprintf_s((wchar_t*)usClientBinding, sClientBindingLen, _TRUNCATE, _T("ncacn_ip_tcp:%s[%s]"), workstationInfoPtr->wki100_computername, (unsigned short*)(lsPort));
		sClientBindingLen = _tcslen((wchar_t*)usClientBinding) + 1;
	}
	else
	{
	}

	//debug
	/*std::cout << "lsPort - " << lsPort << std::endl;
	std::cout << "usClientBinding - " << usClientBinding << std::endl;
	std::cout << "hBinding - " << &hBinding << std::endl;*/
	std::wcout << "usClientBinding - " << (wchar_t*)usClientBinding << std::endl;

	//opens a port  to this application to accept RPC calls (PISerConnectInterface)
	rpcStatus = OpenClientInterface(Host, Port, &hBinding, &szServerBinding, sRpc[0]);

	//0 is RPC_OK
	if (!rpcStatus)
	{
		//std::wcout << "Pocket.OpenClientApi - " << "true" << std::endl;
		Exception = _T("%d - %s"), rpcStatus, GetSystemError(rpcStatus);
		//std::wcout << "Exception - " << GetSystemError(rpcStatus).GetString() << std::endl;
		return true;
	}
	else
	{
		Exception = _T("%d - %s"), rpcStatus, GetSystemError(rpcStatus);
		std::wcout << "Exception - " << GetSystemError(rpcStatus).GetString() << std::endl;
		return false;
	}
}

BOOL Hello::Pocket::CloseClientApi()
{
	//opens a port  to this application to accept RPC calls (PISerConnectInterface)
	RPC_STATUS rpcStatus = CloseClientInterface(szServerBinding, &hBinding);

	//0 is RPC_OK
	if (!rpcStatus)
	{
		return true;
	}
	else
	{
		Exception = _T("%d - %s"), rpcStatus, GetSystemError(rpcStatus);
		return false;
	}
}

BOOL Hello::Pocket::ValidateResult(unsigned long ulResult, EPICallStatus eCallStatus)
{
	BOOL bReturnVal = FALSE;
	//CString     csPrompt;

	if (RPC_S_OK == ulResult)
	{
		switch (eCallStatus)
		{
		case ePICallStatAOK:
			bReturnVal = TRUE;
			break;
		case ePICallStatNotAuthorized:
		case ePICallStatNotLicensed:
		case ePICallStatAlreadyConnected:
		case ePICallStatInternalError:
		case ePICallStatIncorrectState:
		case ePICallStatInvalidContext:
		case ePICallStatInvalidParameter:
		case ePICallStatIncorrectHardware:
		case ePICallStatProcessProgramNotFound:
		default:
			//Pocket::Exception = ErrorTypes[eCallStatus];
			break;
		}
	}
	else
	{
		Exception = ulResult + " - " + GetSystemError(ulResult);
	}

	return bReturnVal;
}

BOOL Hello::Pocket::Alarm(TCHAR* aMessage)
{
	long lAlarmId;

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//post alarm
		wchar_t* pszAlarmMessage = aMessage;
		short  sAlarmMessageLen = _tcslen(pszAlarmMessage) + 1;

		ulResult = RpcBMPostAlarm_SEH(phContext, 0, ePIAlarmSeverityOperator, sAlarmMessageLen, reinterpret_cast<unsigned short*>(pszAlarmMessage), 0, &lAlarmId, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

BOOL Hello::Pocket::LoadProcProgram(TCHAR* cName)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//set program
		wchar_t* pszProgramName = cName;
		short  sProgramNameLen = _tcslen(pszProgramName) + 1;

		ulResult = RpcBMLoadProcProgram_SEH(phContext, 0, sProgramNameLen, reinterpret_cast<unsigned short*>(pszProgramName), &eCallStatus);
		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

TCHAR* Hello::Pocket::GetProcProgram(TCHAR* cName)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//set program
		wchar_t* pszProgramName = cName;
		short  sProgramNameLen = _tcslen(pszProgramName) + 1;

		//out with size_is
		short  usXmlNameLen = 256;
		wchar_t* sXmlName = new wchar_t[256];

		//request
		ulResult = RpcBMGetProcProgram_SEH(phContext, 0, sProgramNameLen, reinterpret_cast<unsigned short*>(pszProgramName),
			&usXmlNameLen, reinterpret_cast<unsigned short*>(sXmlName), &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App

			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return sXmlName;
			}
			else
			{
				return _T("NULL");;
			}
		}
		else
		{
			return _T("NULL");;
		}
	}
	else
	{
		return _T("NULL");;
	}
}

long Hello::Pocket::GetMachineState()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		EPISysMachineState peSysMachineState;
		ulResult = RpcBMGetState_SEH(phContext, 0, &peSysMachineState, &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return peSysMachineState;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}

BOOL Hello::Pocket::Ping()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		ulResult = RpcBMPing_SEH(phContext, 0, &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

BOOL Hello::Pocket::SetSysBarcode(TCHAR* csStencilBarcode, TCHAR* csPasteBarcode, TCHAR* csFrontBladeBarcode, TCHAR* csRearBladeBarcode,
	TCHAR* csPumpBarcode, TCHAR* csWorkholderBarcode)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//stencil
		wchar_t* pszStencilBarcode = csStencilBarcode;
		short  sStencilBarcodeLen = _tcslen(pszStencilBarcode) + 1;

		//paste
		wchar_t* pszPasteBarcode = csPasteBarcode;
		short  sPasteBarcodeLen = _tcslen(pszPasteBarcode) + 1;

		//frontblade
		wchar_t* pszFrontBladeBarcode = csFrontBladeBarcode;
		short  sFrontBladeBarcodeLen = _tcslen(pszFrontBladeBarcode) + 1;

		//rearblade
		wchar_t* pszRearBladeBarcode = csRearBladeBarcode;
		short  sRearBladeBarcodeLen = _tcslen(pszRearBladeBarcode) + 1;

		//pump
		wchar_t* pszPumpBarcode = csPumpBarcode;
		short  sPumpBarcodeLen = _tcslen(pszPumpBarcode) + 1;

		//workholder
		wchar_t* pszWorkholderBarcode = csWorkholderBarcode;
		short  sWorkholderBarcodeLen = _tcslen(pszWorkholderBarcode) + 1;

		//set system barcode
		ulResult = RpcBMSetSystemBarcodes_SEH(phContext, 0, sStencilBarcodeLen, reinterpret_cast<unsigned short*>(pszStencilBarcode),
			sPasteBarcodeLen, reinterpret_cast<unsigned short*>(pszPasteBarcode), sFrontBladeBarcodeLen, reinterpret_cast<unsigned short*>(pszFrontBladeBarcode),
			sRearBladeBarcodeLen, reinterpret_cast<unsigned short*>(pszRearBladeBarcode), sPumpBarcodeLen, reinterpret_cast<unsigned short*>(pszPumpBarcode),
			sWorkholderBarcodeLen, reinterpret_cast<unsigned short*>(pszWorkholderBarcode), &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


BOOL Hello::Pocket::StopProduction(BOOL bProcAllBoard)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		ulResult = RpcBMStopProduction_SEH(phContext, 0, bProcAllBoard, &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

long Hello::Pocket::GetBatchCount()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);


	if (ValidateResult(ulResult, eCallStatus))
	{
		long plBatchCount;

		ulResult = RpcBMGetBatchCount_SEH(phContext, 0, &plBatchCount, &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return plBatchCount;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}

TCHAR* Hello::Pocket::GetBoardSerial(long lBoardId)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//out with size_is
		short  uBoardBarcodeLen = 256;
		wchar_t* sBoardBarcode = new wchar_t[256];

		ulResult = RpcBMGetBoardBarcode_SEH(phContext, 0, lBoardId, &uBoardBarcodeLen, reinterpret_cast<unsigned short*>(sBoardBarcode), &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);
			if (ValidateResult(ulResult, eCallStatus))
			{

				return sBoardBarcode;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}

BOOL Hello::Pocket::SetBoardSerial(TCHAR*  cSerial, long lBoardId)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		wchar_t* sBoardBarcode = cSerial;
		short  uBoardBarcodeLen = _tcslen(cSerial) + 1;;

		ulResult = RpcBMSetBoardBarcode_SEH(phContext, 0, lBoardId, uBoardBarcodeLen, reinterpret_cast<unsigned short*>(cSerial), &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

//new function for board panel
TCHAR* Hello::Pocket::GetBoardPanel(long lBoardId)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//num panel
		short usNumPanels;
		short sPanelIdList[100] = {};

		//initial two dimension array
		//wchar_t** sBarcodeList = new wchar_t*[256];
		//for (int i = 0; i < 256; ++i) sBarcodeList[i] = new wchar_t[100];

		//reinterpret_cast<unsigned short**>(sBarcodeList)

		/*int** ary = new int*[rowCount];
		for (int i = 0; i < rowCount; ++i)
			ary[i] = new int[colCount];*/

		unsigned short sBarcodeList[256][100] = { {} };

		ulResult = RpcBMGetPanelData_SEH(phContext, 0, lBoardId, &usNumPanels, sPanelIdList,
		sBarcodeList, &eCallStatus);

		//RpcBMGetBoardBarcode_SEH(phContext, 0, lBoardId, &uBoardBarcodeLen, reinterpret_cast<unsigned short*>(sBoardBarcode), &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App

			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);
			if (ValidateResult(ulResult, eCallStatus))
			{
				//convert to wchar_t* and concat string and return
				wchar_t* ws_result = _T("");
				int i;
				for (i = 0; i < usNumPanels; i++) {

					//const wchar_t* newword = reinterpret_cast<const wchar_t*>(oldword);
					wcsncat_s(ws_result, 256, reinterpret_cast<wchar_t*>(sBarcodeList[i]), 256);
					wcsncat_s(ws_result, 256, L";", 1);
				}

				return ws_result;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}


long Hello::Pocket::GetNextBoardId()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		long lBoardId;
		ulResult = RpcBMGetNextBoardId_SEH(phContext, 1, &lBoardId, &eCallStatus);

		//std::wcout << "Benchmark.RpcBMGetNextBoardId_SEH - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return lBoardId;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}


BOOL Hello::Pocket::Initial()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);


	if (ValidateResult(ulResult, eCallStatus))
	{
		return true;
	}
	else
	{
		return false;
	}
}


BOOL Hello::Pocket::Terminate()
{
	//disconnect license from benchmark
	long ulResult = RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//new for stand alone trace
/*
*
*
*
*/

TCHAR* Hello::Pocket::GetLoadedProcProgram()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//out with size_is
		short  sPPNameLen = 256;
		wchar_t* usPPName = new wchar_t[256];

		ulResult = RpcBMGetLoadedProcProgramName_SEH(phContext, 0, &sPPNameLen, reinterpret_cast<unsigned short*>(usPPName), &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App

			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);
			if (ValidateResult(ulResult, eCallStatus))
			{

				return usPPName;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}

TCHAR* Hello::Pocket::GetMachineInfo()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//out with size_is
		short  sMachineIdLen = 256;
		wchar_t* usMachineId = new wchar_t[256];

		EPIMachineType eMachineType;

		ulResult = RpcBMGetMachineInfo_SEH(phContext, 0, &sMachineIdLen, reinterpret_cast<unsigned short*>(usMachineId), &eMachineType);


		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App

			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);
			if (ValidateResult(ulResult, eCallStatus))
			{

				return usMachineId;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}


TCHAR* Hello::Pocket::GetLogginOperator()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//out with size_is
		short  psOperatorNameLen = 256;
		wchar_t* usOperatorName = new wchar_t[256];

		ulResult = RpcBMGetOperator_SEH(phContext, 0, &psOperatorNameLen, reinterpret_cast<unsigned short*>(usOperatorName), &eCallStatus);


		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App

			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);
			if (ValidateResult(ulResult, eCallStatus))
			{

				return usOperatorName;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}



TCHAR* Hello::Pocket::GetSysBarcode()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//out with size_is
		//stencil
		short  sStencilBarcodeLen = 256;
		wchar_t* pszStencilBarcode = new wchar_t[256];

		//paste
		short  sPasteBarcodeLen = 256;
		wchar_t* pszPasteBarcode = new wchar_t[256];

		//frontblade
		short sFrontBladeBarcodeLen = 256;
		wchar_t*  pszFrontBladeBarcode = new wchar_t[256];

		//rearblade
		short sRearBladeBarcodeLen = 256;
		wchar_t*  pszRearBladeBarcode  = new wchar_t[256];

		//pump
		short sPumpBarcodeLen = 256;
		wchar_t*  pszPumpBarcode = new wchar_t[256];

		//workholder
		short sWorkholderBarcodeLen = 256;
		wchar_t* pszWorkholderBarcode = new wchar_t[256];


		//set system barcode
		ulResult = RpcBMGetSystemBarcodes_SEH(phContext, 0, 
			&sStencilBarcodeLen, reinterpret_cast<unsigned short*>(pszStencilBarcode),
			&sPasteBarcodeLen, reinterpret_cast<unsigned short*>(pszPasteBarcode),		
			&sFrontBladeBarcodeLen, reinterpret_cast<unsigned short*>(pszFrontBladeBarcode),
			&sRearBladeBarcodeLen, reinterpret_cast<unsigned short*>(pszRearBladeBarcode), 
			&sPumpBarcodeLen, reinterpret_cast<unsigned short*>(pszPumpBarcode),
			&sWorkholderBarcodeLen, reinterpret_cast<unsigned short*>(pszWorkholderBarcode),
			&eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{

				//concate
				wchar_t* ws_result = pszStencilBarcode;

				//wcsncat_s(ws_result, 256, pszStencilBarcode, 256);
				wcsncat_s(ws_result, 256, L";", 1);

				wcsncat_s(ws_result, 256, pszPasteBarcode, 256);
				wcsncat_s(ws_result, 256, L";", 1);

				wcsncat_s(ws_result, 256, pszFrontBladeBarcode, 256);
				wcsncat_s(ws_result, 256, L";", 1);

				wcsncat_s(ws_result, 256, pszRearBladeBarcode, 256);
				wcsncat_s(ws_result, 256, L";", 1);

				wcsncat_s(ws_result, 256, pszPumpBarcode, 256);
				wcsncat_s(ws_result, 256, L";", 1);

				wcsncat_s(ws_result, 256, pszWorkholderBarcode, 256);
				wcsncat_s(ws_result, 256, L";", 1);

				return ws_result;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}


BOOL Hello::Pocket::TriggerAutoPaste()
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMTriggerAutoAddPaste_SEH(phContext, 0, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}



BOOL Hello::Pocket::TriggerManualPaste()
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMTriggerManualAddPaste_SEH(phContext, 0, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


BOOL Hello::Pocket::TriggerWipe()
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMTriggerWipe_SEH(phContext, 0, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


BOOL Hello::Pocket::TriggerManualInspection()
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMTriggerManualInspection_SEH(phContext, 0, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


BOOL Hello::Pocket::TriggerManualCleanStencil()
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMTriggerManualCleanStencil_SEH(phContext, 0, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


//new for board separation and squieegee
TCHAR* Hello::Pocket::GetBoardSeparation(long lBoardId)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		double pdDistBaseMm;
		double pdDistOffsetMm;

		double pdSpeedBaseMmSec;
		double pdSpeedOffsetMmSec;

		ulResult = RpcBMGetBoardSeparationValues_SEH(phContext, 0, &pdDistBaseMm, &pdDistOffsetMm, &pdSpeedBaseMmSec,
			&pdSpeedOffsetMmSec, &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				//convert double to string and concat
				wchar_t* ws_result = new wchar_t[256];
				wchar_t* ws_buffer = new wchar_t[256];

				swprintf(ws_result, 256, L"%f", pdDistBaseMm);
				//(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdDistOffsetMm);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdSpeedBaseMmSec);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdSpeedOffsetMmSec);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				return ws_result;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}

BOOL Hello::Pocket::SetBoardSeparation(double dDistOffsetMm, double dSpeedOffsetMmSec)
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMSetBoardSeparationOffsets_SEH(phContext, 0, dDistOffsetMm, dSpeedOffsetMmSec, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


TCHAR* Hello::Pocket::GetSqueegee(long lBoardId)
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		boolean bSeparateStrokesEnabled; 
		
		double pdForceBaseKg;
		double pdForceOffsetKg;
		double pdSpeedBaseMmSec;
		double pdSpeedOffsetMmSec;

		double pdR2FForceBaseKg;
		double pdR2FForceOffsetKg;
		double pdR2FSpeedBaseMmSec;
		double pdR2FSpeedOffsetMmSec;

		ulResult = RpcBMGetSqueegeeValues_SEH(phContext, 0, &bSeparateStrokesEnabled, &pdForceBaseKg, &pdForceOffsetKg,
			&pdSpeedBaseMmSec, &pdSpeedOffsetMmSec, &pdR2FForceBaseKg, &pdR2FForceOffsetKg, &pdR2FSpeedBaseMmSec,
			&pdR2FSpeedOffsetMmSec, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				//convert double to string and concat
				//wchar_t ws_result[] = L"Hello World";
				//wchar_t ws_result[256];

				//wchar_t* ws_buffer = L"Hello";
				wchar_t* ws_result = new wchar_t[256];
				wchar_t* ws_buffer = new wchar_t[256];

				//true
				if (bSeparateStrokesEnabled == 1)
				{
					swprintf(ws_result, 256, L"%d", 1);
				}
				else
				{
					swprintf(ws_result, 256, L"%d", 0);
				}			
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdForceBaseKg);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdForceOffsetKg);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdSpeedBaseMmSec);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdSpeedOffsetMmSec);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				//

				swprintf(ws_buffer, 256, L"%f", pdR2FForceBaseKg);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdR2FForceOffsetKg);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdR2FSpeedBaseMmSec);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);

				swprintf(ws_buffer, 256, L"%f", pdR2FSpeedOffsetMmSec);
				wcsncat_s(ws_result, 256, ws_buffer, 10);
				wcsncat_s(ws_result, 256, L";", 1);


				return ws_result;
			}
			else
			{
				return _T("NULL");
			}
		}
		else
		{
			return _T("NULL");
		}
	}
	else
	{
		return _T("NULL");
	}
}


BOOL Hello::Pocket::SetSqueegee(BOOL bRearToFront, double dForceOffsetKg, double dSpeedOffsetMmSec)
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{

		ulResult = RpcBMSetSqueegeeOffsets_SEH(phContext, 0, bRearToFront, dForceOffsetKg, dSpeedOffsetMmSec, &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

BOOL Hello::Pocket::PauseProduction()
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark
	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		ulResult = RpcBMPauseProduction_SEH(phContext, 0, &eCallStatus);

		//std::wcout << "Pocket.LoadProcProgram - " << csError.GetString();

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


BOOL Hello::Pocket::SendMessage(TCHAR* aMessage)
{

	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//post alarm
		wchar_t* pszMessage = aMessage;
		short  sMessageLen = _tcslen(pszMessage) + 1;

		ulResult = RpcBMPostMessage_SEH(phContext, 0, sMessageLen, reinterpret_cast<unsigned short*>(pszMessage), &eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


//align
BOOL Hello::Pocket::SetXYTheta(long lBoardId, TCHAR* csBarcode, double dXCorrectionMm, double dYCorrectionMm, double dThetaCorrectionDeg, double dXCenterRotationMm, 
	double dYCenterRotation, short uPackagedDataLen, byte usPackagedData[])
{
	// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
	// The returned m_phContext must be used in all subsequent communications with Benchmark

	unsigned long ulResult = RpcBMConnect_SEH(hBinding, sClientBindingLen, usClientBinding, (unsigned short*)csGuid, _tcslen(csName) + 1,
		(unsigned short*)csName, &phContext, &eCallStatus);

	if (ValidateResult(ulResult, eCallStatus))
	{
		//barcode
		wchar_t* sBoardBarcode = csBarcode;
		short  uBoardBarcodeLen = _tcslen(csBarcode) + 1;

		//short uPackagedDataLen = 256;
		//byte usPackagedData[256] = {};

		EPIProcessedStatus eProcessedStatus = ePIProcessedStatusAOK;

		ulResult = RpcBMSetBoardXYTData_SEH(phContext, 0, 
			/* board identifier*/ lBoardId, uBoardBarcodeLen, reinterpret_cast<unsigned short*>(sBoardBarcode),
			/* process status */ eProcessedStatus,
			/* parameters */dXCorrectionMm, dYCorrectionMm, dThetaCorrectionDeg, dXCenterRotationMm, dYCenterRotation,
			/* ??? */ uPackagedDataLen, usPackagedData,
			&eCallStatus);

		if (ValidateResult(ulResult, eCallStatus))
		{
			// Disconnect from Benchmark
			// RpcBMDisconnect informs Benchmark that this OpenApp wants to
			// cease interacting with it.  Benchmark performs some cleanup
			// which will allow future connections from this Open App
			RpcBMDisconnect_SEH(phContext, 0, &eCallStatus);

			if (ValidateResult(ulResult, eCallStatus))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

}
