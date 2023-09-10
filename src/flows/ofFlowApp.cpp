#include "ofFlowApp.h"

//--------------------------------------------------------------
void ofFlowApp::setup(){
    
    gui.setup();
    gui.add(speed.setup("Speed", 3, 1, 15));
    gui.add(frequency.setup("Frequency", 0.005, 0.001, 0.1));
    gui.add(trail.setup("Trail", 6, 1, 20));

    p.assign(4096, flowParticle());
    for (int i = 0; i < p.size(); i++)
    {
        p[i].setup();
    }

    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofFlowApp::update(){
    for (int i = 0; i < p.size(); i++)
    {
        p[i].update(speed, frequency);
    }
}

//--------------------------------------------------------------
void ofFlowApp::draw(){
    //ofSetColor(0, 0, 0, trail);
    //ofDrawRectangle(0, 0, ofGetWidth(), ofGetWidth());
    for (int i = 0; i < p.size(); i++)
    {
        p[i].draw(1);
    }
    gui.draw();
}

//--------------------------------------------------------------
void ofFlowApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofFlowApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofFlowApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofFlowApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofFlowApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofFlowApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofFlowApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofFlowApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofFlowApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofFlowApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofFlowApp::dragEvent(ofDragInfo dragInfo){ 

}
