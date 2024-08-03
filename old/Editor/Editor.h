#pragma once 

#include <iostream>
#include "Engine/Core.h"
#include "Window.h"

class Editor {
    public:
        // construction
        static Editor* Create();     
        Editor* Init();

        void Release();
        void Connect(Engine* engine);
        
        void Run();

    private:
        Engine* m_engine;
        Window* m_window;
};