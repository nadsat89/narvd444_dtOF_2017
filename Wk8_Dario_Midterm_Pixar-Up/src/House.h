#pragma once		
#include "ofMain.h"		// ofMain.h lets our Ball "see" openFrameworks

class House {

public:		// other classes can access the following functions & variables:

	House();				// "constructor" function - required for every class
						// this is automatically called whenever we create a new ball
	void setup(float g);
	void update(ofVec2f force = ofVec2f(0, 0)); // update the ball with a force each time
	void draw();
	void setPos(ofVec2f temp);
	void setLiftForce(float temp);
	bool canCreateBalloons();
	ofVec2f getPos();
	

	float gravity;
	float liftForce;
	
	ofVec2f pos;
	ofVec2f vel;
	ofVec2f acc;
	bool createBalloons;
	float houseWidth;
	float houseHeight;

	ofImage house;

};
