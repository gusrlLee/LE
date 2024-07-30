#include "Renderer.h"
#include "RenderCommand.h"

void Renderer::Init()
{
    RenderCommand::Init();
}

void Renderer::Release()
{
    RenderCommand::Release();
}

void Renderer::ConnectWindow(GLFWwindow* window)
{
    RenderCommand::DefineTargetWindow(window);
}