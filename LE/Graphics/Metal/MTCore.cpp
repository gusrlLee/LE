#include "MTCore.h"

namespace LE {
    namespace MTCore {
        MTL::Device* g_device = nullptr;
        MTSwapChain* g_swapchain = nullptr;

        void Initialization() {
            g_device = MTL::CreateSystemDefaultDevice();
            if (!g_device)
            {
                std::cout << "Not support Metal API!" << std::endl;
                g_device = nullptr;
            }

        }

        void Initialization(Window* window) {
            g_device = MTL::CreateSystemDefaultDevice();
            if (!g_device)
            {
                std::cout << "Not support Metal API!" << std::endl;
                g_device = nullptr;
            }

            g_swapchain = new MTSwapChain(window);
        }

        void Shutdown() {
            delete g_swapchain;
            g_device->release();
        }

    } // namespace MTCore
} // namespace 