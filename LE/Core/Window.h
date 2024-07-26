#pragma once 
#include "pch.h"

namespace LE 
{
    typedef struct WindowProperty {
        std::string window_title;
        uint32_t window_width;
        uint32_t window_height;
        uint8_t window_channel;
    } WindowProperty;


    class Window {
        public:
            Window(WindowProperty window_property);
            ~Window();

            uint32_t GetWidth() { return m_window_property.window_width; }
            uint32_t GetHeight() { return m_window_property.window_height; }

            void* GetNativeWindowPtr() { return m_glfw_window; }
            bool IsShouldCloseWindow() { return glfwWindowShouldClose(m_glfw_window); } 

            void Update();

        private:
            WindowProperty m_window_property;
            GLFWwindow* m_glfw_window;
    };
}