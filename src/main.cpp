#include <SFML/Graphics.hpp>
#include "render.h"

int main()
{
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    sf::RenderWindow window(desktopMode, "SFML works!", sf::Style::Titlebar);
    sf::CircleShape shape(100.f);
    Render render(2,2);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}