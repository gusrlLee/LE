#pragma once 

#include <iostream>

#include "Platform.h"

class Engine {
    public:
        // construction
        static Engine* Create();
        Engine* Init();

        void Release();

    private:

};