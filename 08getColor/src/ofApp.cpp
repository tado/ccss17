#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    image.load("source.jpg"); //画像を読み込み
    image.resize(ofGetWidth(), ofGetHeight()); //画像を画面の大きさにリサイズ
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //画像を描画
    ofSetColor(255);
    image.draw(0, 0);
    //マウスの位置を線で表示
    ofDrawLine(mouseX, 0, mouseX, ofGetHeight());
    ofDrawLine(0, mouseY, ofGetWidth(), mouseY);
    //マウスの位置の色を取得
    ofColor color;
    color = image.getColor(mouseX, mouseY);
    //取得した色で四角形を描画
    ofSetColor(color);
    ofDrawRectangle(20, 20, 100, 100);
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
