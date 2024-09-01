#include "GraphicsDevice.h"
#include "Core/Types.h"
#include "Core/Config.h"
#include "GLFW/glfw3.h"
#include "VkBootstrap.h"

namespace LE {
GraphicsDevice::GraphicsDevice(GLFWwindow* window) {
    m_window = window;
    
    vkb::InstanceBuilder builder;
    auto inst_ret = builder.set_app_name("Lee's Engine")
        .request_validation_layers(m_is_use_validation_layer)
        .use_default_debug_messenger()
        .require_api_version(1, 3, 0)
        .build();
    
    vkb::Instance vkb_instance = inst_ret.value();
    
    m_instance = vkb_instance.instance;
    m_debug_messenger = vkb_instance.debug_messenger;
    VK_CHECK(glfwCreateWindowSurface(m_instance, window, nullptr, &m_surface));
    
    VkPhysicalDeviceVulkan13Features features{ .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES };
    features.dynamicRendering = true;
    features.synchronization2 = true;
    
    VkPhysicalDeviceVulkan12Features features12{ .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES };
    features12.bufferDeviceAddress = true;
    features12.descriptorIndexing = true;
    
    vkb::PhysicalDeviceSelector selector{ vkb_instance };
    vkb::PhysicalDevice physical_device = selector
        .set_minimum_version(1, 3)
        .set_required_features_13(features)
        .set_required_features_12(features12)
        .set_surface(m_surface)
        .select()
        .value();
    
    vkb::DeviceBuilder device_builder{ physical_device };
    vkb::Device vkb_device = device_builder.build().value();
    
    m_device = vkb_device.device;
    m_physical_device = physical_device.physical_device;
    
    m_graphics_queue = vkb_device.get_queue(vkb::QueueType::graphics).value();
    m_graphcis_queue_family = vkb_device.get_queue_index(vkb::QueueType::graphics).value();
    
    // Create SwapChain
    vkb::SwapchainBuilder swapchain_builder{m_physical_device, m_device, m_surface};
    m_swapchain_image_format = VK_FORMAT_B8G8R8A8_UNORM;
    
    vkb::Swapchain vkb_swapchain = swapchain_builder
        .set_desired_format(VkSurfaceFormatKHR{ .format = m_swapchain_image_format, .colorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR })
        .set_desired_present_mode(VK_PRESENT_MODE_FIFO_KHR)
        .set_desired_extent(k_window_width, k_window_height)
        .add_image_usage_flags(VK_IMAGE_USAGE_TRANSFER_DST_BIT)
        .build()
        .value();
    
    m_swapchain_extent = vkb_swapchain.extent;
    m_swapchain = vkb_swapchain.swapchain;
    m_swapchain_images = vkb_swapchain.get_images().value();
    m_swapchain_image_views = vkb_swapchain.get_image_views().value();
    
}

GraphicsDevice::~GraphicsDevice() {
    vkDeviceWaitIdle(m_device);
    
    vkDestroySwapchainKHR(m_device, m_swapchain, nullptr);
    
    for (int i = 0; i < m_swapchain_image_views.size(); i++) {
        vkDestroyImageView(m_device, m_swapchain_image_views[i], nullptr);
    }
    
    vkDestroySurfaceKHR(m_instance, m_surface, nullptr);
    vkDestroyDevice(m_device, nullptr);
    vkb::destroy_debug_utils_messenger(m_instance, m_debug_messenger);
    vkDestroyInstance(m_instance, nullptr);
}

}
