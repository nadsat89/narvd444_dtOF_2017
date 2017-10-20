// Luxo.h

/* #pragma once should always be at the top of your header files
* it prevents other headers like "ofMain.h" from being included more than once in your app
* (note that ofMain.h is also included in ofApp.h)
*/

#pragma once		
#include "ofMain.h"		// ofMain.h lets our Ball "see" openFrameworks

class Luxo {

public:		// other classes can access the following functions & variables:

	Luxo();				// "constructor" function - required for every class
						// this is automatically called whenever we create a new ball

	void update(ofVec2f force = ofVec2f(0, 0)); // update the ball with a force each time
	void draw();

	float radius;
	float mass;
	float luxoWidth;
	float luxoHeight;

	ofVec2f pos;
	ofVec2f vel;
	ofVec2f acc;
	
	ofImage luxo;


};