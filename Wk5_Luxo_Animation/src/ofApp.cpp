#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	gravity = ofVec2f(0, 0); // start with no gravity force
	wind.set(0.01, 0);

	letters.load("pixar_letters.png");
	
}

//--------------------------------------------------------------
void ofApp::update(){

	gravity.x = 0;
	gravity.y = 0.2;


	lampLuxo.update(gravity); 
	lampLuxo.update(wind);
		
}

//--------------------------------------------------------------
void ofApp::draw(){

	letters.draw(0, 240);

	lampLuxo.draw();
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
