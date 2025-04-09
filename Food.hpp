#ifndef FOOD_HPP
#define FOOD_HPP

#include <SFML/Graphics.hpp>

class Food {
    public:
        Food();
        void draw(sf::RenderWindow& window, int x, int y);
};

#endif