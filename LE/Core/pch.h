#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdint.h>

#ifdef __APPLE__
    #ifdef USE_VULKAN
        #define GLFW_INCLUDE_VULKAN
    #else // USE_METAL
        #define GLFW_INCLUDE_NONE
        #define GLFW_EXPOSE_NATIVE_COCOA
    #endif 
#else // WINDOW
    #ifdef USE_VULKAN
        #define GLFW_INCLUDE_VULKAN
    #else // USE_D3D12 
        #define GLFW_INCLUDE_NONE
        #define GLFW_EXPOSE_NATIVE_WIN32
    #endif
#endif

#include "GLFW/glfw3.h"
#include "GLFW/glfw3native.h"

