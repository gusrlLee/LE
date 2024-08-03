#pragma once 

#include "GLFW/glfw3.h"

class Renderer {
    public:
        static void Init();
        static void Release();
        static void ConnectWindow(GLFWwindow* window);
};
