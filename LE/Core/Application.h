#pragma once 

#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

#include <iostream>

class Application {
public:
    void Init();
    void Run();
    void Clean();

    virtual void GameLogic() = 0; // User setting 

private:
    // Window 
    GLFWwindow* m_window;

    // Window Properties 
    std::string m_window_title; 
    int m_window_height;
    int m_window_width;
};
