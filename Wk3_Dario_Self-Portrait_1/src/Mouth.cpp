#include "Mouth.h"
Mouth::Mouth() {
}

void Mouth::setup() {
	mouthHeight = 3.67;
}

void Mouth::update() {

}

void Mouth::draw() {
	
	ofSetColor(196, 177, 153);
	ofDrawEllipse(462, 258.5, 43.33, mouthHeight);
	
}

