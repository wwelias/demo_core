#pragma once
#include "ManagedObject.h"
#include "../demo_core/demo.h"
using namespace System;

using namespace System::Runtime::InteropServices;

namespace democli {
	static const char* string_to_char_array(String^ string)
	{
		const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
		return str;
	}
	public ref class Class01 : public ManagedObject<demo::Class01>
	{
	public:
		Class01();
		double DoStuff(double num1, double num2);
	};
}
