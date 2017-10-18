#include "Dario.h"
Dario::Dario() {
}

void Dario::setup() {
	//color.set(ofRandom(255), ofRandom(255), ofRandom(255)); // one way of defining digital color is by addressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}

void Dario::update() {
	
}

void Dario::draw() {

	//Pentagram
	ofSetColor(92, 181, 255);
	ofBeginShape();
	ofVertex(365.793, 94.502);
	ofVertex(564.207,94.502);
	ofVertex(663.414,266.333);
	ofVertex(564.207,438.165);
	ofVertex(365.793, 438.165);
	ofVertex(266.586, 266.333);
	ofEndShape();

	//t-shirt
	ofSetColor(196, 132, 20);
	ofBeginShape();
	ofVertex(365.793,438.165);
	ofVertex(564.207,438.165);
	ofVertex(550.667,340.5);
	ofVertex(496, 315.5);
	ofVertex(428.5, 315.5);
	ofVertex(377,340.5);
	ofEndShape();

	//face
	ofSetColor(234,207,176);
	ofBeginShape();
	ofVertex(529,104.5);
	ofVertex(549.667,173.667);
	ofVertex(535.25,266);
	ofVertex(479.5,292);
	ofVertex(471, 292);
	ofVertex(471,315.5);
	ofVertex(496,315.5);
	ofVertex(470.5, 340.5);
	ofVertex(455, 340.5);
	ofVertex(428.5,315.5);
	ofVertex(455,315.5);
	ofVertex(455,291);
	ofVertex(442.5,291);
	ofVertex(395,261);
	ofVertex(372, 138.5);
	ofEndShape();

	//hair-1
	ofSetColor(117, 90, 75);
	ofBeginShape();
	ofVertex(387, 218.333);
	ofVertex(361,194.333);
	ofVertex(361, 111);
	ofVertex(378.333,82.333);
	ofVertex(442.333,31);
	ofVertex(486.333,42.333);
	ofVertex(545,43);
	ofVertex(565.667,128.33);
	ofVertex(569,187);
	ofVertex(543.667, 212.333);
	ofVertex(549.667,173.667);
	ofVertex(532.333,117);
	ofVertex(442.333,164.333);
	ofVertex(457,132.333);
	ofVertex(407, 172.333);
	ofVertex(403.667,145.667);
	ofVertex(380.333,178.333);
	ofEndShape();

	//hair-2
	ofSetColor(101, 79, 64);
	ofBeginShape();
	ofVertex(545, 43);
	ofVertex(565.667, 128.33);
	ofVertex(569, 187);
	ofVertex(543.667, 212.333);
	ofVertex(549.667, 173.667);
	ofVertex(532.333, 117);
	ofEndShape();

	//hair-3
	ofSetColor(101, 79, 64);
	ofBeginShape();
	ofVertex(457, 132.333);
	ofVertex(483.677, 51);
	ofVertex(407, 172.333);
	ofEndShape();

	//hair-4
	ofSetColor(133, 104, 84);
	ofBeginShape();
	ofVertex(483.677, 51);
	ofVertex(403.667, 145.667);
	ofVertex(407, 172.333);
	ofEndShape();

	//hair-5
	ofSetColor(134, 104, 88);
	ofBeginShape();
	ofVertex(387, 218.333);
	ofVertex(361, 194.333);
	ofVertex(361, 111);
	ofVertex(378.333, 82.333);
	ofVertex(380.333, 178.333);
	ofEndShape();

	//nose
	ofSetColor(196, 177, 153);
	ofBeginShape();
	ofVertex(446.167, 226);
	ofVertex(479.667, 226);
	ofVertex(470, 234.333);
	ofVertex(453.333, 234.333);
	ofEndShape();
}