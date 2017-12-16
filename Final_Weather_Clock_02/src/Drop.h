#pragma once		
#include "ofMain.h"	

class Drop {

public:		

	Drop();	

	void setup();
	void update(); 
	void draw();
	
	float x;
	float y;
	float z;
	float L;
	float yspeed;
	int opacity;

};