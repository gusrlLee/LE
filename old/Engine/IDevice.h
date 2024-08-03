#pragma once 

#include "Log.h"

class IDevice {
    public:
        virtual ~IDevice() = default;

        static IDevice* Create();
        virtual void Release() = 0;
};