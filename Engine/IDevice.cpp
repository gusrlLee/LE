#include "IDevice.h"
#include "Platform.h"

#include "Engine/RHI/Metal/MTDevice.h"

IDevice* IDevice::Create()
{
    switch(Platform::GetAPI())
    {
        case API::VULKAN: ENGINE_ERROR("Cannot support Vulkan API"); return nullptr;
        case API::METAL: return new MTDevice();
        case API::D3D12: ENGINE_ERROR("Cannot support DirectX 12 API"); return nullptr;
    }

    ENGINE_ERROR("Unknown Graphics API!");
    return nullptr;
}