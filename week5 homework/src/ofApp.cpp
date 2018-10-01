#include "ofApp.h"
void ofApp :: setup () {
    ofSetWindowShape(1080, 768);
    ofSetFrameRate(30);
    ofSetBackgroundColor(255,255,255);
    //var
    rad = 0.0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    rad += 0.05;
    posX = 600 +150 * cos(rad);
    posY = 400 +150 * sin(rad);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
   //circle
    ofSetColor(215, 190, 69);
    ofDrawCircle(posX, posY, 70);
    
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
