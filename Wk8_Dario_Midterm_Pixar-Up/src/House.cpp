#include "House.h"

// constructor
House::House() {
	// inside the constructor you initialize the object's variables

	pos.set(940, 815);
	
	houseWidth = 120;
	houseHeight = 141;

	// random x and y speeds/directions between -10 and 10
	vel.x = ofRandom(-1, 1);
	vel.y = ofRandom(-1, 1);


	house.load("UP_Game_Pixar_House.png");
}

void House::setup(float g) {
	gravity = g;
}

// update position, etc.
void House::update(ofVec2f force) {

	pos.y = pos.y + gravity - liftForce; 

	//This avoid the house to go after land (ground and mountain)
	if (pos.x >= 625 && pos.y > 815) {
		pos.y = 815;
	}
	if (pos.x < 625 && pos.y > 450) {
		pos.y = 450;
	}

	// Indicate where we can create balloons
	if (ofDist(ofGetMouseX(), ofGetMouseY(), pos.x, pos.y - 150) < 90) {
		createBalloons = true;
	}
	else {
		createBalloons = false;
	}
}

void House::draw() {

	house.draw(pos.x-60,pos.y,houseWidth,houseHeight);
	//ofDrawEllipse(pos.x, pos.y - 150, 200, 200); // area ballons

	//ofDrawCircle(pos.x,pos.y + 141, 5); dot house verification area
}

ofVec2f House::getPos() { //getting the position of the chimenea to use it in the ballon strings
	return pos;
}

void House::setLiftForce(float temp) {
	liftForce = temp;
}

void House::setPos(ofVec2f temp) { //we set this as a function in order to used in ofApp
	pos = temp;
}

bool House::canCreateBalloons() { //returns the position of the balloon in y to be used in the ofApp. To move the balloons along the house
	return createBalloons;
}
