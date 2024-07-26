#include "Application.h"

namespace LE
{
    Application::Application() {
        WindowProperty window_property;
        window_property.window_width = 800;
        window_property.window_height = 600;
        window_property.window_channel = 4;
        window_property.window_title = "Command-Renderer";

        m_window = new Window(window_property);

        MTCore::Initialization(m_window);
    }

    Application::~Application() {
        delete m_window;
    }

    void Application::Run()
    {
        while (!m_window->IsShouldCloseWindow())
        {
            m_window->Update();
        }
    }
}