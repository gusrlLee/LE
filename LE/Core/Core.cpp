#include "Core.h"

namespace LE 
{
    void PreInit() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

        switch(Platform::GetAPI())
        {
            case API::VULKAN:
                break;
            case API::METAL:
                // MTCore::Initialization();
                break;
            case API::D3D12: 
                break;
        }
    }

    void Shutdown() {
        switch(Platform::GetAPI())
        {
            case API::VULKAN:
                break;
            case API::METAL:
                MTCore::Shutdown();
                break;
            case API::D3D12: 
                break;
        }
        glfwTerminate();
    }
}