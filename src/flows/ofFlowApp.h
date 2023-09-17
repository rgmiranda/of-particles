#pragma once

#include "ofMain.h"
#include "flowParticle.h"
#include "ofxGui.h"

class ofFlowApp : public ofBaseApp{

	private:
		const int numParticles = 4096;
		ofImage img;

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

		vector<flowParticle>p;

		ofxPanel gui;
		ofxFloatSlider speed
	;
		ofxFloatSlider frequency;
		ofxFloatSlider trail;
		
};
