#include "stdafx.h"
#include "Pocket.h"


#pragma once

/*
* [27.04.2015]
* dll wrapper of Pocket
* compile with /clr
*
* [28.04.2015]
* 
*
*/

#pragma once
namespace Hello
{

	public ref class Plugin
	{
		public:
			Plugin();
			
			//call status
			EPICallStatus GetCallStatus();
			RPC_STATUS GetRpcStatus();
			
			//initialize
			BOOL OpenClientApi(System::String^ csName, System::String^ csPort);
			BOOL CloseClientApi();
			
			//main function
			BOOL Alarm(System::String^  aMessage);


		private:
			//--
			Pocket *myPocket;
	};


}