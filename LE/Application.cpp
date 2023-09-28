#include "Application.h"

namespace LE {
    Application::Application(const char* name, int width, int height)
    {
        LE_CORE_INFO("Initialization...\n");

        m_window_name = name;
        m_window_width = width;
        m_window_height = height;

        LE_INFO("Hello world, Lee's Engine.\n");
    }

    void Application::Run()
    {
        std::cout << "Run! " << std::endl;
    }
} // namespace LE