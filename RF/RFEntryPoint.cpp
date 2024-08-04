#include "RFEntryPoint.h"

// static variable 
UPtr<RFApplication> RFEntryPoint::m_application;

void RFEntryPoint::Init()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    // Init log 
    RFLog::Init();

    // Create Application 
    m_application = RFApplication::Create();
    m_application->Init();
}

void RFEntryPoint::Run()
{
    // MAIN START LOOP
    m_application->Run();
}

void RFEntryPoint::Shutdown()
{
    m_application->Shutdown();
    glfwTerminate();
}
