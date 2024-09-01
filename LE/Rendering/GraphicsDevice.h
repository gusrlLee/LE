#pragma once
#include <iostream>
#include <vulkan/vulkan.h>

struct GLFWwindow;

namespace LE {
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
    
    // Device
    VkDevice m_device = VK_NULL_HANDLE;
    VkPhysicalDevice m_physical_device = VK_NULL_HANDLE;
    
    // Queues
    VkQueue m_graphics_queue;
    uint32_t m_graphcis_queue_family;

    // SwapChain
    VkSwapchainKHR m_swapchain;
    VkFormat m_swapchain_image_format;
    VkExtent2D m_swapchain_extent;
    
    std::vector<VkImage> m_swapchain_images;
    std::vector<VkImageView> m_swapchain_image_views;
};

}
