#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	
	std::string url = "https://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20weather.forecast%20where%20woeid%20in%20(select%20woeid%20from%20geo.places(1)%20where%20text%3D%22new%20york%2C%20ny%22)&format=json&env=store%3A%2F%2Fdatatables.org%2Falltableswithkeys";

	// Now parse the JSON
	bool parsingSuccessful = json.open(url);

	if (parsingSuccessful)
	{
		ofLogNotice("ofApp::setup") << json.getRawString(true);
	}
	else {
		ofLogNotice("ofApp::setup") << "Failed to parse JSON.";
	}

	sunrise = json["query"]["results"]["channel"]["astronomy"]["sunrise"].asString();
	sunset = json["query"]["results"]["channel"]["astronomy"]["sunset"].asString(); //std::string sunset = json["query"]["results"]["channel"]["astronomy"]["sunset"].asString();
	code = json["query"]["results"]["channel"]["item"]["condition"]["code"].asString();
	temp = json["query"]["results"]["channel"]["item"]["condition"]["temp"].asString();
	text = json["query"]["results"]["channel"]["item"]["condition"]["text"].asString();
	//cout << sunrise << sunset << code << temp << text  << endl;

	sunriseHours = ofSplitString(sunrise, " am")[0];
	sunriseHours2 = ofSplitString(sunriseHours, ":")[0];
	sunriseMinutes = ofSplitString(sunrise, " am")[0];
	sunriseMinutes2 = ofSplitString(sunriseMinutes, ":")[1];
	sunriseTime = ofToInt(sunriseHours2) * 60 + ofToInt(sunriseMinutes2);

	sunsetHours = ofSplitString(sunset, " pm")[0];
	sunsetHours2 = ofSplitString(sunsetHours, ":")[0];
	sunsetMinutes = ofSplitString(sunset, " pm")[0];
	sunsetMinutes2 = ofSplitString(sunsetMinutes, ":")[1];
	sunsetTime = (ofToInt(sunsetHours2) + 12) * 60 + ofToInt(sunsetMinutes2);

	opacity = 0;

	myIcon.setup();
	myIcon.setLabels(code,temp, text); //passing parameters to the class

	bg.load("bg.jpg");

	for (int i = 0; i < 400; i++) {
		Star tempStar;						// create the ball object
		tempStar.setup((int)ofRandom(0, ofGetWidth()), (int)ofRandom(0, ofGetHeight()), ofRandom(1, 3));	// setup its initial state
		stars.push_back(tempStar);		// add balloons to the array
	}

	minutes = ofGetHours() * 60 + ofGetMinutes();
	//minutes = 1140; //7PM
	//minutes = 0;
	
}



//--------------------------------------------------------------
void ofApp::update(){
	if (bgPosY > 0) {
		bgPosY = -9102;
	}

	if (minutes >= 1440) {
		minutes = 0; 
	}

	myIcon.update();
	//cout << bgPosY << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	
	bg.draw(0, bgPosY);

	ofSetColor(150, opacity);
	ofFill();

	for (int i = 0; i < stars.size(); i++) {
		stars[i].draw();
		stars[i].setSize(ofRandom(1, 3));
	}

	ofSetColor(255, 255);

	//minutes += 0.1;

	ofSetColor(255);
	ofDrawRectangle(0, ofGetHeight() - myIcon.getPrecipitation(), ofGetWidth(), myIcon.getPrecipitation());

	ofPushMatrix();

	ofTranslate(ofGetWidth() / 2, ofGetHeight());	
	rotation = ofMap(minutes, sunriseTime, sunsetTime, 0, 180) + 90;
	
	ofRotate(rotation);

	myIcon.draw(); 
	myIcon.setRotation(rotation);

	ofPopMatrix();

	ofSetLineWidth(0);
	bgPosY = ofMap(minutes, sunriseTime, sunsetTime, -7240, -3750);

	if ((bgPosY > -4000) || (bgPosY < -7900)) {
		if (opacity < 255) {
			opacity++;
		}
	}
	else {
		if (opacity > 0) {
			opacity--;
		}
	}



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
