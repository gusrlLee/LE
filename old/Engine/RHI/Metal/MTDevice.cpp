#include "MTDevice.h"
#include "MTAdapter.h"

MTDevice::~MTDevice() {}

MTDevice::MTDevice()
{
    m_device = MTL::CreateSystemDefaultDevice();

    if (!m_device)
    {
        ENGINE_ERROR("Failed to Create Device of Metal API!");
    }
}


void MTDevice::Release()
{
    ENGINE_INFO("Delete MTDevice");
    m_device->release();
    delete this;
}

MTSwapChain* MTDevice::CreateSwapChain(GLFWindow* window)
{
    return new MTSwapChain(m_device, window);
}
