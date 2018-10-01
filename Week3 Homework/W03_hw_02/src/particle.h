//
//  particle.h
//  W03_hw_02
//
//  Created by linyunxuan on 24/09/2018.
//
//

#pragma once

#include "ofMain.h"

class Particle{
    
public:
    Particle();
    void resetForce();
    void addDampingForce();
    void setInitialCondition(ofPoint _pos, ofPoint _vel);
    void update();
    void draw();
    void addRepulsionForce(ofPoint _pos, float _radius, float _strength);
    void addAttractionForce( ofPoint _pos, float _radius, float _strength);
    
private:
    ofPoint pos, vel, force; //force is also known an acceleration. Newton F = ma
    float damping;
    
    
    
};
