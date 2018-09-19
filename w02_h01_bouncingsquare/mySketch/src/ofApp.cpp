#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(123);    // set background whatever
    
    ofDrawRectangle(5, 5, 100, 200);       // x: 0, y: 0, width: 100, height: 100
    bSmooth = false;
    // set starting movement direction
   
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
  

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofRectangle();      // draw to screen
    //--------------------------- rectangles
    ofFill();
    for (int i = 300; i < 400; i++){
        ofSetColor((int)ofRandom(0,255),(int)ofRandom(0,255));
        ofDrawRectangle(ofRandom(550,350),ofRandom(750,450),ofRandom(10,20),ofRandom(10,20));
    }
    ofSetHexColor(0x000000);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // the key of s toggles antialiasing
    if (key == 's'){
        bSmooth = !bSmooth;
        if (bSmooth){
            ofEnableAntiAliasing();
        }else{
            ofDisableAntiAliasing();
        }
    }
}
    


//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    
    // some extra keyboard commands:
    
    if (key == 'f') {
        
        // press f to toggle fullscreen / window mode
        ofToggleFullscreen();
    }
    
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
