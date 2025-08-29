#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

/*
Es una clase generica para representar objetos en el juego.
Puede ser extendida para crear diferentes tipos de objetos con comportamientos especificos.
Esto debe de conectarse con render.h para dibujar los objetos en la pantalla.
*/

#include <SFML/Graphics.hpp>

class GameObject {
public:
    GameObject() {
        // Constructor implementation
    }

    virtual void update() {
        // Update logic
    }

    void render() {
        // Render logic
        
    }
};

#endif // GAMEOBJECT_H