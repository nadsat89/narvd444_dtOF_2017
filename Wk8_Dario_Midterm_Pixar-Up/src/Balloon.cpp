#include "Balloon.h"
Balloon::Balloon() {
}

void Balloon::setup(float _x, float _y, float g) { //passing variables from principal
	pos.x = _x;
	pos.y = _y;
	dim = 7;
	gravity = g;

	speedX = ofRandom(-0.1, 0.1);
	speedY = ofRandom(-0.1, 0.1);

	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Balloon::update() {
	
	pos.x += speedX;
	pos.y += speedY;

	// The balloons bounce against an specific area
	if (ofDist(pos.x, pos.y, housePos.x, housePos.y - 150)>100) {
		speedX *= -1;
		speedY *= -1;
	}

	//This avoid the balloons to go after land (ground and mountain)
	if (housePos.x >= 625 && housePos.y < 815) {
		pos.y = pos.y + gravity - liftForce;
	}
	if (housePos.x < 625 && housePos.y < 450) {
		pos.y = pos.y + gravity - liftForce;
	}
}

void Balloon::draw() {
	ofPushStyle();
	ofSetColor(100,30);
	ofSetLineWidth(0.01);
	ofDrawLine(pos.x, pos.y + dim/2, housePos.x,housePos.y); 
		
	ofSetColor(color,80); 
	ofDrawEllipse(pos.x, pos.y, dim, dim*ofRandom(1.3,2));//Random is for making random sizes
	ofPopStyle();
}

void Balloon::setHousePos(ofVec2f housePosTemp) {
	housePos = housePosTemp;
}

void Balloon::setPos(ofVec2f temp) { //we set this as a function in order to used in ofApp
	pos = temp;
}

void Balloon::setLiftForce(float temp) { //we set this as a function in order to used in ofApp
	liftForce = temp;
}

ofVec2f Balloon::getPos() { //returns the position of the balloon in y to be used in the ofApp. To move the balloons along the house
	return pos;
}

