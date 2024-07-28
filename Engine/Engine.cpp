#include "Engine.h"

Engine* Engine::Create()
{
    return new Engine();
}

Engine* Engine::Init()
{
    Log::Init();
    ENGINE_TRACE("Initialization");
    return this;
}

void Engine::Release()
{
    delete this;
}