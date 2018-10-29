//
//  jellyfish.cpp
//  Midterm
//
//  Created by linyunxuan on 16/10/2018.
//
//

#include "jellyfish.h"

void jellyfish::setup(ofImage &jellyfishImage) {
    img.load("jellyfish.png");
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    vel.x = ofRandom(-5, 5);
    vel.y = ofRandom(-5, 5);
    original = vel;
}


void jellyfish::update(ofPoint attractor, vector<jellyfish> &jellyfish) {
    
    ofPoint acc;
    
    float dist = pos.distance(attractor);
    if(dist < 100) {
        ofPoint dir = attractor - pos;
        dir.normalize();
        
        float force = ofMap(dist, 5, 100, 0, 20);
        acc = dir * force;
    }
    
    for(int i=0; i<jellyfish.size(); i++)
    {
        float dist = pos.distance(jellyfish[i].pos);
        if(dist>0 && dist < 10) {
            ofPoint dir = pos - jellyfish[i].pos;
            dir.normalize();
            float force = ofMap(dist, 0, 20, 0, 100);
            acc = dir * force;
        }
    }
    
  
    vel += acc;
    vel.limit(10);
    pos += vel;
    canvas();
    
    vel *= friction;
    
    if(pos.distance(lastPos) > 1) {
        angle =  atan2(lastPos.y - pos.y, lastPos.x - pos.x);
    }
    lastPos = pos;
}

void jellyfish::free(){
   

        pos += original ;
        canvas();
    
}


void jellyfish::canvas(){
    if(pos.x > ofGetWidth()+10) {
        pos.x = -10;
    }
    if(pos.y > ofGetHeight()+10) {
        pos.y = -10;
    }
    if(pos.x < -10) {
        pos.x = ofGetWidth()+10;
    }
    if(pos.y < -10) {
        pos.y = ofGetHeight()+10;
    }

}


void jellyfish::draw(){
    ofPushMatrix();
    ofTranslate(pos.x, pos.y);
    ofScale(0.2, 0.2);
    img.draw(-img.getWidth()/2.5, -img.getHeight()/1.5);
    ofPopMatrix();
}
















