//
//  jellyfish.h
//  Midterm
//
//  Created by linyunxuan on 16/10/2018.
//
//

#ifndef jellyfish_h
#define jellyfish_h

#include "ofMain.h"

#endif /* jellyfish_h */

#pragma once


class jellyfish {
public:
    
    void setup(ofImage& jellyfishImage);
    void update(ofPoint attractor, vector<jellyfish>& jellyfish);
    void canvas();
    void draw();
    
    ofImage img;
    ofPoint pos;
    ofPoint lastPos;
    ofPoint vel;
    
    float angle;
    float friction = 0.9;
};
