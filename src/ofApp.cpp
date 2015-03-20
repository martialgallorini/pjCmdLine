#include "ofApp.h"

#include "ofxArgParser.h"


//--------------------------------------------------------------
void ofApp::setup(){

    int commMode;
    int projectorPort;
    string argMode = ofxArgParser::getValue("mode");
    if(argMode == "NEC") {
		commMode = NEC_MODE;
		projectorPort = NEC_PORT;
	}
	else if(argMode == "PJLINK") {
		commMode = PJLINK_MODE;
        projectorPort = PJLINK_PORT;
	}
    else if(argMode == "CHRISTIE") {
		commMode = CHRISTIE_MODE;
        projectorPort = CHRISTIE_PORT;
	}
    else if(argMode == "SANYO") {
		commMode = SANYO_MODE;
        projectorPort = SANYO_PORT;
	}

    string pwd;
    if (ofxArgParser::hasKey("pwd")){
		pwd = ofxArgParser::getValue("pwd");
	}
	else{
		pwd = "";
	}

    projector.setup(ofxArgParser::getValue("ip"), projectorPort, commMode, pwd);

    if (ofxArgParser::getValue("pwr") == "1")
    {
        projector.On();
    }
    else if (ofxArgParser::getValue("pwr") == "0")
    {
        projector.Off();
    }

    ofExit();

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
