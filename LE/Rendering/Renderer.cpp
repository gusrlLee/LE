#include "Rendering/Renderer.h"
#include "Rendering/GraphicsDevice.h"

Renderer::Renderer(GLFWwindow* window) {
    m_device = CreateSPtr<GraphicsDevice>(window);
}

Renderer::~Renderer() {
    
}

