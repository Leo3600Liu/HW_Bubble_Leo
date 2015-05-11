//Created by Jiteng Liu (Leo)

#pragma once

#include "ofMain.h"
#include "Bubble.h"
#define number 80       //set the number of bubbles

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    vector <Bubble> bubbles;        //set up the vector bubbles
};
