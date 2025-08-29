#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include <memory>
#include <string>
#include <vector>

class Engine {
private:
    std::unique_ptr<sf::RenderWindow> window;
    sf::Event event;
    sf::Clock gameClock;
    float deltaTime;

public:
    // Constructor
    Engine(const std::string& title = "Game", int width = 800, int height = 600);
    ~Engine();

    // Funciones del nucleo
    void run();
    void update();
    void render();
    void handleEvents();

    // Funciones utiles
    float getDeltaTime() const { return deltaTime; }
    sf::RenderWindow* getWindow() { return window.get(); }
    bool isRunning() const { return window->isOpen(); }
    
    // Manejo de recursos
    void loadTexture(const std::string& id, const std::string& filePath);
    void loadSound(const std::string& id, const std::string& filePath);
    
    // Manejo de entrada
    bool isKeyPressed(sf::Keyboard::Key key) const;
    bool isMouseButtonPressed(sf::Mouse::Button button) const;
    sf::Vector2i getMousePosition() const;

    // Funciones de la scena
    void setBackgroundColor(const sf::Color& color);
    void drawSprite(const sf::Sprite& sprite);
    void drawText(const sf::Text& text);
    void drawShape(const sf::Shape& shape);
};

#endif // ENGINE_H