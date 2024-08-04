#include "RFDevice.h"

MTL::Device* RFDevice::m_device;

SPtr<RFDevice> RFDevice::Create()
{
    return CreateSPtr<RFDevice>();
}

RFDevice::RFDevice()
{
    RF_INFO("Create default device!");

    m_device = MTL::CreateSystemDefaultDevice();
    if (!m_device)
    {
        RF_ERROR("Failed to create Device for Metal API!");
    }
}

RFDevice::~RFDevice()
{
    m_device->release(); 
}
