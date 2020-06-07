#pragma once

#ifdef HS_PLATFORM_WINDOWS
	#ifdef HS_BUILD_DLL
		#define HUFS_API __declspec(dllexport)
	#else
		#define HUFS_API __declspec(dllimport)
	#endif
#else
	#error Hufs only support Windows!
#endif