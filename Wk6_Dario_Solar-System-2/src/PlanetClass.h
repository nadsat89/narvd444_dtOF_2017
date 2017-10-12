#pragma once

#include "ofMain.h"

class PlanetClass {

public:

	void setup();
	void update();
	void draw();

	ofParameterGroup planetGroup;
	ofParameter <float> rotateSpeed;
	ofParameter <float> posX;
	ofParameter <float> posY;
	ofParameter <float> dim;
	ofParameter <int> red;
	ofParameter <int> green;
	ofParameter <int> blue;
	
	vector <ofPoint> points;

	float rotation = 0.0;

	float radius;

};

