#include "Luxo.h"

// constructor
Luxo::Luxo() {
	// inside the constructor you initialize the object's variables

	luxoWidth = 140;
	luxoHeight = 182;

	// initial position
	pos.set(0, 70);
	
	vel.set(0, 0);
	acc.set(0, 0);
	

	luxo.load("luxo.png");
}
void Luxo::update(ofVec2f force) {


	acc = force;

	vel += acc;
	pos += vel;

	// check for bounces at edges of window:

	if (pos.x > ofGetWidth()) {
		pos.x = ofGetWidth();
		vel.x *= -1;
	}
	else if (pos.x < 0) {
		vel.x *= -1;
		pos.x = 0;
	}

	if (pos.y > 170) {
		vel.y *= -1;
		pos.y = 170;
	}
		
}


void Luxo::draw() {

	luxo.draw(pos,luxoWidth,luxoHeight);
	
	////Lines
	//ofSetColor(132, 153, 173);
	//ofSetLineWidth(4);
	//ofDrawLine(462,203.833,412.937,252.667);
	//ofDrawLine(412.937, 252.667,399.833,287);
	//ofDrawLine(399.833, 287,426.042,312.167);
	//ofDrawLine(426.042, 312.167,426.042,327.21);

	//ofDrawLine(446.17, 219.59, 446.167, 255.5);
	//ofDrawLine(446.167, 255.5,425.333,279.333);
	//ofDrawLine(425.333, 279.333,445.167,296.833);
	//ofDrawLine(445.167, 296.833,426.042,312.167);

	//ofDrawLine(446.167, 255.5,412.5,256.167);
	//ofDrawLine(425.333, 279.333,399.833,287);


	////top lamp
	//ofBeginShape();
	//ofVertex(454.333,167.833);
	//ofVertex(465,163.833);
	//ofVertex(483.667,177.667);
	//ofVertex(509.5,177.677);
	//ofVertex(523,188.33);
	//ofVertex(471.5,235.333);
	//ofVertex(462,223.5);
	//ofVertex(460.833,196);
	//ofVertex(448.333,179);
	//ofEndShape();

	//ofDrawRectangle(385.667, 327.208, 80.75, 17.75);

	//ofPushMatrix();
	//ofTranslate(496.51, 211.8);
	//ofRotate(45);
	//ofSetColor(255, 238, 163);
	//ofDrawEllipse(0, 0, 32.7, 71.13);
	//ofPopMatrix();

	//ofPushMatrix();
	//ofTranslate(491.99, 207.29);
	//ofRotate(45);
	//ofSetColor(255);
	//ofDrawEllipse(0, 0, 20, 35.95);
	//ofPopMatrix();
}