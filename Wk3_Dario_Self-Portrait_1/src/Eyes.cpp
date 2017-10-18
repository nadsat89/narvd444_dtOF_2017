#include "Eyes.h"
Eyes::Eyes() {
}

void Eyes::setup() {
	eyesWidth = 42.5;
	eyesHeight = 19;
	eyesX = 403.67;

	eyesMovx = 424.92;
	eyesMovy = 192.83;
	radius = 8.5;
}

void Eyes::update() {

}

void Eyes::draw() {
	//eyes
	ofSetColor(255);
	ofDrawRectangle(eyesX, 182.5, eyesWidth, eyesHeight);
	ofDrawRectangle(eyesX + 77.5, 182.5, eyesWidth, eyesHeight);

	//eyes-iris
	ofSetColor(101, 79, 64);
	ofDrawCircle(eyesMovx, eyesMovy, radius); 
	ofDrawCircle(eyesMovx + 77.5, eyesMovy, radius);
	
}

