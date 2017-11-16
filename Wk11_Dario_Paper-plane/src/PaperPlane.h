#pragma once

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class PaperPlane {

public:

	void setup();
	void update();
	void draw();

	ofxAssimpModelLoader paperPlane;

	ofParameterGroup planeGroup;
	ofParameter <float> scaleX;
	ofParameter <float> scaleY;
	ofParameter <float> scaleZ;
	ofParameter <int> red;
	ofParameter <int> green;
	ofParameter <int> blue;
		

};
