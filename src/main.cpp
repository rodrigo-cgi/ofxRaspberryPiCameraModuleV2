#include "ofApp.h"

//========================================================================
int main( ){
	
	ofGLESWindowSettings settings;
	settings.setGLESVersion(2);
	ofCreateWindow(settings);
	return ofRunApp(new ofApp);

}
