#pragma once 

#include "pch.h"
#include "RFLog.h"

class RFWindow {
    public:
        static UPtr<RFWindow> Create();

        RFWindow();
        ~RFWindow();

        void Update();
        GLFWwindow* GetNativeWindowPtr() { return m_window; }
        static GLFWwindow* GetInstance() { return m_window; } 
        bool IsShouldCloseWindow() { return glfwWindowShouldClose(m_window); } 

    private:
        static GLFWwindow* m_window;

        std::string m_window_title;
        int m_window_width;
        int m_window_height;
        int m_window_channels;
};
