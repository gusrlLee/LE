#pragma once 
#include <iostream>

#include "Config.h"
#include "GLFW/glfw3.h"

namespace LE {
    class Application {
        public:
            void Init();
            void Run();
            void Loop();
            void Exit();
        
        private:
            GLFWwindow* m_window;
    };
}