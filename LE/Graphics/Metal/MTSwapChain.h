#pragma once 

#include <Foundation/Foundation.hpp>
#include <Metal/Metal.hpp>
#include <QuartzCore/CAMetalLayer.hpp>
#include <QuartzCore/QuartzCore.hpp>
#include <AppKit/AppKit.hpp>

#include "MTCore.h"

#include "Core/Window.h"

namespace LE {
    namespace MTCore {
        class MTSwapChain {
            public:
                MTSwapChain(Window* window);
                ~MTSwapChain();

            private:
                GLFWwindow* m_glfw_window;
                NS::Window* m_native_window;
                CA::MetalLayer* m_metal_layer;
                CA::MetalDrawable* m_drawable;

        };
    } // namespace MTCore
} // namespace LE 