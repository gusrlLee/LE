#pragma once 

#include "pch.h"
#include "RFLog.h"

class RFDevice {
    public:
        static SPtr<RFDevice> Create();

        RFDevice();
        ~RFDevice();

        MTL::Device* GetDevice() { return m_device; }

        static MTL::Device* GetInstance() { return m_device; }

    private:
        static MTL::Device* m_device;
};
