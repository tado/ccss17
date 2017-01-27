#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetBackgroundAuto(false); //背景の自動更新をOFF
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    
    image.load("source.jpg"); //画像を読み込み
    image.resize(ofGetWidth(), ofGetHeight()); //画像を画面の大きさにリサイズ
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < 10; i++) {
        //ランダムな位置を生成
        int x = int(ofRandom(ofGetWidth()));
        int y = int(ofRandom(ofGetHeight()));
        
        //生成した位置の色を取得
        ofColor color;
        color = image.getColor(x, y);
        
        //彩度を算出
        float sat = color.getSaturation();
        //色相を算出
        float hue = color.getHue();
        
        //彩度によって長さを算出
        float length = ofMap(sat, 0, 255, 0, 120);
        //色相によって角度を算出
        float angle = ofMap(hue, 0, 255, -30, 30);
        
        //回転させた四角形を描画
        ofPushMatrix();
        ofTranslate(x, y);
        ofRotate(angle);
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofSetColor(color, 63);
        ofDrawRectangle(0, 0, length, 3);
        ofPopMatrix();
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
