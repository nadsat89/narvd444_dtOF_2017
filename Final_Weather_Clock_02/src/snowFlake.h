#pragma once		
#include "ofMain.h"	

class snowFlake {

public:		

	snowFlake();	

	void setup();
	void update();
	void draw();
	bool isGoneOut();
	void setHeight(float heightTemp);

	float precipitation;

	float MIN_PARTICLE_DIAMETER;
	float MAX_PARTICLE_DIAMETER;
	float MAX_PARTICLE_VELOCITY_X;
	float MAX_PARTICLE_VEL_VARIANT_X;
	float MAX_PARTICLE_VELOCITY_Y;
	float MAX_PARTICLE_VEL_VARIANT_Y;
	float MAX_BLINK_SPEED;
	float blinkAngle;

	float height;

	ofVec2f loc;
	ofVec2f vel;
};