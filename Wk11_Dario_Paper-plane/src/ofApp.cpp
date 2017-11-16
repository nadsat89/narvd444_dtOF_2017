#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
	
	ofBackground(0);

	planeGroups.add(plane01.planeGroup);

	plane01.setup();

	moveX = 0;
	moveY = 2000;
	moveZ = 0;
		
	ofSetSmoothLighting(true);	
	light.setPointLight();
	light.setPosition(moveX, moveY, moveZ);
	light.setDiffuseColor(ofColor::grey);
	light.setAttenuation(.1);	

	gui.setup(planeGroups);

	ofSetVerticalSync(true);
				
}

//--------------------------------------------------------------
void ofApp::update() {


	plane01.update();
	light.setPosition(moveX,moveY,moveZ);
	
}

//--------------------------------------------------------------
void ofApp::draw() {

	gui.draw();
	
	ofEnableLighting();		
	ofEnableDepthTest();

	cam.begin();

	light.enable();
	light.disable();
	ofDisableLighting();
	
	ofDrawAxis(100);
		
	light.draw();
	plane01.draw();
	cam.end();

	ofDisableDepthTest();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}