#pragma once

#include "GLFW/glfw3.h"

#include <iostream>

class Application
{
public:
	Application();
	~Application();

	void Init();

private:
	GLFWwindow* m_window;

};