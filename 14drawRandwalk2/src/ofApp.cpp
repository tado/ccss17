#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetBackgroundAuto(false); //背景の自動更新をOFF
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    
    image.load("source.jpg"); //画像を読み込み
    image.resize(ofGetWidth(), ofGetHeight()); //画像を画面の大きさにリサイズ
    
    for (int i = 0; i < NUM; i++) {
        walker[i] = ofVec2f(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        //色は初期化の段階で決定
        color[i] = image.getColor(walker[i].x, walker[i].y);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    //ランダムウォーク
    for (int i = 0; i < NUM; i++) {
        walker[i] += ofVec2f(ofRandom(-4, 4), ofRandom(-4, 4));
        if (walker[i].x < 0) {
            walker[i].x = ofGetWidth();
        }
        if (walker[i].y < 0) {
            walker[i].y = ofGetHeight();
        }
        if (walker[i].x > ofGetWidth()) {
            walker[i].x = 0;
        }
        if (walker[i].y > ofGetHeight()) {
            walker[i].y = 0;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //初期化した時の場所の色で円を描画
    for (int i = 0; i < NUM; i++) {
        ofSetColor(color[i], 63);
        ofDrawCircle(walker[i], 2);
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
