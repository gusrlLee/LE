#include "Application.h"

void Application::Init() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    m_window = glfwCreateWindow(k_window_width, k_window_height, k_window_title, NULL, NULL);
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
    glfwDestroyWindow(m_window);
    glfwTerminate();
}

