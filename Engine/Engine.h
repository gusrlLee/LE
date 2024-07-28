#pragma once 

#include <iostream>

#include "Platform.h"
#include "Log.h"

class Engine {
    public:
        // construction
        static Engine* Create();
        Engine* Init();

        void Release();

    private:

};