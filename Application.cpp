#include <ctime>
#include "Game.hpp"

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    Game game;
    game.run();

    return 0;
}
