#pragma once

#include "ofMain.h"

#include "ofxCv.h"  // compatibility layer with OF
#include "ofxOpenCv.h" // includes OpenCv library

using namespace cv;
using namespace ofxCv;


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage painting;
    ofVideoGrabber cam;
    // images, of video player etc...
    
    ofxCv::ObjectFinder finder; // use decirbe files here, generic object finder // will use this as a face tracker (mayuse full body detector)
    
//    ofConePrimitive cone;
    ofImage bgImage;
    
    
    
    
};
