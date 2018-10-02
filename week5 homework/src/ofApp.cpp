#include "ofApp.h"

void ofApp::setup(){
    ofSetWindowShape(1000,768);
    ofBackground(188, 63, 107);
    for(int i = 0; i < 1000; i++){
        int x = ofRandom(ofGetWindowWidth());
        int y = ofRandom(ofGetWindowHeight());
        posX.push_back(x);
        ofPoint p = ofPoint(x,y);
        leaf.push_back(p);
    }
}
void ofApp::update(){
    
        for(int i = 0; i < leaf.size(); i++){
            if(leaf[i].y<ofGetWindowHeight()){
                leaf[i].y += 1;
                leaf[i].x = 2 * ofMap(ofNoise((ofGetFrameNum()+posX[i])/100.0),0,1,0,ofGetWindowWidth())-ofGetWindowWidth()/2.2;
            }
        }
    
}
void ofApp::draw(){
    for(int i = 0; i < leaf.size(); i++){
        ofDrawEllipse(leaf[i], 5, 5);
    }
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 't'){
    ofSetColor(ofColor::fromHsb(int(ofGetElapsedTimef() * 10) % 255,255,255));
        ; // do sth
        for(int i = 0; i < leaf.size(); i++){
            int x = ofRandom(ofGetWindowWidth());
            int y = ofRandom(ofGetWindowHeight());
            posX[i] = x;
            leaf[i].set(x,y);
        }
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


