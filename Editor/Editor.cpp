#include "Editor.h"

Editor* Editor::Create()
{
    return new Editor();
}

Editor* Editor::Init()
{
    std::cout << "Hello world! Lee Editor!" << std::endl;
    m_window = Window::Create()->Init();
    return this;
}

void Editor::Release()
{
    delete this;
}

void Editor::Connect(Engine* engine)
{
    m_engine = engine;
    std::cout << "Success Connect Engine!" << std::endl;
}

void Editor::Run()
{
    while(!m_window->IsShouldCloseWindow())
    {
        m_window->Update();
    }
}