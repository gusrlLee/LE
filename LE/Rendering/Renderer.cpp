#include "Rendering/Renderer.h"
#include "Rendering/GraphicsDevice.h"

namespace LE {
Renderer::Renderer(GLFWwindow* window) {
    m_device = CreateSPtr<GraphicsDevice>(window);
}

Renderer::~Renderer() {
    
}

}
