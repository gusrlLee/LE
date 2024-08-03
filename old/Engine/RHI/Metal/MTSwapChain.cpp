#include "MTSwapChain.h"
#include "MTAdapter.h"

MTSwapChain::MTSwapChain(MTL::Device* device, GLFWwindow* window)
{
    m_editor_window = window;

    m_layer = CA::MetalLayer::layer()->retain();
    m_layer->setDevice(device);
    m_layer->setPixelFormat(MTL::PixelFormat::PixelFormatBGRA8Unorm);

    m_engine_window = GetNativeWindow(m_editor_window, m_layer);
}

void MTSwapChain::Release()
{
    ENGINE_INFO("Delete MTSwapChain!");
    m_engine_window->release();
    m_layer->release();
    delete this;
}