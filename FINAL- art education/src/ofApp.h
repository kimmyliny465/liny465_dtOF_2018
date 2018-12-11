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
    void home();
    void play();
    void max();
    void content();
    
    
    
    ofxCv::ObjectFinder finder;
    
    ofImage bgImage;
    ofImage dadaImage;
    ofImage coverImage;
    ofImage maxImage;
    ofImage contentImage;
    
    ofVideoGrabber cam;
    int a = 0;
    
    
    ofPolyline line;
    
    
    
    
};
