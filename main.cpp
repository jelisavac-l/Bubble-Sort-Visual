#include <SFML/Graphics.hpp>
#include <iostream>
#include "colorprintf.h"

#include "Pillar.hpp"

int main()
{

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Sorting algorithm");

    float xPos = 0.0f;
    float height = 7.2f;

    // Pillar array
    Pillar *pillarArray[100];
    for (int i = 0; i < 100; i++)
    {
        pillarArray[i] = new Pillar(i, height);
        pillarArray[i]->setXCoordinate(xPos);
        xPos += 12.8f;
        height += 7.2f;
        // std::cout << "ID: " << i << " HEIGHT: " << height << " X-C: " << xPos << "\n";
        colorprintf(1, "Pillar Created!");
        colorprintf(3, " ID: ");
        std::cout << i;
        colorprintf(3, " Height: ");
        std::cout << height;
        colorprintf(3, " X-Cord: ");
        std::cout << xPos << std::endl;
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(40, 10, 30));
        // window.draw(stub);
        for (Pillar *p : pillarArray)
        {
            p->drawPillar(&window);
        }
        window.display();
    }

    return 0;
}
