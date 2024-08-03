#pragma once 

#include <iostream>
#include "GLFW/glfw3.h"

class RHI {
    public:
        virtual ~RHI() = default;
        virtual void Init() = 0;
        virtual void Release() = 0;

        virtual void Connect(GLFWwindow* window) = 0;
};