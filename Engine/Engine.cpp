#include "Engine.h"

Engine* Engine::Create()
{
    return new Engine();
}

Engine* Engine::Init()
{
    Log::Init();
    Renderer::Init();

    return this;
}

void Engine::Release()
{
    ENGINE_INFO("Delete ENGINE!");
    delete this;
}

void Engine::Connect(GLFWwindow* window)
{
    ENGINE_INFO("Connecting Window!");
    Renderer::ConnectWindow(window);
}