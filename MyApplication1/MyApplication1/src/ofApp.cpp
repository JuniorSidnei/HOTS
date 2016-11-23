#include "ofApp.h"
#include "personagem.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	index = 1;
	///Rengar
	Rengar.setRengar(600, 1300, 350.0f, 20.0f, 15.0f, 400, 20.0f, 15.0f);
	Rengar.loadImage("Rengar.png");
	Rengar.getSizeXY();
	Rengar.setAnchor();

	
	///Minions
	for (int i = 0; i < 3; i++)
	{
		Minion[i].loadImage("Minion.png");
		Minion[i].getSizeXY();
		Minion[i].setAnchor();
	}
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
	
	Rengar.updateRengar(ofGetLastFrameTime(), ofGetElapsedTimef());
	for(int i = 0; i < 3; i++)
		Minion[i].updateMinion(ofGetLastFrameTime());

	//Spawn
	for (int i = 0; i < 3; i++)
	{
		if (ofGetElapsedTimef() < 30)
			Minion[i].setPosition(WayPoint[0].getPosXY());
		else
			Minion[i].moveToWayPoint(WayPoint[index].getPosXY());
		if (Minion[i].getPosition().distanceSquared(WayPoint[index].getPosXY()) < 36)
		{
			Minion[i].moveToWayPoint(WayPoint[index++].getPosXY());
			index = index >= 4 ? 4 : index;
		}
	}

	
		if (spaceBar) {
			World.setPosition(Rengar.getPosition() - ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2));
		}
		else {
			ofVec2f mouse2(Mouse.getPos());
			if (mouse2.x > ofGetWindowWidth() * 0.95f)
			{
				World.setPosition(World.getPosition() + ofVec2f(500.0f * ofGetLastFrameTime(), 0.0f));
			}
			else if (mouse2.x < ofGetWindowWidth() * 0.05f)
			{
				World.setPosition(World.getPosition() + ofVec2f(-500.0f * ofGetLastFrameTime(), 0.0f));

			}
			if (mouse2.y > ofGetWindowHeight() * 0.95f)
			{
				World.setPosition(World.getPosition() + ofVec2f(0.0f, 500.0f * ofGetLastFrameTime()));

			}
			else if (mouse2.y < ofGetWindowHeight() * 0.05f)
			{
				World.setPosition(World.getPosition() + ofVec2f(0.0f, -500.0f * ofGetLastFrameTime()));

			}
		}

	

	
	
	
	
}

//--------------------------------------------------------------
void ofApp::draw()
{
	

	Map.draw(World.getPosition());
	WayPointsImage.drawWayPoint(World.getPosition());
	for(int i = 0; i <3; i ++)
		Minion[i].draw(World.getPosition());
	Rengar.draw(World.getPosition());
	
	ofDrawBitmapString("Tempo segundos: " + ofToString(Rengar.getTime()), 10, 30);
	ofDrawBitmapString("Damage: " + ofToString(Rengar.getDamage()), 10, 50);
	ofDrawBitmapString("Magic Resist: " + ofToString(Rengar.getMResist()), 10, 70);
	ofDrawBitmapString("Speed: " + ofToString(Rengar.getSpeed()), 10, 90);
	ofDrawBitmapString("Armor: " + ofToString(Rengar.getArmor()), 10, 110);
	ofDrawBitmapString("Q Cd " + ofToString(Rengar.getCd(0)), 10, 110);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	if (key == 'p')
		WayPointsImage.setActive(true);

	if (key == 'q' && Rengar.getCd(0) == 0)
	{
		Rengar.setFerocity(1);
		Rengar.setSkill(0, true);
	}
	if (key == 'w' && Rengar.getCd(1) == 0)
	{
		Rengar.setFerocity(1);
		Rengar.setSkill(1, true);
	}
	if (key == 'e' && Rengar.getCd(2) == 0)
	{
		Rengar.setFerocity(1);
		Rengar.setSkill(2, true);
	}
	if (key == 'r' && Rengar.getCd(3) == 0)
		Rengar.setSkill(3, true);

	if (key == GLFW_KEY_SPACE)
		spaceBar = true;
} 

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	if (key == 'o')
		WayPointsImage.setActive(false);
	if (key == GLFW_KEY_SPACE)
		spaceBar = false;
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
		Mouse.mousePress(Rengar, ofVec2f(x, y) + World.getPosition());
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
