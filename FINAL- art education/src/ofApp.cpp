#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bgImage.load("hello.png");
    dadaImage.load("dada.png");
    coverImage.load("frida.jpg");
    maxImage.load("max.jpg");
    contentImage.load("content.jpg");
    
    cam.setup (1000,1000);
    ofBackground(0);
    cam.listDevices();
    
    
    finder.setup("haarcascade_frontalface_default.xml");
    finder.setPreset( ObjectFinder::Preset::Fast );
    finder.getTracker().setPersistence( 10 );
    
    
}
//--------------------------------------------------------------
void ofApp::update(){
    
    cam.update();
    
    if (cam.isFrameNew()) {
        finder.update(cam);
    
    }
}



//--------------------------------------------------------------
void ofApp::draw(){
    
    if (a == 0) {
        home();
    }else if(a == 1){
        play();
    }else if(a == 2){
        max();
    }else if (a == 3){
        content();
    }
    
}

//--------------------------------------------------------------
void ofApp::home(){
    coverImage.draw(0,0);
}

void ofApp::max(){
 
    maxImage.draw(0,0);
}

void ofApp::content(){
   
    contentImage.draw(0,0);
}

void ofApp::play(){
    
        cam.draw(0,0);
        bgImage.draw(0,0,640,720);
        
        
        // linedrawing function
        line.draw();
        
        
        // cam pos
        glm::vec2 camSize = glm::vec2(cam.getWidth(),cam.getHeight());
        glm::vec2 camPos  = ofGetWindowSize()*0.05 - camSize*0.05;
        ofTranslate( camPos);
        
        
        // draw on faces
        for (int i=0; i<finder.size(); i++){
            
            // box
            ofRectangle face = finder.getObjectSmoothed(i);
            
            
            // color
            int faceID  = finder.getLabel(i);
            float hue   = (faceID * 55) % 255;
//            ofSetColor( ofColor::fromHsb(hue, 255,255));
            
            // draw face box
            
            ofNoFill();
            ofDrawRectangle( face );
            
            
            // draw eyebrow
            
            ofPushMatrix();
            ofTranslate(face.getCenter().x, face.getCenter().y);
            dadaImage.draw(-130,-105,260,100);
            ofPopMatrix();
            
        }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_RETURN) {
        a++;
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
    
    ofPoint pt;
    pt.set(x,y);
    line.addVertex(pt);
    
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    line.clear();
    
    
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


