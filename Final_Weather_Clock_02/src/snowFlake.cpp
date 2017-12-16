#include "snowFlake.h"

// constructor
snowFlake::snowFlake() {
	
}

void snowFlake::setup() {

	precipitation = 0;

	MIN_PARTICLE_DIAMETER = 2;
	MAX_PARTICLE_DIAMETER = 7;
	MAX_PARTICLE_VELOCITY_X = 0.5;
	MAX_PARTICLE_VEL_VARIANT_X = 0.1;
	MAX_PARTICLE_VELOCITY_Y = 0.5;
	MAX_PARTICLE_VEL_VARIANT_Y = 0.1;
	MAX_BLINK_SPEED = PI / 128;

	loc.x = ofRandom(200);
	loc.y = -MAX_PARTICLE_DIAMETER / 2;
	vel.x = ofRandom(-MAX_PARTICLE_VELOCITY_X, MAX_PARTICLE_VELOCITY_X);
	vel.y = ofRandom(MAX_PARTICLE_VELOCITY_Y);
	blinkAngle = ofRandom(TWO_PI);
}

void snowFlake::update() {
	vel.x += ofRandom(-MAX_PARTICLE_VEL_VARIANT_X, MAX_PARTICLE_VEL_VARIANT_X);
	vel.x = ofClamp(vel.x, -MAX_PARTICLE_VELOCITY_X, MAX_PARTICLE_VELOCITY_X); //ofClamp ---constrain. Give a Value and then max and min
	vel.y += ofRandom(-MAX_PARTICLE_VEL_VARIANT_Y, MAX_PARTICLE_VEL_VARIANT_Y);
	vel.y = ofClamp(vel.y, 0, MAX_PARTICLE_VELOCITY_Y);
	loc += vel;
	blinkAngle += ofRandom(MAX_BLINK_SPEED);
	if (blinkAngle >= TWO_PI) {
		blinkAngle -= TWO_PI;
	}
}

void snowFlake::draw() {
	float diameter = ofMap(sin(blinkAngle), -1, 1, MIN_PARTICLE_DIAMETER, MAX_PARTICLE_DIAMETER);
	for (float v = 1.0; v >= 0.0; v -= 0.2) {
		float d = ofMap(v, 0, 1, 0, diameter);
		ofSetColor(255);
		ofDrawEllipse(loc.x-100, loc.y, d, d);
	}

}

void snowFlake::setHeight(float heightTemp) {
	height = heightTemp;
}

bool snowFlake::isGoneOut() {
	return loc.y > height + MAX_PARTICLE_DIAMETER / 2;
}



//TO DO:
//1. En el icono. Hacer calculos de la altura con respecto a la base. float y = sin (rotation)*400
//2. Crear un set en el snowflake y cambiar el ofGetHeight de la linea 50.