#pragma once
#include "Core/pch.h"

#include <AppKit/AppKit.hpp>
#include <QuartzCore/CAMetalLayer.hpp>

NS::Window* GetNativeWindow(GLFWwindow* glfwWindow, CA::MetalLayer* layer);