#include "Application.h"

#include "Game/IGame.h"
#include "Rendering/Renderer.h"

namespace LE {

SPtr<IGame> Application::m_game = nullptr;
SPtr<Renderer> Application::m_renderer = nullptr;

void Application::Init() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    
    m_window = glfwCreateWindow(k_window_width, k_window_height, k_window_title.c_str(), NULL, NULL);
    if (!m_window) {
        glfwTerminate();
        throw std::runtime_error("[GLFW] Failed to create GLFW window.\n");
    }
}

void Application::Run() {
    while (!glfwWindowShouldClose(m_window)) {
        glfwPollEvents();
    }
}

void Application::Clean() {
    glfwDestroyWindow(m_window);
    glfwTerminate();
}
}
