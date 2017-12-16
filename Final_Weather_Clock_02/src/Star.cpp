#include "Star.h"

// constructor
Star::Star() {
	
}

void Star::setup(int posX, int posY, float s) {
	x = posX;
	y = posY;
	size = s;
}

void Star::update() {


}

void Star::draw() {
	//ofSetColor(255, ofMap(size,1,3,50,150)); //changing the opacity of start depending of the size
	ofDrawEllipse(x, y, size, size);
}

void Star::setSize(float s) {
	size = s;
}