#include "RFApplication.h"

UPtr<RFApplication> RFApplication::Create()
{
    return CreateUPtr<RFApplication>();
}

void RFApplication::Init()
{
    RF_INFO("Main Window Init!");
    m_window = RFWindow::Create();

    RF_INFO("Engine Init");
    m_engine = RFEngine::Create();
    m_engine->Init();
}

void RFApplication::Run()
{
    RF_INFO("Run!");
    while (!m_window->IsShouldCloseWindow())
    {
        m_window->Update();
    }
}

void RFApplication::Shutdown()
{
    RF_INFO("Shutdown!");
}
