#ifndef RENDER_H
#define RENDER_H
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Render {
public:
    Render(int width, int height){
        cout << "Render created with size: " << width << "x" << height << endl;
    };
};
#endif // RENDER_H