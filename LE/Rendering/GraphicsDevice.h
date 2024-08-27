#pragma once
#include <vulkan/vulkan.h>

struct GLFWwindow;

class GraphicsDevice {
public:
    GraphicsDevice(GLFWwindow* window);
    ~GraphicsDevice();
    
private:
    GLFWwindow* m_window;
    bool m_is_use_validation_layer{true};
    
    // Component of Vulkan API
    
    VkInstance m_instance;
    VkDebugUtilsMessengerEXT m_debug_messenger;
    VkSurfaceKHR m_surface;
    
    VkDevice m_device = VK_NULL_HANDLE;
    VkPhysicalDevice m_physical_device = VK_NULL_HANDLE;
    
    VkQueue m_graphics_queue;
    uint32_t m_graphcis_queue_family;
    
};
