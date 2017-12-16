#pragma once		
#include "ofMain.h"	
#include "ofxJSON.h"
#include "Drop.h"
#include "snowFlake.h"

class Icon {

public:		

	Icon();	

	void setup();
	void update(); 
	void draw();
	void setRotation(float r);
	void setLabels(string codeTemp, string tempTemp, string textTemp);
	string getIcon(int code);
	float getPrecipitation();
	
	float rotation;

	string code;
	string temp;
	string text;

	string currentIcon;

	ofImage day;
	ofImage night;
	
	ofTrueTypeFont font;

	vector <Drop> rain; 
	vector <snowFlake> snow;
	
	float precipitation;

};