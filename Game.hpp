#ifndef GAME_HPP
#define GAME_HPP

#include <memory>
#include <SFML/Graphics.hpp>
#include "Board.hpp"
#include "Food.hpp"

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 800

class Game {
    private:
        sf::RenderWindow window;
        sf::Font font;

        Board board;
        Food food;
        
        bool isRunning;
    public:
        Game();
        void run();
        void processEvents();
        void render();
        void update();
};

#endif