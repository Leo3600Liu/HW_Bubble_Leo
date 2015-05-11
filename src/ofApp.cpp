//Created by Jiteng Liu (Leo)

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){        //To define the basic environment conditions before the program starts.
    ofSetCircleResolution(ofRandom(3,4));       //set up the random period
}

//--------------------------------------------------------------
void ofApp::update(){       //to give more orders to code
    Bubble tempBubble;      //name a new vector temBubble
    bubbles. push_back(tempBubble);     //push the bubble
    for (int i=0; i<bubbles.size(); i++){       //set up the size period
        bubbles[i].update();
        float distance = ofDist (400, 400, bubbles[i].pos.x, bubbles[i].pos.y);     //set up the distance
        if (distance>500){      //set up the biggest distance
            bubbles.erase(bubbles.begin()+i);       //erase some bubbles wich already show up
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){     //To excute the code.
    for (int i=0; i<number; i++){       //set up the number
    bubbles[i].draw();      //draw the bubbles
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
