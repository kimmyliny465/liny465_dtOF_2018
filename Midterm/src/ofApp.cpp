#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("jellyfish");
    ofSetWindowShape(800, 375);
    ofSetFrameRate(100);
    ofBackground(255, 255, 255);
    ofEnableSmoothing();
   
    jellyfishImage.load("jellyfish.png");
    bgImage.load("bg.jpg");
    lightImage.load("light.png");
    
    
    
   
    
    
    for(int i=0; i<40; i++)
    {
        jellyfish f;
        f.setup(jellyfishImage);
        myjellyfish.push_back(f);
    }
}



//--------------------------------------------------------------
void ofApp::update(){
   
    if(!positionChanged()){
        for(int i=0; i<myjellyfish.size(); i++)
        {
            myjellyfish[i].update(mouse, myjellyfish);
        }
    }else{
    
        for(int i=0; i<myjellyfish.size(); i++)
        {
            myjellyfish[i].free();
        }
    }
}



//--------------------------------------------------------------
void ofApp::draw(){
    bgImage.draw(0,0, 800, 375);
    lightImage.draw(mouse.x-180, mouse.y-200);
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
    preX = mouse.x;
    preY = mouse.y;
    mouse.set(x, y);
    

}

bool ofApp::positionChanged(){
    if(mouse.x == preX && mouse.y == preY){
        return false;
    }
    return true;
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
