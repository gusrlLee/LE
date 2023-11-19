#include "Application.h"

namespace LE {
    void Application::Init()
    {
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#if __APPLE__ // for MacOS
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif
        m_window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Lee's Engine",NULL, NULL);
        if (m_window == NULL)
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            Exit();
        }
        glfwMakeContextCurrent(m_window);
    }
    
    void Application::Run() 
    {
        Loop();
        Exit();
    }

    void Application::Loop()
    {
        while (!glfwWindowShouldClose(m_window)) 
        {
            glfwPollEvents();
        }
    }

    void Application::Exit()
    {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }
}