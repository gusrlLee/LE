#pragma once 

#include "pch.h"
#include "RFApplication.h"

class RFEntryPoint {
    public:
        static void Init();
        static void Run();
        static void Shutdown();
    
    private:
        static UPtr<RFApplication> m_application;

};
