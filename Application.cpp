#include "Application.h"

Application::Application()
{

}

Application::~Application()
{
	glfwTerminate();
}

void Application::Init()
{
	glfwInit();

}
