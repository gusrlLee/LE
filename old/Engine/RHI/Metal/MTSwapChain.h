#pragma once 
#include "MTpch.h"

#include "Engine/Log.h"
#include "Engine/ISwapChain.h"

class MTSwapChain {
    public:
        MTSwapChain(MTL::Device* device, GLFWwindow* window);
        ~MTSwapChain() = default;

        void Release();
        
    private:
        GLFWwindow* m_editor_window;
        NS::Window* m_engine_window;
        CA::MetalLayer* m_layer;
        CA::MetalDrawable* m_drawable;
};