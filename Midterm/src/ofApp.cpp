#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("jellyfish");
    ofSetWindowShape(1920, 1080);
    ofSetFrameRate(60);
    ofBackground(255, 255, 255);
    ofEnableSmoothing();
   
    jellyfishImage.load("jellyfish.png");
   
    
    
    for(int i=0; i<100; i++)
    {
        jellyfish f;
        f.setup(jellyfishImage);
        myjellyfish.push_back(f);
    }
}



//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<myjellyfish.size(); i++)
    {
        myjellyfish[i].update(mouse, myjellyfish);
    }
}



//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<myjellyfish.size(); i++)
    {
        myjellyfish[i].draw();
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
    mouse.set(x, y);

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
