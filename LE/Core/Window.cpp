#include "Window.h"

namespace LE {
    Window::Window(WindowProperty window_property) : m_window_property(window_property) {

        m_glfw_window = glfwCreateWindow(m_window_property.window_width, m_window_property.window_height, m_window_property.window_title.c_str(), NULL, NULL);
        if (!m_glfw_window) {
            std::cout << "[ERROR] Failed to create glfw window!" << std::endl;
        }
    }

    Window::~Window() {
        glfwDestroyWindow(m_glfw_window);
    }

    void Window::Update() {
        glfwPollEvents();
    }
}