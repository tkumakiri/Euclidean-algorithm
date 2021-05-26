#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFullscreen(true);
    numA = 10.0 /* scalar*/;
    numB = 6.0 /* scalar*/;
    width = ofGetWidth();
    ratio = (double) numB / numA; 

    // red[0] = ofRandom(0, 255);
    // blue[0] = ofRandom(0, 255);
    // green[0] = ofRandom(0, 255);
    color[0].setHsb(ofRandom(0.0, 255.0), 255.0, 255.0);
    for(int i = 0; i < 100; i++){
        // red.push_back(ofRandom(0, 255));
        // blue.push_back(ofRandom(0, 255));
        // green.push_back(ofRandom(0, 255));
        ofColor c;
        c.setHsb(ofRandom(0.0, 255.0), 255.0, 255.0);
        color.push_back(c);
    }
    ofSetLineWidth(10);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    iter = 0;
    xPos = 0;
    yPos = 0;
    wide = width * ratio;
    i = 0;
    thr = 160;
}

//--------------------------------------------------------------
void ofApp::draw(){
    divSquare(0, 0, width);
    
}

void ofApp::divSquare(double xPos, double yPos, double wide){
    int iter = 0;
    double xEndPos = wide + xPos;
    double yEndPos = wide + yPos;
    

    //ofSetColor(red[i], green[i], blue[i]);
    ofFill();
    ofSetColor(color[i]);
    ofRect(xPos, yPos, wide, wide);
    ofNoFill();
    ofSetColor(50, 50, 50);
    ofRect(xPos, yPos, wide, wide);
    i++;
    while(wide > thr){
        iter++;
        if(iter % 2 == 1){
            while(xPos + wide * ratio < xEndPos + 0.1){
                divRect(xPos, yPos, wide * ratio);
                xPos += wide * ratio;
            }
            wide = xEndPos - xPos;
        }
        else{
            while(yPos + wide/ratio < yEndPos + 0.1){
                divRect(xPos, yPos, wide/ratio);
                yPos += wide/ratio;
            }
            wide = yEndPos - yPos;
        }
    }
}

void ofApp::divRect(double xPos, double yPos, double wide){
    int iter = 0;
    double xEndPos = xPos + wide;
    double yEndPos = yPos + wide;
    
    ofFill();
    ofSetColor(color[i]);
    //ofSetColor(red[i], green[i], blue[i]);
    ofRect(xPos, yPos, wide, wide/ratio);

    ofNoFill();
    ofSetColor(50, 50, 50);
    ofRect(xPos, yPos, wide, wide/ratio);

    i++;
    while(wide > thr){
        iter++;
        if(iter % 2 == 0){
            while(xPos + wide < xEndPos + 0.1){
                divSquare(xPos, yPos, wide);
                xPos += wide;
            }
            wide = xEndPos - xPos;
        }
        else{
            while(yPos + wide < yEndPos + 0.1){
                divSquare(xPos, yPos, wide);
                yPos += wide;
            }
            wide = yEndPos - yPos;
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
void ofApp::mouseMoved(int x, int y){

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