// pi.h:
#include "stdafx.h"
#pragma once

#ifndef DLL_MACRO
#ifdef BUILDING_DLL
#define DLL_MACRO __declspec(dllexport)
#else
#define DLL_MACRO __declspec(dllimport)
#endif
#endif

namespace Cpp {
	typedef void(__stdcall *ComputeProgressCallback)(int);

	class PI {
	public:
		static double DLL_MACRO compute(ComputeProgressCallback callback);
	};
}
