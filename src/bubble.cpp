//Created by Jiteng Liu (Leo)

#include "bubble.h"


Bubble::Bubble(){       //set up the bubble code
    pos = ofVec2f(ofGetMouseX(),ofGetMouseY());     //let the bubble follow the mouse
    vel = ofVec2f(ofRandom(-10,10), ofRandom(-10,10));      //the bubbles random period around the mouse
    rad = -30;      //the radius is -30
    myColor = ofColor(ofRandom(100,255));       //set up the period of color
    rot_1 = 2;      //rotate 1 is 2
    rot_2 = -1;     //rotate 2 is -1
    
}

void Bubble::setup(){
    
}

void Bubble::update(){      //give a update code for bubble
    pos +=vel;      //set up the position
    rot_1+=abs(vel.x);
    float distance = ofDist(300,300,pos.x-100, pos.y-100);      //set up the distance
    float bright = ofMap(distance, 0 ,100, 355, 0);     //set up the brightness
    myColor.a=bright;       //make the color equal to bright
}

void Bubble::draw(){        //To excute the code.
    ofSetColor(myColor);        //set up the color
    ofPushMatrix();     //start the matrix
    ofTranslate(pos);       //set up the position
    ofCircle(pos, rad);     //set up the position and radius of circle
    ofPopMatrix();      //finish the matrix
    
    ofPushMatrix();     //start the matrix
    ofRotate(rot_1);        //rotate 1
    ofPushMatrix();
    ofCircle(pos, rad);     //set up the position and radius of circle
    ofPopMatrix();      //finish the matrix
    
    ofPushMatrix();     //start the matrix
    ofRotate(rot_2);        //rotate 2
    ofPushMatrix();
    ofCircle(pos, rad);     //set up the position and radius of circle
    ofPopMatrix();      //finish the matrix
}