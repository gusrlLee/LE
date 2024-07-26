#include "Window.h"

Window* Window::Create()
{
    return new Window();
}

Window::~Window()
{
    glfwDestroyWindow(m_editor_window);
}

Window* Window::Init()
{
    m_window_property.window_title = "Console-Interactive-Rendering Engine";
    m_window_property.window_width = 800;
    m_window_property.window_height = 600;

    m_editor_window = glfwCreateWindow(m_window_property.window_width, m_window_property.window_height, m_window_property.window_title.c_str(), NULL, NULL);
    if (!m_editor_window)
    {
        std::cout << "Failed to create GLFW editor window" << std::endl;
    } 

    return this;
}

void Window::Update()
{
    glfwPollEvents(); 
}


