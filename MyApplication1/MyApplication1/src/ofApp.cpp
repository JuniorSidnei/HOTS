#include "ofApp.h"
#include "personagem.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	///Rengar
	Rengar.setRengar(600, 1300, 350.0f);
	Rengar.loadImage("Rengar.png");
	Rengar.getSizeXY();
	Rengar.setAnchor();
	
	///Minions
	//for (int i = 0; i < 3; i++)
	//{
		Minion.setMinion(800, 1300, 250.0f);
		Minion.loadImage("Minion.png");
		Minion.getSizeXY();
		Minion.setAnchor();
	//}
	Map.loadMap("Mapa.png");
	WayPointsImage.loadWayPoint("WayPoints.png");

	///Setando wayPoints
	//Top
	WayPoint[0].setPos(510, 955); //Spawn
	WayPoint[1].setPos(840, 740);
	WayPoint[2].setPos(1400, 350);
	WayPoint[3].setPos(2470, 350);
	WayPoint[4].setPos(3330, 770);

	//Mid
	WayPoint[5].setPos(510, 1130); //Spawn
	WayPoint[6].setPos(1030, 1280);
	WayPoint[7].setPos(1480, 1260);
	WayPoint[8].setPos(2370, 1260);
	WayPoint[9].setPos(3200, 1230);

	//Bot
	WayPoint[10].setPos(530, 1350); //Spawn
	WayPoint[11].setPos(790, 1670);
	WayPoint[12].setPos(1430, 2090);
	WayPoint[13].setPos(2450, 2130);
	WayPoint[14].setPos(3300, 1600);
}

//--------------------------------------------------------------
void ofApp::update()
{
	Rengar.updateRengar(ofGetLastFrameTime(), ofGetElapsedTimef(), WayPoint[0].getPosXY());

	/*for (int i = 0; i < 14; i++)
	{
		Minion.updateMinion(ofGetLastFrameTime(), ofGetElapsedTimef(), WayPoint[i].getPosXY());
	}*/

	World.setPosition(World.getPosition());

	ofVec2f mouse2(Mouse.getPos());
	if (mouse2.x > ofGetWindowWidth() * 0.95f)
	{
		World.setPosition(World.getPosition() + ofVec2f(500.0f * ofGetLastFrameTime(), 0.0f));
	}
	else if (mouse2.x < ofGetWindowWidth() * 0.05f)
	{
		World.setPosition(World.getPosition() + ofVec2f(- 500.0f * ofGetLastFrameTime(), 0.0f));
		
	}
	if (mouse2.y > ofGetWindowHeight() * 0.95f)
	{
		World.setPosition(World.getPosition() + ofVec2f(0.0f, 500.0f * ofGetLastFrameTime()));
		
	}
	else if (mouse2.y < ofGetWindowHeight() * 0.05f)
	{
		World.setPosition(World.getPosition() + ofVec2f(0.0f, - 500.0f * ofGetLastFrameTime()));
		
	}

	
	
	
	
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofDrawBitmapString("Posicao x: " + ofToString(Rengar.getX()), 10, 10);
	ofDrawBitmapString(" y: " + ofToString(Rengar.getY()), 150, 10);
	ofDrawBitmapString("Tempo segundos: " + ofToString(Rengar.getTime()), 10, 30);

	Map.draw(World.getPosition());
	WayPointsImage.drawWayPoint(World.getPosition());
	Rengar.draw(World.getPosition());
	Minion.draw(World.getPosition());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	if (key == 'p')
		WayPointsImage.setActive(true);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	if (key == 'o')
		WayPointsImage.setActive(false);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{
	Mouse.setPosition(ofVec2f (x,y));
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
	//if (button == 0)
	//{
	Mouse.setPosition(ofVec2f(x, y) + World.getPosition());
		Mouse.mousePress(Rengar);
	//}
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
