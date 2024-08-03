#include <iostream>
#include "RF/RF.h"

int main()
{

    RFLog::Init();
    RF_TRACE("Start Engine");
    
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    UPtr<RFWindow> window = RFWindow::Create();
    RF_TRACE("Create window");

    return 0;
}
