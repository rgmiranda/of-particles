#include "ofGravityApp.h"

const int ofGravityApp::numParticles = 32;

//--------------------------------------------------------------
void ofGravityApp::setup(){
    particles.assign(numParticles, GravityParticle());
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i].setup();
    }
}

//--------------------------------------------------------------
void ofGravityApp::update(){
    for (int i = 0; i < particles.size(); i++)
    {
        ofVec2f force;
        for (int j = 0; j < particles.size(); j++) {
            if (j == i) {
                continue;
            }
            float dist = particles[j].pos.distance(particles[i].pos);
            float pull = ofMap(dist, 0, ofGetWidth(), 0.01, 0.1, true);
            force.x = particles[j].pos.x;
            force.y = particles[j].pos.y;
            force -= particles[i].pos;
            force.normalize();
            force *= pull * particles[j].size;
            particles[i].apply(force);
        }
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofGravityApp::draw(){
    ofSetColor(255, 255, 255);
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i].draw();
    }
}

//--------------------------------------------------------------
void ofGravityApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofGravityApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofGravityApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofGravityApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofGravityApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofGravityApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofGravityApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofGravityApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofGravityApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofGravityApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofGravityApp::dragEvent(ofDragInfo dragInfo){ 

}
