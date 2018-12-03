#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
     bgImage.load("bg.png");
     ofBackground(0);
     cam.listDevices();
      cam.setup (1920,1080);  //1280,720 (1920,1080)
      finder.setup("haarcascade_frontalface_default.xml");
      finder.setPreset(ObjectFinder::Preset::Fast);
      // other presets: Accurate or Sensitive
      //    Mat myCvImage;
//      cone.set(100,200,10,20);
    
}

//--------------------------------------------------------------
void ofApp::update(){
      cam.update();
      if (cam.isFrameNew()){
        //        ofImage img;
        //        img.load("image.png");
        //        Mat imgMat = toCv(img);
                
                finder.update(cam);  //update the face tracker
            }
        
    
}

//--------------------------------------------------------------
void ofApp::draw(){
        cam.draw(0,0);
        bgImage.draw(0,0,1280,720);
        
        ofNoFill();
        for (int i=0; i<finder.size(); i++){
                
                ofRectangle face = finder.getObjectSmoothed(i);
                // or finder.getObject(i) <-- raw face postion
                
                ofPushStyle();
                float hue = ofMap(i, 0, finder.size()-1, 0, 255);
                ofSetColor(ofColor::fromHsb(hue,255,255));
                ofDrawRectangle(face);
                ofPopStyle();
                
//                // draw hat
//                ofPushMatrix();
//                ofTranslate(face.getCenter().x,face.getTop()- 50, 0);
//                cone.set(face.getWidth()/2, face.getHeight());
//                cone.draw();
//                ofPopMatrix();
                
        //        string text;
        //        text = "face:" + ofToString(i);
           
                ofPushMatrix();
                ofTranslate(face.getLeft(),face.getBottom()+ 20, 0);
                
                
                stringstream ss;
                ss << "face:" << finder.getLabel(i);
                ofDrawBitmapStringHighlight(ss.str(),0,0);
                
                ofPopMatrix();
                
//                // draw velocity
//                
//                glm::vec2 vel = toOf(finder.getVelocity(i)* -5);
//                ofPushMatrix();
//                ofTranslate(face.getCenter() );
//                ofDrawCircle(0,0,2);
//                ofDrawLine(0,0,vel.x,vel.y);
//                ofPopMatrix();
                
                
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
