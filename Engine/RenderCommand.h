#pragma once 
#include "RHI.h"
#include "Log.h"
#include "GLFW/glfw3.h"

class RenderCommand {
    public:
        static void Init();
        static void Release();
        static void DefineTargetWindow(GLFWwindow* window);

    private:
        static class RHI* m_rhi;
};