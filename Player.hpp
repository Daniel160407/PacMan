#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

class Player {
    private:
        float posX;
        float posY;
    public:
        Player();
        Player(float posX, float posY);

        float getPosX() const;
        float getPosY() const;

        void setPosX(float posX);
        void setPosY(float posY);

        void draw(sf::RenderWindow& window);
};

#endif