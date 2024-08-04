#pragma once 

#include "RFWindow.h"
#include "RFEngine.h"
#include "pch.h"

class RFApplication {
    public:
        static UPtr<RFApplication> Create();
        RFApplication() = default;
        ~RFApplication() = default;

        void Init();
        void Run();
        void Shutdown();

    private:
        UPtr<RFWindow> m_window;
        UPtr<RFEngine> m_engine;
};

