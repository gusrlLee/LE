#pragma once

#include "Config.h"

#include "vulkan/vulkan.h"
#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <cstring>

class Application {
    public:
        void run();

    private:
        void initWindow();
        void initVulkan();
        void mainLoop();
        void cleanUp();

        GLFWwindow* m_window;
        VkInstance m_vkinstance;
        const std::vector<const char*> validationLayers = { "VK_LAYER_KHRONOS_validation" };
#if DEBUG
        const bool enableValidationLayers = true;
#else
        const bool enableValidationLayers = false;
#endif
        void createInstance();
        bool checkValidationLayerSupport();
        std::vector<const char*> getRequiredExtensions();
};