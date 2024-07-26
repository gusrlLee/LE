#pragma once 

#include "pch.h"
#include "Window.h"
#include "Graphics/Metal/MTCore.h"

namespace LE 
{
    class Application {
        public:
            Application();
            ~Application();
            void Run();

        private:
            Window* m_window;
    };
}