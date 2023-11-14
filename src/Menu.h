#pragma once

#include <string>
using namespace std;

class Menu {
    private:
    string nextMenu;
    bool menuFinished = false;

    public:
    Menu() {};
    virtual void reset() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;
    virtual void keyPressed(int key) = 0;

    // getters
    string getNextMenu() {return nextMenu; }

    bool hasMenuFinished() {return menuFinished; }

    // setters
    void setNextMenu(string nextMenu) {
        this->nextMenu = nextMenu;
    }

    void setFinished(bool menuFinished) {
        this->menuFinished = menuFinished;
    }
};