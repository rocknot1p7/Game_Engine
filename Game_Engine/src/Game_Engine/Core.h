#pragma once
#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define Game_Engine_API __declspec(dllexport)
	#else
		#define Game_Engine_API __declspec(dllimport)
	#endif
#else
	#error Game_Engine only support Windows!
#endif
