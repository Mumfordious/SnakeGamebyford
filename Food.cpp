
// Created by Ford on 04/10/2023.

#include "Food.hpp"

CoreGame::Food::Food(sf::RenderWindow *w, sf::Vector2f loc)
{
    location    = loc;
    screen      = w;
    color       = sf::Color::Yellow;
    food        = getRectangleAt(location, color);

}

sf::RectangleShape CoreGame::Food::getFood()
{
    return food;
}

void CoreGame::Food::drawFood()
{
    screen->draw( food );
}