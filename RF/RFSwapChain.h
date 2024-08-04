#pragma once 

#include "pch.h"

#include "RFWindow.h"
#include "RFDevice.h"

class RFSwapChain {
    public:
        static SPtr<RFSwapChain> Create();
        RFSwapChain() = default;
        ~RFSwapChain();
        
        void Init();
        
    private:
        NS::Window* m_backend_window;
        CA::MetalLayer* m_swapchain;
};
