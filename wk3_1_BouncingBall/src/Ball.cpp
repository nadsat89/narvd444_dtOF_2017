#include "Ball.h"

// constructor
Ball::Ball() {

	// inside the constructor you initialize the object's variables

	radius = ofRandom(4,6);			

	// random color
	float red	= ofRandom(0,10);
	float green	= ofRandom(0,10);		
	float blue	= ofRandom(0,10);
	color = ofColor(red, green, blue);

	// random position in window
	//pos.x = ofRandom(radius, ofGetWidth()  - radius);
	//pos.y = ofRandom(radius, ofGetHeight() - radius);
	pos.x = ofGetWidth()/2;
	pos.y = 50;

	// random x and y speeds/directions between -10 and 10
	dir.x = ofRandom(-0.1,0.1);
	dir.y = ofRandom(0,0.1);
    
    
}

// update position, etc.
void Ball::update(ofVec2f force) {
    
    acc = force;
    
    dir+=acc;
    pos+=dir;

	// check for bounces at edges of window:

	// check left
	//if (pos.x <= radius) {
		//pos.x = radius;			// set the position back to the edge of window
		//dir.x = .7 * dir.x;		// and reverse direction
	//}
	// check right
	//if (pos.x >= ofGetWidth() - radius) {
		//pos.x = ofGetWidth() - radius;			// similar to above
		//dir.x = .7 * dir.x; // slow down
	//}

	// check top and bottom
	//if (pos.y <= radius) {
		//pos.y = radius;
		//dir.y = .7 * dir.y;
	//}
	//else if (pos.y >= ofGetHeight() - radius) {
		//pos.y = ofGetHeight() - radius;
		//dir.y = .7 * dir.y;
	//}
}


// draw the ball
void Ball::draw() {

	ofSetColor(color);				// set the GLOBAL color
	ofDrawCircle(pos, radius);		// and draw
}


void Ball::_keyPressed() {

	if (_key == 's') {
		pos.x = ofGetWidth();
	}

	
}

void Ball::_keyPressed(int _key)
{
}
