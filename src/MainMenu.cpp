#include "MainMenu.h"
#include <iostream>

MainMenu::MainMenu() {

}

MainMenu::~MainMenu() {

}

void MainMenu::setup() {
    ofSetWindowTitle("Main Menu");
    ofSetBackgroundColor(0);
}

void MainMenu::reset() {

}

void MainMenu::update() {

}

void MainMenu::draw() {
    ofSetWindowTitle("Main Menu");
    ofDrawBitmapString(start, ofGetWidth() / 2, ofGetHeight() / 2);
}

void MainMenu::keyPressed(int key) {
    if (key == OF_KEY_RETURN) {
        setFinished(true);
        setNextMenu("GameMenu");
        return;
    }
}