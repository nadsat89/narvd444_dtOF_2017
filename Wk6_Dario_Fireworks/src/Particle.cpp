#include "Particle.hpp"

Particle::Particle()
{
	lifespan = 1000; // seconds
	
}

Particle::Particle(ofVec3f _pos)
{
	pos = _pos;
	vel.x = ofRandom(-20, 20);
	vel.y = ofRandom(-20, 20);
	lifespan = 255;

}

void Particle::applyForce(ofVec3f force){
	acc += force;
}

void Particle::update(float timeDiff){ // how much time has passed since last frame?
	vel += acc*100.;
	pos += vel*0.04;
	acc *= -0.1;
	
	if (lifespan > 0.) lifespan -= 2;
}

void Particle::draw() {

	if (lifespan > 1000) {
		ofSetColor(lifespan);
	}
	else if (lifespan <= 1000) {
		ofSetColor(ofColor(ofRandom(0, 255), ofRandom(100, 255), 255));
	}

	
	ofDrawCircle(pos, 3 * ofMap(lifespan, 0, 255, 0, 1));

	ofPushMatrix();
	ofRotate(45);
	ofTranslate(600, 10);
	ofSetColor(ofColor(ofRandom(230, 255), ofRandom(180, 200), 0));
	ofDrawLine(pos,pos-(lifespan+100));
	ofPopMatrix();
	

}

