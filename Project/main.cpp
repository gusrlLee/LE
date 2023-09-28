#include <iostream>

#include "LE/Application.h"

int main(int args, char* argc[])
{
    LE::Log::Init();
    std::cout << "Hello Lee's Engine" << std::endl;
    LE::Application app("Lee_Engine", 720, 480);
    
    app.Run();

    return 0;
}