
#ifndef SFML_TEMPLATE_BUILDING_H
#define SFML_TEMPLATE_BUILDING_H

#include "Shared.h"

class Building {
    Vector2f pos;
    int height;
    float rot;
public:
    Building(float x, float y, int h, float r=ROT);
    void draw(RenderWindow &window);
};


#endif
