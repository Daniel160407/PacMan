#include "Food.hpp"

Food::Food() {}

void Food::draw(sf::RenderWindow& window, int x, int y) {
    sf::CircleShape food(1.0f);
    food.setPosition(sf::Vector2f(x, y));
    food.setFillColor(sf::Color::White);
    window.draw(food);
}