#pragma once 

#include "GLFW/glfw3.h"
#include "Core/Config.h"

#include <iostream>

class Application {
public:
    void Init();
    void Run();
    void Clean();

    virtual void GameLogic() = 0; // User setting 

private:
    // Window (Detail in Config.h)
    GLFWwindow* m_window;
};
