#include "MTSwapChain.h"

#include "MTAdapter.h"

namespace LE {
    namespace MTCore {
        MTSwapChain::MTSwapChain(Window *window) {
            m_metal_layer = CA::MetalLayer::layer()->retain();
            m_metal_layer->setDevice(g_device);
            m_metal_layer->setPixelFormat(MTL::PixelFormat::PixelFormatBGRA8Unorm);

            m_native_window = GetNativeWindow((GLFWwindow*)window->GetNativeWindowPtr(), m_metal_layer);
        }

        MTSwapChain::~MTSwapChain() {
            m_metal_layer->release();
        }
    }
}