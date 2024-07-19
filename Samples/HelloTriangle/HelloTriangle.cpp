#include <iostream>
#include "Application.h"

int main()
{
    std::cout << "Hello world!" << std::endl;
    Application* app = new Application();

    app->Init();
    delete app;
    return 0;
}
