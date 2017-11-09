#include "ofApp.h"

GLfloat lightOnePosition[] = {40.0, 40, 100.0, 0.0};
GLfloat lightOneColor[] = {0.99, 0.99, 0.99, 1.0};

GLfloat lightTwoPosition[] = {-40.0, 40, 100.0, 0.0};
GLfloat lightTwoColor[] = {0.99, 0.99, 0.99, 1.0};

//--------------------------------------------------------------
void ofApp::setup(){

	

	x = 2;
	y = 2;
	z = 2;

	ofBackground(0);
		
	ofSetVerticalSync(true);

    //some model / light stuff
    ofEnableDepthTest();
    glShadeModel (GL_SMOOTH);

    /* initialize lighting */
    glLightfv (GL_LIGHT0, GL_POSITION, lightOnePosition);
    glLightfv (GL_LIGHT0, GL_DIFFUSE, lightOneColor);
    glEnable (GL_LIGHT0);
    glLightfv (GL_LIGHT1, GL_POSITION, lightTwoPosition);
    glLightfv (GL_LIGHT1, GL_DIFFUSE, lightTwoColor);
    glEnable (GL_LIGHT1);
    glEnable (GL_LIGHTING);
    glColorMaterial (GL_FRONT_AND_BACK, GL_DIFFUSE);
    glEnable (GL_COLOR_MATERIAL);

    //load the bowl model - the 3ds and the texture file need to be in the same folder
    bowlModel.loadModel("bowl/chocolateBowl.stl", 20);

    
    bowlModel.setPosition(ofGetWidth()/2, ofGetHeight()/2, 0);

}

//--------------------------------------------------------------
void ofApp::update(){
	bowlModel.setScale(x, y, z);
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(255);
	ofDrawBitmapString("Press 'k''l' adn 'o' to modify the scale of the object", 50, ofGetHeight() - 20);
	
	ofEnableDepthTest();

	cam.begin();
	ofDrawAxis(100);

	ofSetColor(90, 57, 43, 10);
	bowlModel.drawFaces();
	
	cam.end();

	ofDisableDepthTest();
	
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){ 
	if (key == 'k') {
		x=x+1;
	}

	if (key == 'l') {
		y = y + 1;
	}

	if (key == 'o') {
		z = z + 1;
	}

	if (key == 'r') {
		x=x-1;
		y = y-1;
		z = z-1;
	}
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
