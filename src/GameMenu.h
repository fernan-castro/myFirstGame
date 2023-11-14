#pragma once

#include "ofMain.h"
#include "Menu.h"

class GameMenu : public Menu {
    private:

    public:
    GameMenu();
    ~GameMenu();
    void setup();
    void reset();
    void update();
    void draw();
    void keyPressed(int key);

    int x, y; // position of player
	int size = 50; // size of player
};