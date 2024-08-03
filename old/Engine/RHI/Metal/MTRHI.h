#pragma once 

#include "Engine/RHI.h"
#include "MTpch.h"

#include "MTSwapChain.h"

class MTRHI : public RHI {
    public: 
        MTRHI();
        ~MTRHI() override;

        void Init() override;
        void Release() override;
        void Connect(GLFWwindow* window) override;

    private:
        MTL::Device* m_device;
        MTSwapChain* m_swapchain;
};
