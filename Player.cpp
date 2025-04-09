#include "Player.hpp"

Player::Player() : posX(0.0f), posY(0.0f) {}

Player::Player(float posX, float posY) : posX(posX), posY(posY) {}

float Player::getPosX() const {
    return posX;
}

float Player::getPosY() const {
    return posY;
}

void Player::setPosX(float posX) {
    this->posX = posX;
}

void Player::setPosY(float posY) {
    this->posY = posY;
}
