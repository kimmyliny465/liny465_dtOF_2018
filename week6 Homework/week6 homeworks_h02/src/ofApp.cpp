#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1024,768);
}

void ofApp::update(){
    
}

void ofApp::draw(){
    ofBackground(255);
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    recursion(800,0);
}

void ofApp::recursion(float r,int num){
    if(r > 10){
        if(r > 50){
            ofNoFill();
            ofSetColor(0);
        }else{
            ofFill();
            ofSetColor(0);
        }
        float ratio = mouseX/(float)ofGetWidth();
        if(ratio > 0.2){
            ratio = 0.2;
        }
        r = r * ratio;
        num ++;
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofDrawCircle(0, 0, r);
        
     
        ofPushMatrix();
        ofRotate(ofGetElapsedTimef() * num * 10);
        ofTranslate(-r,-r);
        recursion(r,num);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(ofGetElapsedTimef() * num * 10);
        ofTranslate(-r,r);
        recursion(r,num);
        ofPopMatrix();

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
