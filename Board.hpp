#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Food.hpp"

#define ROW_WIDTH 20
#define CELL_SIZE 30.f

class Board {
    private:
        std::vector<std::vector<short>> boardLayout;
    public:
        Board();

        Food food;

        static Board getInstance();
        std::vector<std::vector<short>> getBoardLayout() const;
        std::vector<std::vector<short>> generateBoardLayout();
        void draw(sf::RenderWindow& window) const;
};

#endif