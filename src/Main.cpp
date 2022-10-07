#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

const unsigned int WINDOW_WIDTH = 800;
const unsigned int WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML";
const unsigned int WINDOW_MAX_FPS = 60;

int main() {
  sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
  window.setFramerateLimit(WINDOW_MAX_FPS);
  sf::CircleShape shape(25.f);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      switch (event.type)
      {
        case sf::Event::Closed:
          window.close();
          break;

        default:
          break;
      }

      window.clear();
      window.draw(shape);
      window.display();
    }
  }

  return 0;
}
