#pragma once

#include "ofMain.h"
#include "ofxCv.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();

	int contourThreshold;
	ofVideoGrabber camera;
	cv::Mat grayScaleImage;

	bool learn = true;


};
