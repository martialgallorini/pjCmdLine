#include "ofApp.h"

#include "ofxArgParser.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    projector.setup(ofxArgParser::getValue("ip"), PJLINK_MODE, ofxArgParser::getValue("pwd"));
    
    if (ofxArgParser::getValue("pwr") == "1")
    {
        projector.On();
    }
    else if (ofxArgParser::getValue("pwr") == "0")
    {
        projector.Off();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
