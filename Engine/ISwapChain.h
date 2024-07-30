#pragma once 

#include "Engine/Log.h"

class ISwapChain {
    public:
        static ISwapChain* Create();
        virtual void Release() = 0;
};