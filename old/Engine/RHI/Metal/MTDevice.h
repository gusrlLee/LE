#pragma once 

#include "MTpch.h"

#include "Engine/IDevice.h"
#include "Engine/RHI/Metal/MTSwapChain.h"

class MTDevice : public IDevice {
    public:
        MTDevice();

        ~MTDevice() override;
        void Release() override;

        MTSwapChain* CreateSwapChain(GLFWindow* window);

    private:
        MTL::Device* m_device;
};