#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 0, 0); // background color to red
    x = ofGetWidth() / 2; // x pos of player
    y = ofGetHeight() / 2; // y pos of player
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString("fefe", x + 5, y); // player name
    ofDrawRectangle(x, y, size, size); // starting pos of player
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    // movement
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

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
