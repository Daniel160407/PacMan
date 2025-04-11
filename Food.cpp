#include "Food.hpp"

Food::Food() {}

void Food::draw(sf::RenderWindow& window, std::vector<std::vector<short>> emptyBlockCoordinates) {
    for (int i = 0; i < emptyBlockCoordinates.size(); i++) {
        sf::CircleShape food(1.0f);
        food.setPosition(sf::Vector2f(emptyBlockCoordinates[i][0] * 30 + 15, emptyBlockCoordinates[i][1] * 30 + 15));
        food.setFillColor(sf::Color::White);
        window.draw(food);
    }
}