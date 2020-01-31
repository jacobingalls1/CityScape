#include "Building.h"

Building::Building(float x, float y, int h, float r) {
    pos.x = x;
    pos.y = y;
    height = h;
    rot = r;
}

void Building::draw(RenderWindow &window) {
    RectangleShape rect;
    bool black = true;
    rect.setPosition(500 - (FW / 2), 700);
    rect.setSize(Vector2f(FW, FW));
    rect.setRotation(rot);
    for (int i = 0; i < height; i++) {
        rect.setPosition(rect.getPosition() + Vector2f(0, -FH));
        black = !black;
        if (black) {
            rect.setFillColor(OFF);
        } else {
            rect.setFillColor(LIT);
        }
        window.draw(rect);
    }
}