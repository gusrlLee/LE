#pragma once
#include <iostream>

#include "Log.h"
#include "Platform.h"

#include "Renderer.h"

#include "GLFW/glfw3.h"

class Engine {
    public:
        Engine() = default;
        ~Engine() = default;

        // Construction
        static Engine *Create();
        Engine *Init();

        void Connect(GLFWwindow *window);
        void Release();
};
