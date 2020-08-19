// MarshalDelegate1.cpp
// compile with: /clr
#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

// Declare an unmanaged function type that takes two int arguments
// Note the use of __stdcall for compatibility with managed code
typedef int(__stdcall *ANSWERCB)(int, int);

int TakesCallback(ANSWERCB fp, int n, int m) {
	printf_s("[unmanaged] got callback address, calling it...\n");
	return fp(n, m);
}