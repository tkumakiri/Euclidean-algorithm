#pragma once

#include "ofMain.h"



class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void divSquare(double xPos, double yPos, double width);
		void divRect(double xPos, double yPos, double wide);

		
		// vector<float> red = vector<float>(1);
		// vector<float> blue = vector<float>(1);
		// vector<float> green = vector<float>(1);
		vector<ofColor> color = vector<ofColor>(1);

		//int scalar = 50;
		double numA/* scalar*/;
		double numB /* scalar*/;
		double ratio; 

		double width;
		double wide;
		int iter;
		int i;
		double xPos;
		double yPos;
		double thr;
};
