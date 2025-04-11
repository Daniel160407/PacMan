#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include <SFML/Graphics.hpp>

#define ROW_WIDTH 20
#define CELL_SIZE 30.f

class Board {
    private:
        std::vector<std::vector<short>> boardLayout;
    public:
        Board();

        static Board getInstance();
        std::vector<std::vector<short>> getBoardLayout();
        std::vector<std::vector<short>> generateBoardLayout();
        std::vector<std::vector<short>> getEmptyBlockCoordinates();
        void draw(sf::RenderWindow& window);
};

#endif