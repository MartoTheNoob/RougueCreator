#pragma once

#ifdef RC_PLATFORM_WINDOWS
	#ifdef RC_BUILD_DLL
		#define RC_API __declspec(dllexport)
	#else
		#define RC_API __declspec(dllimport)
	#endif
#else
	#error Cringe ARCH LINUX KILL
#endif
