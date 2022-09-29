#include <SFML\Graphics.hpp>

#pragma once

class Pillar{

private:
    int id;
    float height;
    sf::Color color;
    sf::RectangleShape* pillarBody;
public:
    Pillar(int id, float height);
    ~Pillar();
    sf::RectangleShape getPillarBody();
    void drawPillar(sf::RenderWindow* window);
    void setXCoordinate(float x);
};