#include "TriangleBall.h"

TriangleBall::TriangleBall() {

	// nothing needed here, because all variables are initialized in parent Ball class
}

void TriangleBall::draw() {

	ofSetColor(color);	// the color carries over from the parent Ball class

	float corX = x - radius; // rectangles draw from the top left corner unlike circles (which draw from the center), so we need to compensate
	float corY = y - radius;
	ofDrawTriangle(corX,corY, corX+50,corY+50, radius*2,radius);  // 
	
}
