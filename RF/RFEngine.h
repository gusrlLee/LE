#pragma once 

#include "pch.h"

#include "RFDevice.h"
#include "RFSwapChain.h"

class RFEngine {
    public:
        static UPtr<RFEngine> Create();
        RFEngine() = default;
        ~RFEngine() = default;

        void Init();
        void Run();
        void Shutdown();

    private:
        SPtr<RFDevice> m_device;
        SPtr<RFSwapChain> m_swapchain;
};
