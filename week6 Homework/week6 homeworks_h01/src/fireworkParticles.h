//
//  fireworkParticles.h
//  week6 homeworks
//
//  Created by linyunxuan on 06/10/2018.
//
//

#ifndef fireworkParticles_h
#define fireworkParticles_h

#include "ofMain.h"

class fireworkParticles
{
public:
    void setup(){
        //pos & vel
        posL.x = ofRandom(100,1000);
        posL.y = ofGetWindowHeight()-radL;
        velL.x = 0;
        velL.y = ofRandom(-1,-6);
        //color
        colL.r = 249;
        colL.g = 25;
        colL.b = 247;
        //radius
        radL = 6;
        
        for(int i=0; i<500; i++) {
            //Position & Velocity
            posE[i].x = posL.x;
            posE[i].y = ofGetWindowHeight()/2;
            velE[i].x = ofRandom(-2, 2);
            velE[i].y = ofRandom(-2, 2);
            
            accE[i].y = ofRandom(-0.08, 0);
            
            //Radius
            radE[i] = ofRandom(2,2.3);
        }
        //Color
        colE.r = 249;
        colE.g = ofRandom(150, 214);
        colE.b = ofRandom(150, 207);
        
        timeCount = 0;
        
    }
    void update() {
        //--- LAUNCHER ---//
        //Speed
        posL.x += ofRandom(-2, 2);
        posL.y += velL.y;
        
        timeCount += 0.3;
        
        //--- EXPLOSION ---//
        //Explosion IF
        if(posL.y <= ofGetWindowHeight()/2) {
            colL.a = 0;
            for(int i=0; i<500; i++){
                
                if(timeCount >= 15){
                    velE[i] -= accE[i];
                }
                
                posE[i] += velE[i];
                
            }
        }
        //Color
        colE.a -= 0.08;
        
        
    }
    
    void draw() {
        //--- LAUNCHER ---//
        ofSetColor(colL);
        ofDrawCircle(posL, radL);
        
        //--- EXPLOSION ---//
        if (posL.y <= ofGetWindowHeight()/2){
            for(int i=0; i < 500;  i++) {
                ofSetColor(colE);
                ofDrawCircle(posE[i], radE[i]);
            }
        }
        
        
    }
   
    //Launch = L
    ofPoint posL;
    ofPoint velL;
    ofColor colL;
    
    //Explosion = E
    ofPoint posE[500];
    ofPoint velE[500];
    ofColor colE;
    ofPoint accE[500];
    
    float timeCount;
    float radE[500];
    int radL;
};


#endif /* fireworkParticles_h */
