#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	portraitDario1.setup();
	eyesDario.setup();
	hairDario.setup();
	mouthDario.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0);
	ofDrawBitmapString("Press 'r' and 'l' to move the eyes. Press 'h' to change the color of the hair. Press 't' to talk", 50, ofGetHeight() - 20);

	portraitDario1.draw();
	eyesDario.draw();
	hairDario.draw();
	mouthDario.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'r') {
		eyesDario.eyesMovx = eyesDario.eyesWidth + eyesDario.eyesX - eyesDario.radius;
		//eyesDario.eyesMovy = eyesDario.eyesHeight - eyesDario.radius;
	}
	if (key == 'l') {
		eyesDario.eyesMovx = eyesDario.eyesX + eyesDario.radius;
	}
	if (key == 'h') {
		hairDario.setup(); //this is where I'm setting the color being random
		//if i call draw() is going to draw the same frame (with the color already seted up over and over again)
	}
	if (key == 't') {
		mouthDario.mouthHeight = mouthDario.mouthHeight + 10;					   
	}

	cout << eyesDario.eyesMovx << endl;
	cout << eyesDario.eyesMovy << endl;
	cout << hairDario.color << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 'r') {
		eyesDario.eyesMovx = 424.92; //If I relese the key the iris goes to the initial position ?How can I use the variables in here?
	}

	if (key == 'l') {
		eyesDario.eyesMovx = 424.92;//If I relese the key the iris goes to the initial position ?How can I use the variables in here?
	}

	if (key == 't') {
		mouthDario.mouthHeight = 3.67;//If I relese the key the iris goes to the initial position ?How can I use the variables in here?
	}
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
