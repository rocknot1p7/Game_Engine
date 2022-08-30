#pragma once

#ifdef RN_PLATFORM_WINDOWS
	#ifdef RN_BUILD_DLL
		#define ROCKNOT_API __declspec(dllexport)
	#else
		#define ROCKNOT_API __declspec(dllimport)
	#endif
#else
	#error Rocknot only supports windows!
#endif