#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	gravity = 0.7; // start with gravity force

	liftForce = 0; //initially there are not balloons
	offset = 1;

	win = false;

	house1.setup(gravity);

	bg.load("UP_Game_Pixar_BG.jpg");
	winImage.load("UP_Game_Pixar_win.jpg");

	
}

//--------------------------------------------------------------
void ofApp::update(){

	house1.update(); 

	for (int i = 0; i<groupOfBalloons.size(); i++) {
		groupOfBalloons[i].update();
	}
	
	if (house1.getPos().x >= 422 && house1.getPos().y + 141 > 583 && house1.getPos().x <= 566 && house1.getPos().y +141 < 600) { //landing area
		win = true;
	}else {
		win = false;
	}
		
}

//--------------------------------------------------------------
void ofApp::draw(){
	bg.draw(0, 0); //(position in x, position in y, width, height

	house1.draw();

	//ofDrawRectangle(422, 583, 144, 17); //landing area draw verification

	//cout << house1.getPos() << endl;

	for (int i = 0; i<groupOfBalloons.size(); i++) {
		groupOfBalloons[i].draw();
		groupOfBalloons[i].setHousePos(house1.getPos());
		
	}

	if (win) {
		winImage.draw(0,0);
	}
	

	//cout << gravity  << endl;
	//cout << liftForce << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	

	if (house1.getPos().y != 450 && house1.getPos().y != 815) {

		if ((house1.getPos().x > 630 && house1.getPos().y > 450) || house1.getPos().y < 450) {
			if (key == OF_KEY_LEFT) {
				ofVec2f posTemp;
				posTemp.set(house1.getPos().x - offset, house1.getPos().y);

				house1.setPos(posTemp);
				for (int i = 0; i < groupOfBalloons.size(); i++) {
					ofVec2f posTempB;
					posTempB.set(groupOfBalloons[i].getPos().x - offset, groupOfBalloons[i].getPos().y);
					groupOfBalloons[i].setPos(posTempB);
				}
			}
		}

		if (key == OF_KEY_RIGHT) {
			ofVec2f posTemp;
			posTemp.set(house1.getPos().x + offset, house1.getPos().y);

			house1.setPos(posTemp);
			for (int i = 0; i < groupOfBalloons.size(); i++) {
				ofVec2f posTempB;
				posTempB.set(groupOfBalloons[i].getPos().x + offset, groupOfBalloons[i].getPos().y);
				groupOfBalloons[i].setPos(posTempB);
			}
		}

	}

	if (key == 'k') {
		groupOfBalloons.clear();
		updateLiftForce();
		
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
		
	if (house1.canCreateBalloons()) {
		Balloon tempBalloon;						// create the ball object
		tempBalloon.setup(x, y, gravity);	// setup its initial state
		groupOfBalloons.push_back(tempBalloon);		// add balloons to the array
		updateLiftForce();
	}
		
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	for (int i = 0; i< groupOfBalloons.size(); i++) {
		if (ofDist(ofGetMouseX(), ofGetMouseY(), groupOfBalloons[i].pos.x, groupOfBalloons[i].pos.y) < 50) {
			groupOfBalloons.erase(groupOfBalloons.begin() + i); // we need to use an iterator/ reference to the vector position we want to delete
			updateLiftForce();
		}
	}
	
}

void ofApp::updateLiftForce() {
	liftForce = (float)groupOfBalloons.size() / 500;
	house1.setLiftForce(liftForce); //I calculated lifForce and transfer it to house1 to be use

	for (int i = 0; i< groupOfBalloons.size(); i++) {
		groupOfBalloons[i].setLiftForce(liftForce);
	}
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
