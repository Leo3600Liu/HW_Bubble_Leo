//Created by Jiteng Liu (Leo)

#ifndef __Bubble__bubble__
#define __Bubble__bubble__

#include <ofMain.h>

class Bubble{
    
public:
    Bubble();       //name bubble
    
    void setup();       //set up it in ofApp.cpp
    void update();      //set up it in ofApp.cpp
    void draw();        //set up it in ofApp.cpp

    ofVec2f pos;        //set up the position
    ofVec2f vel;        //set up the velocity
    float rad;      //give the code radius
    ofColor myColor;        //set up myColor

    float rot_1;        //hand out rotate 1
    float rot_2;        //hand out rotate 2
};

#endif /* defined(__Bubble__bubble__) */
