#include "RenderCommand.h"
#include "Platform.h"

#include "Engine/RHI/Metal/MTRHI.h"

class RHI* RenderCommand::m_rhi;

void RenderCommand::Init() 
{
    switch(Platform::GetAPI())
    {
        case API::VULKAN: 
            ENGINE_ERROR("Cannot support Vulkan API"); 
            m_rhi = nullptr;
            break;
        case API::METAL: 
            ENGINE_INFO("We using Metal API");
            m_rhi = new MTRHI();
            break;
        case API::D3D12: 
            ENGINE_ERROR("Cannot support DirectX 12 API"); 
            m_rhi = nullptr;
            break;
    }

    assert(m_rhi);
    m_rhi->Init();
}

void RenderCommand::Release()
{
    m_rhi->Release();
    delete m_rhi;
}

void RenderCommand::DefineTargetWindow(GLFWwindow* window)
{
    m_rhi->Connect(window);
}