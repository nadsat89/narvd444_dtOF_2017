#include "Drop.h"

// constructor
Drop::Drop() {
	
}

void Drop::setup() {

	x = ofRandom(240); //reference the image location //this defines the width of the rain area
	y = ofRandom(-500, -50); //reference the image location
	z = ofRandom(0, 20); //
	L = ofMap(z, 0, 20, 10, 20);
	yspeed = ofMap(z, 0, 20, 1, 20);
	opacity = ofRandom(10, 255);
}

void Drop::update() {
	y = y + yspeed;
	float grav = ofMap(z, 0, 20, 0, 0.2);
	y = y + grav;
	yspeed = yspeed + 0.01;

	if (y > ofGetHeight()) {
		y = ofRandom(-200, -100);
		yspeed = ofMap(z, 0, 20, 1, 20);
	}

	//cout << y << endl;

}

void Drop::draw() {
	ofSetColor(255, opacity);
	ofDrawLine(x-125, y+200, x-125, y+200 + L);
	ofSetColor(255, 255); //to return the color to the icon image
}
