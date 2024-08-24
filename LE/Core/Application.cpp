#include "Application.h"

void Application::Init() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    
    m_window_width = 1080;
    m_window_height = 720;
    m_window_title = "Hello Engine!";

    m_window = glfwCreateWindow(m_window_width, m_window_height, m_window_title.c_str(), NULL, NULL);
    if (!m_window) {
        glfwTerminate();
        throw std::runtime_error("[GLFW] Failed to create GLFW window.\n");
    }
}

void Application::Run() {
    while (!glfwWindowShouldClose(m_window)) {
        GameLogic();
        glfwPollEvents();
    }
}

void Application::Clean() {
    glfwTerminate();
}

