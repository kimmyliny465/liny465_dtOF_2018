//
//  rectangle.cpp
//  mySketch
//
//  Created by linyunxuan on 10/09/2018.
//

#include "rectangle.hpp"
// --------------------------------------------------------
void Rectangle: setup(float posX, float posY, float width, float height){
        
        // setup position and size
        
        x = posX;
        y = posY;
        w = width;
        h = height;
        
        // default to no movement yet - we can set it later
        
        dirX = 0;
        dirY = 0;
}

// --------------------------------------------------------
void Rectangle::update(){
        
        // move: update position x and y
        
        x += dirX;
        y += dirY;
        
        // bounce:
        
        // check if we moved out of window frame
        
        if(x > ofGetWidth()){
                // if we're too far right...
                
                // bounce
                x = ofGetWidth();        // put back in window
                dirX = dirX * -1;        // flip x movement
                
            }
        else if (x < 0){
                // bounce off left edge
                
                x = 0;
                dirX = dirX * -1;
            }
        
        
        if(y > ofGetHeight()){
                // bounce bottom edge
                
                y = ofGetHeight();
                dirY = dirY * -1;
            }
        else if (y < 0){
                // or bounce top edge
                
                y = 0;
                dirY = dirY * -1;
            }
        
}

// --------------------------------------------------------
void rectangle::draw(){
        ofDrawRectangle(x,y,w,h);
        // draw a simple rectangle on screen
}

//

