#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0,159,253);
    
    gravity = ofVec2f(0,0); // start with no gravity force

	ofAddListener(ofEvents().keyPressed, this, &Ball::keyPressed);
	
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // mouse position alters gravity
    gravity.x = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0.00001, 0.00001);
    gravity.y = ofMap(ofGetMouseY(), 0, ofGetHeight(), 0.000000001, 0.0001);


	ball1.update(gravity); // apply gravity to balls
	ball2.update(gravity);
	ball3.update(gravity);
	ball4.update(gravity);
	ball5.update(gravity);
	ball6.update(gravity);
	ball7.update(gravity);
	ball8.update(gravity);
	ball9.update(gravity);
	ball10.update(gravity);
	ball11.update(gravity);
	ball12.update(gravity);
	ball13.update(gravity);

}

//--------------------------------------------------------------
void ofApp::draw(){

	ball1.draw();
	ball2.draw();
	ball3.draw();
	ball4.draw();
	ball5.draw();
	ball6.draw();
	ball7.draw();
	ball8.draw();
	ball9.draw();
	ball10.draw();
	ball11.draw();
	ball12.draw();
	ball13.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	Ball._keyPressed(_key);

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
