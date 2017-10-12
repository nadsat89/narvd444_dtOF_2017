
#include "PlanetClass.h"

void PlanetClass::setup() {
	planetGroup.add(rotateSpeed.set("speed", 1.0, 0.0, 9.0));
	planetGroup.add(posX.set("X", 0, 0, 600));
	planetGroup.add(posY.set("Y", 0, 0, 600));
	planetGroup.add(dim.set("Diameter", 10, 1, 40));


	planetGroup.add(red.set("red", 255, 0, 255));
	planetGroup.add(green.set("green", 255, 0, 255));
	planetGroup.add(blue.set("blue", 255, 0, 255));

	radius = 200;
}

void PlanetClass::update() {
	rotation++;
	//radius = radius + 0.1; //comment this if I want a constant circle orbit...if a want spiral apply this

}

void PlanetClass::draw() {

	
	ofFill();
	ofSetColor(red, green, blue);
	ofRotate(rotation * rotateSpeed);
	ofCircle(posX, posY, dim);
	
	float xorig = 50;
	float yorig = 30;
	float angle = ofGetElapsedTimef()*3.5;
	float x = xorig + radius * cos(angle);
	float y = yorig + radius * -sin(angle);

	ofPoint temp;
	temp.x = x;
	temp.y = y;
	points.push_back(temp);
	if (points.size() > 500) {
		points.erase(points.begin());
	}

	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(107, 57, 112);
	ofFill();
	ofDrawCircle(x, y, 10);

	ofSetColor(200);

	ofNoFill();
	ofBeginShape();
	for (int i = 0; i < points.size(); i++) {
		ofVertex(points[i].x, points[i].y);
	}
	ofEndShape();
	
}