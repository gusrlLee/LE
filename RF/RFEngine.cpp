#include "RFEngine.h" 

UPtr<RFEngine> RFEngine::Create()
{
    return CreateUPtr<RFEngine>();
}

void RFEngine::Init()
{
    m_device = RFDevice::Create();
    m_swapchain = RFSwapChain::Create();
    m_swapchain->Init();
}

void RFEngine::Run()
{

}

void RFEngine::Shutdown()
{
    
}
