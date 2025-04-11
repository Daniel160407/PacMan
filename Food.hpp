#ifndef FOOD_HPP
#define FOOD_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

class Food {
    public:
        Food();
        void draw(sf::RenderWindow& window, std::vector<std::vector<short>> emptyBlockCoordinates);
};

#endif