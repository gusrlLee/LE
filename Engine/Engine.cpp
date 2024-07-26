#include "Engine.h"

Engine* Engine::Create()
{
    return new Engine();
}

Engine* Engine::Init()
{
    std::cout << "Hello Lee Engine! " << std::endl;
    return this;
}

void Engine::Release()
{
    delete this;
}