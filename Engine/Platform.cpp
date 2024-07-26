#include "Platform.h"


#ifdef __APPLE__
    #ifdef USE_VULKAN
        OS Platform::s_OS  = OS::MACOS;
        API Platform::s_API = API::VULKAN;
    #else // USE_METAL
        OS Platform::s_OS  = OS::MACOS;
        API Platform::s_API = API::METAL;
    #endif 
#else // WINDOW
    #ifdef USE_VULKAN
        OS Platform::s_OS  = OS::WINDOW;
        API Platform::s_API = API::VULKAN;
    #else // USE_D3D12 
        OS Platform::s_OS  = OS::WINDOW;
        API Platform::s_API = API::D3D12;
    #endif
#endif