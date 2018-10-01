#include "ofApp.h"
void ofApp :: setup () {
    ofSetWindowShape (600, 400);
    ofSetFrameRate (30);
    ofSetCircleResolution (32);
    ofSetRectMode (OF_RECTMODE_CENTER);
    ofSetBackgroundColor (0, 0, 0);
    
   
}
void ofApp :: update () {
  

}
void ofApp :: draw () {
    // setup
    ofTranslate (300, 200);
    ofScale (1, -1);
    // color (orange)
    ofSetColor (183, 124, 86);
    //
    // body
    ofDrawRectangle (0, 0, 50, 80);
    
    // head
    ofDrawCircle (0, 80, 30);
    
    // left leg (upper / lower)
    ofPushMatrix ();
    ofTranslate (- 10, - 45);
    ofRotateZ(-30);
    ofDrawRectangle (0, -35, 20, 50);
    ofTranslate (0, -70);
    ofDrawRectangle (0, -35, 20, 50);
    ofPopMatrix ();
    
    // right leg (upper / lower)
    ofPushMatrix ();
    ofTranslate (10, -45);
    ofDrawRectangle (0, -35, 20, 50);
    ofTranslate (0, -70);
   
    ofDrawRectangle (0, -35, 20, 50);
    ofPopMatrix ();
    
    // left arm (upper / lower)
    ofPushMatrix ();
    ofTranslate (-35, 40);
    ofRotateZ(-40);
    ofDrawRectangle (0, -30, 20, 50);
    ofTranslate (0, -60);
    ofDrawRectangle (0, -30, 20, 20);
    ofPopMatrix ();
    
    // right arm (upper / lower)
    ofPushMatrix ();
    ofTranslate (35, 40);
    ofDrawRectangle (0, -30, 20, 50);
    ofTranslate (0, -60);
    ofDrawRectangle (0, -30, 20, 20);
    ofPopMatrix ();
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


