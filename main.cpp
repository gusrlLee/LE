#include "Editor/MainLoop.h"

int main()
{
    MainLoop::SetUp();
    MainLoop::Run();
    MainLoop::Shutdown();
    return 0;
}