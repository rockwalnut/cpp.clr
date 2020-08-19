// piCLI.h: The C++/CLI "bridge" between C# and C++
#pragma once
#include "stdafx.h"
#include "Pi.h"

namespace CLI {
	public ref class PI abstract {
		delegate void ComputeProgressDelegate(int percentCompleted);

	public:
		double compute() {
			using System::IntPtr;
			using System::Runtime::InteropServices::Marshal;

			ComputeProgressDelegate^ callback = gcnew ComputeProgressDelegate(
				this,
				&PI::progress
				);
			IntPtr cbPtr = Marshal::GetFunctionPointerForDelegate(callback);
			return Cpp::PI::compute(
				static_cast<Cpp::ComputeProgressCallback>(cbPtr.ToPointer())
				);
		}

	protected:
		virtual void progress(int percentCompleted) abstract;
	};
}