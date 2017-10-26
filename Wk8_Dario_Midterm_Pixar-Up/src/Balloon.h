#pragma once
#ifndef _BALLON // if this class hasn't been defined, the program can define it
#define _BALLON // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework
class Balloon {

public: // place public functions or variables declarations here

		// methods, equivalent to specific functions of your class objects
	void setup(float _x, float _y, float g);	// setup method, use this to setup your object's initial state
	void update();  // update method, used to refresh your objects properties
	void draw();    // draw method, this where you'll do the object's drawing
	void setHousePos(ofVec2f housePosTemp);
	void setPos(ofVec2f temp);
	void setLiftForce(float temp);
	
	ofVec2f getPos();

					// variables
	ofVec2f pos;
	float speedY;   // speed and direction
	float speedX;
	int dim;        // size
	float gravity;
	float liftForce;
	ofVec2f housePos;
	ofColor color;  // color using ofColor type


	Balloon();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
};
#endif