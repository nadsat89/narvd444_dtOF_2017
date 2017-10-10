#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(238,153,82);
    
    ofSetCircleResolution(100); // prettier circles
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // make a ball follow the mouse
    
    ofVec2f mouse;
    mouse.x = ofGetMouseX();
    mouse.y = ofGetMouseY();
    
    float pct = .005; // every frame move ball 5% towards the mouse
    
    ball = ball * (1.-pct) + mouse * pct;
	//ball2 = ball2 * (1. - pct) + mouse/2 * pct;
	ball2 = ball2 * (1. - pct) + mouse/1.1* pct;
    
    // change the ball brightness with distance
    
    float dist = mouse.distance(ball);
    
    // as distance increases, brightness increases:
    brightness = ofMap(dist, 0, 500, 50, 200);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
	ofSetColor(255);
	ofNoFill();
	ofDrawEllipse(500, ofGetHeight()/2, 400, 500);

	ofSetColor(201, 137, 134);
	ofFill();
	ofDrawEllipse(500, 500, 80, 100);

	ofSetColor(209);
	ofDrawEllipse(400, 350, 80, 40);
	ofDrawEllipse(580, 350, 80, 40);

	ofFill();
	ofSetColor(brightness);
	ofDrawCircle(ball, 20);
	ofDrawCircle(ball2, 20);

	int yPos = ofGetHeight() / 1.1;
	int xPos = 50;
	int red = 50;
	int green = 40;
	int blue = 20;


	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);


	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);


	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);

	xPos += 100;
	blue -= 20;
	green += 15;
	ofSetColor(red, green, blue);
	ofDrawCircle(xPos, yPos, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
