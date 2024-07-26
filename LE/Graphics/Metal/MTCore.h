#pragma once 

#ifdef __APPLE__ 
    #ifdef USE_METAL
        #include <Metal/Metal.hpp>
        #include <QuartzCore/CAMetalLayer.hpp>
        #include <QuartzCore/CAMetalLayer.h>
        #include <QuartzCore/QuartzCore.hpp>
    #endif
#endif

#include "GLFW/glfw3.h"
#include "GLFW/glfw3native.h"

#include <iostream>

#include "MTSwapChain.h"

#include "Core/Window.h"

namespace LE {
    namespace MTCore {

        extern MTL::Device* g_device;
        extern class MTSwapChain* g_swapchain;

        void Initialization();
        void Initialization(Window* window);
        void Shutdown();
    }
}