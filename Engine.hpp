
// Created by Ford on 03/10/2023.

#pragma once

#include "SFML/Graphics.hpp"


namespace CoreGame
{
    /*
    Contains aspects that will be used for certain
    actions that will be needed by the game
    */

    bool checkCollision(const sf::RectangleShape&, const sf::RectangleShape& );

    /* Returns a rectangle at the specified coordinates */
    sf::RectangleShape getRectangleAt(sf::Vector2f location, sf::Color);

}
