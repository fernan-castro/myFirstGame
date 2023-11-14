#include "GameMenu.h"

GameMenu::GameMenu() {

}

GameMenu::~GameMenu() {

}

void GameMenu::setup() {
    

    
    x = ofGetWidth() / 2; // x pos of player
    y = ofGetHeight() / 2; // y pos of player
}

void GameMenu::reset() {

}

void GameMenu::update() {

}

void GameMenu::draw() {
    ofSetWindowTitle("Game Menu");
    ofDrawBitmapString("fefe", x + 5, y); // player name
    ofSetBackgroundColor(255, 0, 0); // background color to red
    ofDrawRectangle(x, y, size, size); // starting pos of player

}

void GameMenu::keyPressed(int key) {
    if (key == 'w' && y > 0) {
        y -= 10;
    }
    else if (key == 'd' && x + size < ofGetWidth()) {
        x += 10;
    }
    else if (key == 'a'&& x > 0) {
        x -= 10;
    }
    else if (key == 's' && y + size < ofGetHeight()) {
        y += 10;
    }
}