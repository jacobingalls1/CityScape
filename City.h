#ifndef SFML_TEMPLATE_CITY_H
#define SFML_TEMPLATE_CITY_H

#include "Shared.h"
#include "Building.h"

class City {
    vector<Building> buildings;
    vector<vector<Vector2f>> intersections;
public:
    City(int numB, float r=ROT);
    void draw(RenderWindow &window);
};


#endif
