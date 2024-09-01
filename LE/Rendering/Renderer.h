#pragma once

#include "Core/Types.h"

struct GLFWwindow;

namespace LE {

class GraphicsDevice;

class Renderer {
public:
    Renderer(GLFWwindow* window);
    ~Renderer();
    
private:
    SPtr<GraphicsDevice> m_device;
};
}
