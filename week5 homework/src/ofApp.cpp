#include "ofApp.h"

void ofApp::setup(){
    ofSetWindowShape(1080,768);
}
void ofApp::update(){
    x += 1;
    y = ofNoise(ofGetFrameNum()/100.0) * 768;
}
void ofApp::draw(){
    ofBackground(130, 73, 107);
    
    ofDrawCircle(x, y, 25, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 't'){
    ofSetColor(ofColor::fromHsb(int(ofGetElapsedTimef() * 10) % 255,255,255));
        ; // do sth
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


