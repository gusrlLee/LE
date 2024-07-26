#pragma once 

#include "GLFW/glfw3.h"

#include <iostream>

#include "Engine/Core.h"
#include "Editor.h"


class MainLoop {
    public:
        static void SetUp();
        static void Run();
        static void Shutdown();

    private:
        static Editor* m_editor;
        static Engine* m_engine;
};