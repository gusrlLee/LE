#pragma once 
#include <iostream>

namespace LE {

class World;

class IGame {
public:
    IGame() = default;
    ~IGame() = default;
    
    virtual void Init() = 0;
    virtual void Logic() = 0;
    
    void Update();
    
private:
    std::string m_game_name;
};
}
