#include "../Headers/Game.h"
#include <string>

const unsigned int WINDOW_WIDTH = 800;
const unsigned int WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML";
const unsigned int WINDOW_MAX_FPS = 60;
const bool WINDOW_VSYNC_ENABLED = false;

// Constructor and Destructor

Game::Game()
{
  this->window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
  this->window->setFramerateLimit(WINDOW_MAX_FPS);
  this->window->setVerticalSyncEnabled(WINDOW_VSYNC_ENABLED);

  // TESTING
  this->shape = new sf::CircleShape(25.f);
  this->shape->setFillColor(sf::Color::Red);
}

Game::~Game()
{
  delete this->window;
}

// Update Functions

void Game::update()
{
  while (this->window->pollEvent(this->sfEvent))
  {
    switch (this->sfEvent.type)
    {
      case sf::Event::Closed:
        this->window->close();
        break;

      default:
        break;
    }
  }
}

// Render Functions

void Game::render()
{
  this->window->clear();
  this->window->draw(*this->shape);
  this->window->display();
}

// Functions

void Game::run()
{
  while (this->window->isOpen())
  {
    this->update();
    this->render();
  }
}
