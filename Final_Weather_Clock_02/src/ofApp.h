#pragma once

#include "ofMain.h"
#include "Icon.h"
#include "Star.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofxJSONElement json;

		string code;
		string temp;
		string text;

		float minutes;
		string sunrise;
		string sunriseHours;
		string sunriseHours2;
		string sunriseMinutes;
		string sunriseMinutes2;
		int sunriseTime;
		string sunset;
		string sunsetHours;
		string sunsetHours2;
		string sunsetMinutes;
		string sunsetMinutes2;
		int sunsetTime;

		ofImage bg;
		int opacity;
		
		Icon myIcon;
		float bgPosY;
				
		vector <Star> stars;

		float rotation;



};
