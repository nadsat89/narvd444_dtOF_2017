#include "Hair.h"
Hair::Hair() {
}

void Hair::setup() {
	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Hair::update() {

}

void Hair::draw() {

	
	//hair-1
	ofSetColor(color,50);//I added the alpha to still see the details of the hair made in Dario.cpp
	ofBeginShape();
	ofVertex(387, 218.333);
	ofVertex(361, 194.333);
	ofVertex(361, 111);
	ofVertex(378.333, 82.333);
	ofVertex(442.333, 31);
	ofVertex(486.333, 42.333);
	ofVertex(545, 43);
	ofVertex(565.667, 128.33);
	ofVertex(569, 187);
	ofVertex(543.667, 212.333);
	ofVertex(549.667, 173.667);
	ofVertex(532.333, 117);
	ofVertex(442.333, 164.333);
	ofVertex(457, 132.333);
	ofVertex(407, 172.333);
	ofVertex(403.667, 145.667);
	ofVertex(380.333, 178.333);
	ofEndShape();
	
}

