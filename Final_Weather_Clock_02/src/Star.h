#pragma once		
#include "ofMain.h"	

class Star {

public:		

	Star();	

	void setup(int posX, int posY, float s);
	void update(); 
	void draw();
	void setSize(float s);
	
	int x;
	int y;
	float size;	

};