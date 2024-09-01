#pragma once 

#include "GLFW/glfw3.h"
#include "Core/Config.h"
#include "Core/Types.h"

#include <iostream>

namespace LE {

class Renderer;
class IGame;

class Application {
public:
    
    static SPtr<IGame>& GetGameInstance() { return m_game; }
    static SPtr<Renderer>& GetRendererInstance() { return m_renderer; }
    
    void Init();
    void Run();
    void Clean();
    
private:
    GLFWwindow* m_window;
    
    // Required component of Application for run program
    static SPtr<IGame> m_game; // 사용자가 만들어야 하는 게임.
    static SPtr<Renderer> m_renderer;
    
};
}
