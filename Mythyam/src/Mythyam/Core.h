#pragma once

#ifdef MT_PLATFORM_WINDOWS
    #ifdef MT_BUILD_DLL
        #define MYTHYAM_API __declspec(dllexport)
    #else
        #define MYTHYAM_API __declspec(dllimport)
    #endif
#else
    #error Mythyam only support Windows!
#endif
