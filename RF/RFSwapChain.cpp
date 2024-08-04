#include "RFSwapChain.h"
#include "RFAdapter.h"

SPtr<RFSwapChain> RFSwapChain::Create()
{
    return CreateSPtr<RFSwapChain>();
}

RFSwapChain::~RFSwapChain()
{
    m_backend_window->release(); 
    m_swapchain->release();
}

void RFSwapChain::Init()
{
    m_swapchain = CA::MetalLayer::layer()->retain();
    m_swapchain->setDevice(RFDevice::GetInstance());
    m_swapchain->setPixelFormat(MTL::PixelFormat::PixelFormatBGRA8Unorm);

    m_backend_window = GetBackendWindow(RFWindow::GetInstance(), m_swapchain);
}

