#include "Building.h"
#include "City.h"
using namespace std;

int main() {

    srand(time(NULL));

    RenderWindow window(VideoMode(SCREEN_SIZE, SCREEN_SIZE), "Tokyo");
    window.requestFocus();
    window.setMouseCursorVisible(true);
    window.setFramerateLimit(10);
    Building b(0, 0, 11);
    City c(20);

    while( window.isOpen() ) {
        window.clear(Color::Black);

//        b.draw(window);
        c.draw(window);

        window.display();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            } else if (event.type == Event::KeyPressed) {
                switch (event.key.code) {
                    case Keyboard::Escape:
                    case Keyboard::Q:
                        window.close();
                        break;
                }
            }
        }
    }

    return EXIT_SUCCESS;
}