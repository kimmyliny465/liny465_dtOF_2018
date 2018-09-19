#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for (int i=0; i<30; i++){
        squares[i].setup(0,0,50,50);
        squares[i].dirX = ofRandom(2,10);
        squares[i].dirY = -5;
        
        
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<30; i++){
        squares[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i=0; i<30; i++){
               squares[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
