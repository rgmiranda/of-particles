#include "ofFlowApp.h"

//--------------------------------------------------------------
void ofFlowApp::setup(){
    
    gui.setup();
    gui.add(speed.setup("Speed", 3, 1, 15));
    gui.add(frequency.setup("Frequency", 0.0025, 0.001, 0.01));
    gui.add(trail.setup("Trail", 6, 1, 20));

    p.assign(numParticles, flowParticle());
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
    int w = ofGetWidth();
    int h = ofGetHeight();
    if(key == 's'){
        cout << "Saving...";
        img.grabScreen(0, 0, w, h);
        img.save("flows-4096.jpg");
    }
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
