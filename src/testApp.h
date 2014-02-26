#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "ofxPanel.h"

class testApp : public ofBaseApp {
public:

	void setup();
	void update();
	void draw();
	void exit();
	void drawPointCloud();
	void keyPressed(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);

	ofxKinect kinect;

	ofxCvColorImage colorImg;
	ofImage selectedImg;
	ofxCvGrayscaleImage grayImage1, // grayscale depth image
                        grayImage2, // grayscale depth image
                        grayThreshNear, // the near thresholded image
                        grayThreshMid1, // the mid thresholded image
                        grayThreshMid2, // the mid thresholded image
                        grayThreshFar; // the far thresholded image
	ofxCvContourFinder contourFinder1,
                       contourFinder2;
	ofEasyCam easyCam; // used for viewing the point cloud

    //GUI
	ofxIntSlider threshSlider1,
                 threshSlider2;
	ofxPanel gui;

	bool bDrawPointCloud;
	int angle;

	vector<ofVec2f> corners;
    ofVec2f mousePt;
    ofRectangle rect;
};
