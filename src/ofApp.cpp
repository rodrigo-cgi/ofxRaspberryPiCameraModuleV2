#include "ofApp.h"
#include <algorithm>
#include <vector>

//--------------------------------------------------------------
void ofApp::setup(){

    // Camera:
    //
    //
    camera.setPixelFormat(OF_PIXELS_NATIVE);
    camera.setDeviceID(0);
    camera.setDesiredFrameRate(30);
    camera.setup(1280, 720);

    std::cout << "PIXEL FORMAT: " << camera.getPixels().getPixelFormat() << std::endl;
    
    // fastest way to capture grayscale image out of the RaspBerry Pi Camera Module V2
    grayScaleImage = ofxCv::toCv(camera.getPixels().getPlane(0));
}

//--------------------------------------------------------------
void ofApp::update(){

    camera.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){


    ofSetBackgroundColor(50.0, 50.0, 50.0);
    camera.draw(0,0, ofGetWidth() , ofGetHeight());

}

//--------------------------------------------------------------
