#include "ofApp.h"

ofVec2f vel;
ofVec2f acc;
ofVec2f pos;
ofVec2f wind;
float radius;

   
  
  float born;
  ofColor color;





//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1024, 768);
    ofSetWindowTitle("Wind");
    
    ofBackground(255, 100, 188);
    
    pos.x = ofGetWidth()*0.5;
    pos.y = ofGetHeight()*0.5;
    
    vel.x = 0;
    vel.y = 0.5;
    
    acc.x = 0;
    acc.y = 0.5;
    
    wind.x = 0.8;
    wind.y = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    vel += acc;
    pos += vel;
    
    if(pos.y>ofGetHeight() - radius){
        pos.y = ofGetHeight() - radius;
        vel.y *= -1;
    }
    else if(pos.y < 0){
        pos.y = 0;
        vel.y *= -1;
    }
   
    
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    ofDrawCircle(pos, 40 );
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_RIGHT) {
        vel += wind;
    }
    else if (key == OF_KEY_LEFT) {
        vel -= wind;
    }
    vel += acc;
    pos += vel;
    
   
    radius = ofRandom(10, 20);
    
    
    
    
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
