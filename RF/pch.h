#pragma once 

#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#define GLFW_EXPOSE_NATIVE_COCOA
#include "GLFW/glfw3native.h"

#include <Metal/Metal.hpp>
#include <QuartzCore/CAMetalLayer.hpp>
#include <QuartzCore/CAMetalLayer.h>
#include <QuartzCore/QuartzCore.hpp>

#include <Foundation/Foundation.hpp>
#include <AppKit/AppKit.hpp>

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template<typename T>
using UPtr = std::unique_ptr<T>;
template<typename T, typename ... Args>
constexpr UPtr<T> CreateUPtr(Args&& ... args) 
{
    return std::make_unique<T>(std::forward<Args>(args)...);
}

template<typename T>
using SPtr = std::shared_ptr<T>;
template<typename T, typename ... Args>
constexpr SPtr<T> CreateSPtr(Args&& ... args) 
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}

