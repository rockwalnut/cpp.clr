#include "stdafx.h"

typedef int(__stdcall * Callback)(const char* text);
Callback Handler = 0;

extern "C" __declspec(dllexport)
void __stdcall SetCallback(Callback handler) {
	Handler = handler;
}

extern "C" __declspec(dllexport)
void __stdcall TestCallback() 
{
	int retval = Handler("hello");
}
