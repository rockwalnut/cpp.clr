#include "stdafx.h"
#include "Utility.h"
#include "PiServer_h.h"
#include "PiClient_h.h"
#include "Benchmark.h"
#include <chrono>
#include <thread>
#include <lmwksta.h>

using namespace std;

/*
* [20.04.2015]
* Update code  to Unicode version of Charater*
*
*
*/

int main()
{
	//parameters
	RPC_IF_HANDLE		hRpc[] = { PICliConnectInterface_v1_0_s_ifspec };
	CWinThread*			pCWinThread = NULL;

	RPC_STATUS			rpcStatus;

	RPC_BINDING_HANDLE	m_hBinding;
	unsigned short		m_usClientBinding[MAX_STRING_BINDING_LEN];
	short				m_sClientBindingLen;
	TCHAR*				m_szServerBinding;
	PCONTEXT_HDL_TYPE	m_phContext;
	//BOOL				m_bConnected;


	long                lAlarmId;

	//return
	unsigned long       ulResult;
	EPICallStatus       eCallStatus;

	//port and host
	CString csName = _T("10.196.108.169"); //"10.196.111.155";
	CString csPort = _T("4848");

	//initialization plugin server (client listener) 
	//update the binding string - first determine this computer's name for send to benchmark
	WKSTA_INFO_100  *workstationInfoPtr;
	if (NetWkstaGetInfo(NULL, 100, (LPBYTE *)&workstationInfoPtr) == 0)
	{
		m_sClientBindingLen = 128;

		//blinding string with potocol:ip:port:computer name listenner for brnchamark
		_sntprintf_s((wchar_t*)m_usClientBinding, m_sClientBindingLen, _TRUNCATE, _T("ncacn_ip_tcp:%s[%s]"), workstationInfoPtr->wki100_computername, reinterpret_cast<unsigned short*>(PLUGIN_PORT));
		m_sClientBindingLen = _tcslen((wchar_t*)m_usClientBinding) + 1;
	}


	//start the server listenner
	BOOL IsListenner = StartServer(ServerThread, (TCHAR*)(LPCTSTR)PLUGIN_PORT, sizeof(hRpc) / sizeof(hRpc[0]), hRpc, pCWinThread);
	
	if (IsListenner)
	{
		//ok
		std::cout << __TIME__ << " Start client listenner on server :";
		std::wcout << csName.GetString();
	}
	else
	{
		//fail
		exit(IsListenner);
	}


	//opens a port  to this application to accept RPC calls (PISerConnectInterface)
	rpcStatus = OpenClientInterface(csName, csPort, &m_hBinding, &m_szServerBinding, PISerConnectInterface_v1_0_c_ifspec);

	if (rpcStatus == RPC_S_OK)
	{
		//ok
		std::cout << std::endl << __TIME__ << " Register plugin application at port :";
		std::wcout << csPort.GetString();
		std::cout << std::endl << "--------------------------------------------------------" << std::endl;

		while (true)
		{

			//std::cout << __TIME__ << " Connect and wait for Benchmark to see if we're licensed" << std::endl;

			// Call the connect function and see if we're licensed, etc // RpcBMConnect_SEH establishes a connection with benchmark
			// The returned m_phContext must be used in all subsequent communications with Benchmark
		
			ulResult = RpcBMConnect_SEH(m_hBinding, m_sClientBindingLen, m_usClientBinding,
				reinterpret_cast<unsigned short*>(PLUGIN_GUID), _tcslen(PLUGIN_NAME) + 1, reinterpret_cast<unsigned short*>(PLUGIN_NAME), &m_phContext, &eCallStatus);

			getchar();
			//wait_for(5);
		
			if (ValidateResult(ulResult, eCallStatus))
			{
				// If the RpcBMConnect calls succeeds, communications have been established, Any of the Open App interface functions may now be called
				
				//Establish
				std::cout << __TIME__ << " Establish a connection with benchmark status : " << ValidateResult(ulResult, eCallStatus);

				std::cout << std::endl;// << "Please any key to Alarm to Benchmark ... " << std::endl;
				//std::this_thread::sleep_for(std::chrono::milliseconds(5000));

				//call any plugin function

				// If the RpcBMConnect calls succeeds, communications have been established.
				// Any of the Open App interface functions may now be called.

				// In this simple example we only post an alarm:
				wchar_t* pszAlarmMessage = _T("__2dMapping");
				short  sAlarmMessageLen = _tcslen(pszAlarmMessage) + 1;

				//ulResult = RpcBMPostAlarm_SEH(m_phContext, 0, ePIAlarmSeverityOperator, sAlarmMessageLen, reinterpret_cast<unsigned short*>(pszAlarmMessage), 0, &lAlarmId, &eCallStatus);
				ulResult = RpcBMLoadProcProgram_SEH(m_phContext, 0, sAlarmMessageLen, reinterpret_cast<unsigned short*>(pszAlarmMessage), &eCallStatus);


				if (ValidateResult(ulResult, eCallStatus))
				{
					// Disconnect from Benchmark
					// RpcBMDisconnect informs Benchmark that this OpenApp wants to 
					// cease interacting with it.  Benchmark performs some cleanup
					// which will allow future connections from this Open App
					RpcBMDisconnect_SEH(m_phContext, 0, &eCallStatus);

					//disconnnect
					if (ValidateResult(ulResult, eCallStatus))
					{
						std::cout << __TIME__ << " Alarm to Benchmark status : " << ValidateResult(ulResult, eCallStatus) << std::endl;
						getchar();
					}

					/*if (Validate(ulResult, eCallStatus))
					{

						std::cout << __TIME__ << " Terminate a connection with benchmark status :" << ulResult;
						std::cout << std::endl << "Please any key to Finish  ... " << std::endl;
						bCrt = false;
						getchar();

					}
					else
					{
						//std::cout << __TIME__ << " Terminate a connection with benchmark fail status :" << ulResult;
						//std::cout << std::endl << "Please any key to Finish  ... " << std::endl;

						//bCrt = true;
						//getchar();
					}*/

				}
				else
				{
					std::cout << __TIME__ << " Alarm to Benchmark status : " << ValidateResult(ulResult, eCallStatus) << std::endl; // " message* " << *pszAlarmMessage;
			
				}

			}
			else
			{
				std::cout << __TIME__ << " Fail to connection with benchmark status : " << ValidateResult(ulResult, eCallStatus) << std::endl;
				//std::cout << std::endl << "Please any key to try ... " << std::endl;

			}


		} //while
	}
	else
	{
		//fail
		exit(rpcStatus);
	}
}


