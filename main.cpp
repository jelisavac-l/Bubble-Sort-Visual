#include <SFML/Graphics.hpp>
#include <iostream>

#include "Pillar.hpp"

int main()
{
    // float in;
    // std::cout << "Test Started!\nInsert number in range 1 - 100: ";
    // std::cin >> in;
    // std::cout << std::endl;

    // //Check if user is retarded
    // if(in > 100 || in  < 0)
    // {
    //     std::cout << "Call your ophthalmologist you blind ape.\n";
    //     return -1;
    // }
    // float height = 720 * (in / 100);

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
        std::cout << "Pillar created:\nID: " << i << "\nHEIGHT: " << height << "\nX-C: " << xPos << "\n\n";
    }

    std::cout << "Successfuly created a pillar wiht the length of ?" << "% of the screen height!\n";
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // window.draw(stub);
        for(Pillar* p : pillarArray)
        {
            p->drawPillar(&window);
        }
        window.display();
    }

    return 0;
}
