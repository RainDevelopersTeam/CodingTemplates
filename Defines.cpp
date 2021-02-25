#pragma once

#define _CRT_SECURE_NO_WARNINGS;
#define _CRT_SECURE_NO_DEPRECATE;
#define _CRT_NONSTDC_NO_DEPRECATE;

#include <cstddef>

#define StreamsFunctions
#define MathFunctions
#define StackFunctions
#define WindowsFunctions
#define ThreandsFunctions
#define TypesFunctions

#ifdef StreamsFunctions

	#include <iostream>
	#include <sstream>
	#include <fstream>
	#include <cstdio>

#endif

#ifdef MathFunctions

	#include <algorithm>
	#include <cmath>
	#include <bitset>

#endif

#ifdef StackFunctions

	#include <stack>
	#include <queue>
	#include <deque>

#endif

#ifdef WindowsFunctions

	#include <windows.h>
	#include <winuser.h>

	#include <windef.h>
	#include <winbase.h>
	#include <wingdi.h>
	#include <winuser.h>
	#include <winnls.h>
	#include <wincon.h>
	#include <winver.h>
	#include <winreg.h>
	#include <winnetwk.h>
	#include <virtdisk.h>

	#include <winapifamily.h>

#endif

#ifdef ThreandsFunctions

	#include <thread>
	#include <chrono>
	#include <errno.h>

	#include <ctime>

#endif

#ifdef TypesFunctions

	#include <cstdint>
	#include <vector>
	#include <string>

	#include <set>

#endif

#define MaxNumber3(num1, num2, num3) (std::max(std::max((num1), (num2)), (num3)))
#define MinNumber3(num1, num2, num3) (std::min(std::min((num1), (num2)), (num3)))

#define PrefixStringify(variable) std::string(#variable)
#define PrefixDisabled(variable) ((void)variable)

#define space " "

namespace HelpFunctions {

	unsigned long long GreatestCommomDivisor(unsigned long long num1, unsigned long long num2)
	{
		return num1 && num2 ? (num1 > num2 ? GreatestCommomDivisor(num1 % num2, num2) : GreatestCommomDivisor(num1, num2 % num1)) : (num1 ? num1 : num2);
	}

	bool IsNumberSimple(unsigned long long number)
	{
		for (unsigned long long counter = 2; counter < std::ceil(std::sqrt(number)); counter++) { if (number % counter == 0) { return true; } } return false;
	}

}
