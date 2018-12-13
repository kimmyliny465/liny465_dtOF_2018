#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    bg.load("bg.png");
    
    
    cam.listDevices(); // if have multiple devices
    
    cam.setup (640,480);  //1280,720 (1920 *1080)
    
    finder.setup("haarcascade_frontalface_default.xml");
    
    finder.setPreset(ObjectFinder::Preset::Fast);
    // other presets: Accurate or Sensitive
    
    //    Mat myCvImage;
    
    face.load("face.png");
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    cam.update();
    
    if (cam.isFrameNew()){
        
        //        ofImage img;
        //        img.load("image.png");
        //        Mat imgMat = toCv(img);
        
        finder.update(cam);  //update the face tracker
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.draw(0,0);
    
    ofNoFill();
    
    bg.draw(0,0, 640, 720);
    
//    for (int i=0; i<finder.size(); i++){
//        
//        
//        // or finder.getObject(i) <-- raw face postion
//        
//        ofPushStyle();
//        float hue = ofMap(i, 0, finder.size()-1, 0, 255);
//        ofSetColor(ofColor::fromHsb(hue,255,255));
//        ofDrawRectangle(face);
//        ofPopStyle();
//        
//       
//        
//        ofPushMatrix();
//        ofTranslate(face.getLeft(),face.getBottom()+ 20, 0);
//        
//        
//        stringstream ss;
//        ss << "face:" << finder.getLabel(i);
//        ofDrawBitmapStringHighlight(ss.str(),0,0);
//        
//        ofPopMatrix();
        
        
        
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
