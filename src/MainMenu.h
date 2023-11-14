#pragma once

#include "ofMain.h"
#include "Menu.h"

class MainMenu : public Menu {

    public:
    MainMenu();
    ~MainMenu();
    void setup();
    void reset();
    void update();
    void draw();
    void keyPressed(int key);
    string start = "Press ur name and enter";
};