#include "MainLoop.h"

class Editor* MainLoop::m_editor = nullptr;
class Engine* MainLoop::m_engine = nullptr;

// MAIN START POINT 
void MainLoop::SetUp()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    m_editor = Editor::Create()->Init();
    m_engine = Engine::Create()->Init();
}

void MainLoop::Run()
{
    m_editor->Connect(m_engine);
    m_editor->Run();
}

void MainLoop::Shutdown()
{
    m_engine->Release();
    m_editor->Release();
    glfwTerminate();
}