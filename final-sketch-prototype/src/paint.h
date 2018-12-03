//
//  paint.h
//  final-sketch-prototype
//
//  Created by linyunxuan on 25/11/2018.
//
//

#ifndef paint_h
#define paint_h

#include "ofMain.h"

#endif /* paint_h */
#pragma once



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
