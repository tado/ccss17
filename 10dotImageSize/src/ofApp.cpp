#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetBackgroundAuto(false); //背景の自動更新をOFF
    
    image.load("source.jpg"); //画像を読み込み
    image.resize(ofGetWidth(), ofGetHeight()); //画像を画面の大きさにリサイズ
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ランダムな位置を生成
    int x = int(ofRandom(ofGetWidth()));
    int y = int(ofRandom(ofGetHeight()));
    
    //生成した位置の色を取得
    ofColor color;
    color = image.getColor(x, y);
    
    //明度を算出
    float br = color.getBrightness();

    //明度によって半径を決定
    float radius = ofMap(br, 0, 255, 1, 20);
    
    //取得した色で円を取得した場所に描画
    ofSetColor(color);
    ofDrawCircle(x, y, radius);
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
