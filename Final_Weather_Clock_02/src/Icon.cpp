#include "Icon.h"

// constructor
Icon::Icon() {
	
}

void Icon::setup() {
	
	font.load("tahomabd.ttf", 12);

	currentIcon = getIcon(ofToInt(code));
	//currentIcon = "rain-snow";
	//currentIcon = "rainy-weather";
	//currentIcon = "snow-weather";
	//currentIcon = "clear";
	
	day.load("day-"+ currentIcon + ".png");
	night.load("night-" + currentIcon + ".png");
	cout << "night-" + getIcon(ofToInt(code)) + ".png" << endl;
	

	for (int i = 0; i < 400; i++) {
		Drop tempDrop;						// create the ball object
		tempDrop.setup();	// setup its initial state
		rain.push_back(tempDrop);		// add balloons to the array
	}
			
}

void Icon::update() {
	for (int i = 0; i < rain.size(); i++) {
		rain[i].update();
	}

}

void Icon::draw(){

	//DAY

	ofPushMatrix();
	ofTranslate (120,470);
	ofRotate(-rotation);

	if (currentIcon == "rainy-weather" || currentIcon == "rain-snow" || currentIcon == "storm-weather") {
		for (int i = 0; i < rain.size(); i++) {
			rain[i].draw();
		}
	}

	float y = 570 - abs(sin(ofDegToRad(rotation)) * 470);
	//cout << y << endl;

	if (currentIcon == "snow-weather" || currentIcon == "rain-snow") {
		for (int i = 0; i< snow.size(); i++) {
			snow[i].setHeight(y);
			snow[i].draw();
			snow[i].update();
			if (snow[i].isGoneOut()) {
				precipitation += 0.01; //Change here to control the speed of snow accumulation
				snow.erase(snow.begin());
			}
		}
	}
			
	day.draw(-120, -70);
	font.drawString(ofToString(ofGetHours()) + ":" + ofToString(ofGetMinutes()), 100,-30);
	font.drawString(temp + "F", 100, -15);
	font.drawString(text, 100, 0);
		
	ofPopMatrix();

	//NIGHT

	ofPushMatrix();
	ofTranslate(120, -470);
	ofRotate(-rotation);

	if (currentIcon == "rainy-weather" || currentIcon == "rain-snow") {
		for (int i = 0; i < rain.size(); i++) {
			rain[i].draw();
		}
	}

	//ofDrawLine(ofGetWidth(), y, 0, y);

	if (currentIcon == "snow-weather" || currentIcon == "rain-snow") {
		for (int i = 0; i< snow.size(); i++) {
			snow[i].setHeight(y);
			snow[i].draw();
			snow[i].update();
			if (snow[i].isGoneOut()) {
				precipitation += 0.01; //Change here to control the speed of snow accumulation
				snow.erase(snow.begin());
			}
		}
	}
	
	if (ofRandom(1) < 0.3) {
		snowFlake tempsnowFlake;// create the ball object
		tempsnowFlake.setup();	// setup its initial state
		snow.push_back(tempsnowFlake);		// add balloons to the array
	}
	
	night.draw(-120, -70);
	font.drawString(ofToString(ofGetHours()) + ":" + ofToString(ofGetMinutes()), 100, -30);
	font.drawString(temp + "F", 100, -15);
	font.drawString(text, 100, 0);
		
	ofPopMatrix();
		
}

void Icon::setRotation(float r) {
	rotation = r;
}

void Icon::setLabels(string codeTemp, string tempTemp, string textTemp) {
	code = codeTemp; //temp. to differentiate the names from ofApp to the class names whic are the same
	temp = tempTemp;
	text = textTemp;
}

float Icon::getPrecipitation() {
	return precipitation;
}

string Icon::getIcon(int code){
switch (code) {
case 0:
	return "storm-weather"; //tornado
	break;
case 1:
	return "storm-weather"; //tropical storm
	break;
case 2:
	return "windy-weather"; //hurricane
	break;
case 3:
	return "storm-weather"; //severe thunderstorms
	break;
case 4:
	return "storm-weather"; //thunderstorms
	break;
case 5:
	return "rain-snow"; //mixed rain and snow
	break;
case 6:
	return "rain-snow"; //mixed rain and sleet
	break;
case 7:
	return "rain-snow"; //mixed snow and sleet
	break;
case 8:
	return "rainy-weather"; //freezing drizzle
	break;
case 9:
	return "rainy-weather"; //drizzle
	break;
case 10:
	return "storm-weather"; //freezing rain
	break;
case 11:
	return "rainy-weather"; //showers
	break;
case 12:
	return "rainy-weather"; //showers
	break;
case 13:
	return "snow-weather"; //snow flurries
	break;
case 14:
	return "rain-snow"; //light snow showers
	break;
case 15:
	return "snow-weather"; //blowing snow
	break;
case 16:
	return "snow-weather"; //snow
	break;
case 17:
	return "rainy-weather"; //hail
	break;
case 18:
	return "rain-snow"; //sleet
	break;
case 19:
	return "cloudy-weather"; //dust // haze
	break;
case 20:
	return "cloudy-weather"; //foggy //haze
	break;
case 21:
	return "cloudy-weather"; //haze 
	break;
case 22:
	return "cloudy-weather"; //smoky
	break;
case 23:
	return "windy-weather"; //blustery? lol
	break;
case 24:
	return "windy-weather"; //windy
	break;
case 25:
	return "cloudy-weather"; //cold - need a better cold icon
	break;
case 26:
	return "cloudy-weather"; //cloudy
	break;
case 27:
	return "cloudy-weather"; //mostly cloudy (night)
	break;
case 28:
	return "cloudy-weather"; //mostly cloudy (day)
	break;
case 29:
	return "partly-cloudy"; //partly cloudy (night)
	break;
case 30:
	return "partly-cloudy"; //partly cloudy (day)
	break;
case 31:
	return "clear"; //clear (night)
	break;
case 32:
	return "clear"; //sunny
	break;
case 33:
	return "partly-cloudy"; //fair (night)
	break;
case 34:
	return "partly-cloudy"; //fair (day)
	break;
case 35:
	return "rain-snow"; //mixed rain and hail
	break;
case 36:
	return "clear"; //hot
	break;
case 37:
	return "storm-weather"; //isolated thunderstorms
	break;
case 38:
	return "storm-weather"; //scattered thunderstorms
	break;
case 39:
	return "rainy-weather"; //scattered thunderstorms
	break;
case 40:
	return "rainy-weather"; //scattered showers
	break;
case 41:
	return "snow-weather"; //heavy snow
	break;
case 42:
	return "snow-weather"; //scattered snow showers
	break;
case 43:
	return "snow-weather"; //heavy snow
	break;
case 44:
	return "partly-cloudy"; //partly cloudy
	break;
case 45:
	return "storm-weather"; //thundershowers
	break;
case 46:
	return "snow-weather"; //snow showers
	break;
case 47:
	return "storm-weather"; //isolated thundershowers
	break;
case 3200:
	return "unknown"; //not available
	break;

}
}



