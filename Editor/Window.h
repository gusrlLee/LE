#pragma once 

#include "GLFW/glfw3.h"
#include <iostream>
#include <stdint.h>
#include <string>

typedef struct WindowProperty {
    std::string window_title;
    uint32_t window_width;
    uint32_t window_height;
} WindowProperty;

class Window {
    public:
        static Window* Create();

        Window() = default;
        ~Window();
        Window* Init();
        
        void Update();
        bool IsShouldCloseWindow() { return glfwWindowShouldClose(m_editor_window); } 

    private:
        GLFWwindow* m_editor_window;
        WindowProperty m_window_property;
};