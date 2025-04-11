#include <iostream>
#include "Game.hpp"

Game::Game() : 
    window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Pac Man"),
    isRunning(true)
{
    window.setFramerateLimit(60);

    if (!font.loadFromFile("src/fonts/Pixel_Game.otf"))
        std::cerr << "Failed to load font!" << std::endl;
}

void Game::run() {
    while (window.isOpen() && isRunning) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed || 
            (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) {
            window.close();
            isRunning = false;
        }
    }
}

void Game::render() {
    window.clear();
    board.draw(window);
    food.draw(window, board.getEmptyBlockCoordinates());
    window.display();
}

void Game::update() {

}