#include "RFWindow.h"


UPtr<RFWindow> RFWindow::Create()
{
    return CreateUPtr<RFWindow>();
}

RFWindow::RFWindow()
{
    m_window_width = 1080;
    m_window_height = 720;
    m_window_channels = 4;
    m_window_title = "Hyeon World";

    m_window = glfwCreateWindow(m_window_width, m_window_height, m_window_title.c_str(), NULL, NULL);
    if (!m_window)
    {
        RF_ERROR("Failed to create GLFW window!");
    }
}

RFWindow::~RFWindow()
{
    glfwDestroyWindow(m_window);
}

void RFWindow::Update()
{
    glfwPollEvents(); 
}


