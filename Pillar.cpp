#include "Pillar.hpp"

Pillar::Pillar(int id, float height)
{
    // Color gradient between pillars
    uint8_t red = id*2.55;
    uint8_t green = 0;
    if(id % 2 == 0) green = 25;
    uint8_t blue = 255 - red;

    color = sf::Color(red, green, blue);
    pillarBody = new sf::RectangleShape(sf::Vector2f((12.8f), height));
    pillarBody->setFillColor(color);
}

void Pillar::drawPillar(sf::RenderWindow* window)
{
    window->draw(*pillarBody);
}

Pillar::~Pillar()
{

}

void Pillar::setXCoordinate(float x)
{
    pillarBody->setPosition(sf::Vector2f(x, 0.0f));
}