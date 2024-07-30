#include "MTRHI.h"
#include "Engine/Log.h"
#include "Engine/RHI/Metal/MTAdapter.h"

MTRHI::MTRHI()
{
    ENGINE_INFO("MTRHI!");
}

MTRHI::~MTRHI()
{
    ENGINE_INFO("~MTRHI!");
}

void MTRHI::Init()
{
    m_device = MTL::CreateSystemDefaultDevice();
}

void MTRHI::Release()
{
    m_swapchain->Release();
    m_device->release();
}

void MTRHI::Connect(GLFWwindow* window)
{
    m_swapchain = new MTSwapChain(m_device, window);
}