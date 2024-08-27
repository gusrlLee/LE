#include <iostream>
#include "Core/Application.h"


class Game : public Application {
    public:
        void GameLogic() override {}
};

int main() {
    Game game;

    game.Init();
    game.Run();
    game.Clean();

    return 0;
}
