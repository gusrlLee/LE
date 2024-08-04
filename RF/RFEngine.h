#pragma once 

#include "pch.h"

#include "RFDevice.h"
#include "RFSwapChain.h"
#include "RFRenderTargetObject.h"

class RFEngine {
    public:
        static UPtr<RFEngine> Create();
        RFEngine() = default;
        ~RFEngine() = default;

        void Init();
        void Draw();
        void Shutdown();

    private:
        SPtr<RFDevice> m_device;
        SPtr<RFSwapChain> m_swapchain;
        SPtr<RFRenderTargetObject> m_render_target_object;
};
