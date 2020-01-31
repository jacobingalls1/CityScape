#include "City.h"

City::City(int numB, float r) {
    for (int i = 0; i < INRSX; i++) {
        intersections.push_back({});
        for (int j = 0; j < INRSY; j++) {
            intersections[i].push_back(Vector2f((i + .5) * SCREEN_SIZE / INRSX,
                                                (j + .5) * SCREEN_SIZE / INRSY));
        }
    }
    for (int i = 0; i < numB; i++) {
        //ADD BUILDINGS
    }
}

void City::draw(RenderWindow &window) {
    VertexArray va(LinesStrip, 2);
    va[0].color = Color::Red;
    va[1].color = Color::Red;
    for (int i = 0; i < INRSX; i++) {
        for (int j = 0; j < INRSY; j++) {
            va[0].position = intersections[i][j];
            if (i < INRSX) {
                va[1].position = intersections[i + 1][j];
                window.draw(va);
            }
            if (j < INRSY) {
                va[1].position = intersections[i][j + 1];
                window.draw(va);
            }
        }
    }
    //DRAW BUILDINGS
}