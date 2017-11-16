#include "PaperPlane.h"

void PaperPlane::setup() {
	paperPlane.loadModel("paper-plane.obj", 20);
	
	paperPlane.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 0);

	planeGroup.add(scaleX.set("Scale X", 1, 0.1, 3));
	planeGroup.add(scaleY.set("Scale Y", 1, 0.1, 3));
	planeGroup.add(scaleZ.set("Scale Z", 1, 0.1, 3));

	planeGroup.add(red.set("red", 255, 0, 255));
	planeGroup.add(green.set("green", 255, 0, 255));
	planeGroup.add(blue.set("blue", 255, 0, 255));
}

void PaperPlane::update() {

	float time = ofGetElapsedTimef();

	ofVec3f planePos = paperPlane.getPosition();
	
	paperPlane.setPosition(planePos.x += cos(time) * 0.1 * 1.5, planePos.y += sin(time) * 0.1 * 1.5, planePos.z += sin(time * 2.) * 0.1 * 1.5);

	paperPlane.setScale(scaleX, scaleY, scaleZ);
}

void PaperPlane::draw() {
	
	ofSetColor(red,green,blue);
	paperPlane.drawFaces();

}

