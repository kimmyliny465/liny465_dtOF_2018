#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bgImage.load("hello.png");
    cam.setup (1000,500);
    ofBackground(0);
    cam.listDevices();
      //1280,720 (1920,1080)
    finder.setup("haarcascade_frontalface_default.xml");
    finder.setPreset(ObjectFinder::Preset::Fast);
    
//    cam.setup(640,1000);
    gui.setup();
    gui.add(minArea.set("Min area", 10, 1, 100));
    gui.add(maxArea.set("Max area", 200, 1, 500));
    gui.add(threshold.set("Threshold", 128, 0, 255));
    gui.add(holes.set("Holes", false));
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
     cam.update();
     if(cam.isFrameNew()) {
        contourFinder.setMinAreaRadius(minArea);
        contourFinder.setMaxAreaRadius(maxArea);
        contourFinder.setThreshold(threshold);
        contourFinder.findContours(cam);
        contourFinder.setFindHoles(holes);
    }
    
}
    


//--------------------------------------------------------------
void ofApp::draw(){
        cam.draw(0,0);
    bgImage.draw(0,0,640,720);
    
    contourFinder.draw();
    gui.draw();
        
        ofNoFill();
        for (int i=0; i<finder.size(); i++){
                
                ofRectangle face = finder.getObjectSmoothed(i);
                // or finder.getObject(i) <-- raw face postion
                
                ofPushStyle();
                float hue = ofMap(i, 0, finder.size()-1, 0, 255);
                ofSetColor(ofColor::fromHsb(hue,255,255));
                ofDrawRectangle(face);
                ofPopStyle();
    
           
                ofPushMatrix();
                ofTranslate(face.getLeft(),face.getBottom()+ 20, 0);
                
                
                stringstream ss;
                ss << "face:" << finder.getLabel(i);
                ofDrawBitmapStringHighlight(ss.str(),0,0);
                
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
