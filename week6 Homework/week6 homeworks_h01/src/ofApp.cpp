#include "ofApp.h"
#include "fireworkParticles.h"

float timeCount;
fireworkParticles fireworkP[15];
bool launch;


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(17,28,41);
    ofSetWindowShape(1024,768);
    
    launch = false;
    
    for (int i=0; i<10; i++){
        fireworkP[i].setup();
    }
    
    timeCount = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    if(launch == true){
        for (int i=0; i<10; i++){
            fireworkP[i].update();
        }
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (launch == true) {
        for (int i=0; i<10; i++){
            fireworkP[i].draw();
        }
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
     launch = true;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    launch = true;

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
