#pragma once

#ifdef UP_PLATFORM_WINDOWS
	#ifdef UP_BUILD_DLL
		#define UP_API __declspec(dllexport)
	#else
		#define UP_API __declspec(dllimport)
	#endif // UP_BUILD_DLL
#else
	#error UP ONLY SUPPORTS WINDOWS
#endif // UP_PLATFORM_WINDOWS