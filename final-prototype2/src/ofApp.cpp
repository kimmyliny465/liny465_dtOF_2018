#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bgImage.load("hello.png");
    dadaImage.load("dada.png");
    cam.setup (1000,1000);
    ofBackground(0);
    cam.listDevices();// possible choice 1280,720 (1920,1080)
    
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
    cam.draw(0,0);
    bgImage.draw(0,0,640,720);
    
    
    // linedraw function
    line.draw();
    
    
    // draw webcam center screen:
    glm::vec2 camSize = glm::vec2(cam.getWidth(),cam.getHeight());
    glm::vec2 camPos  = ofGetWindowSize()*0.05 - camSize*0.05;
    ofTranslate( camPos );
    

    // draw on faces
    for (int i=0; i<finder.size(); i++){
        
        // get box around the face:
        ofRectangle face = finder.getObjectSmoothed(i);
        
        // smoothed over time
        // or face = finder.getObject(i); <-- raw face position

        
        ofPushStyle();
        
        // assign color by face ID
        int faceID  = finder.getLabel(i);
        float hue   = (faceID * 55) % 255;  // offset hue by id
        ofSetColor( ofColor::fromHsb(hue, 255,255));
        
        // draw face box
        
        ofNoFill();
        ofDrawRectangle( face );
        
        
        // draw eyebrow
        
        ofPushMatrix();
        ofTranslate(face.getCenter().x, face.getCenter().y);
        dadaImage.draw(-130,-105,300,100);
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

