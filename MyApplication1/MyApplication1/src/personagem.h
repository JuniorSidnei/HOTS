#pragma once
#include "ofMain.h"

class personagem
{
protected:
	ofVec2f m_Position;
	ofVec2f m_Vel;
	ofVec2f m_destination;
	ofRectangle m_Player;
	ofImage sprite;
	float m_Speed, m_angle = 0, m_sizeX, m_sizeY, m_gameTime;
	bool mouseClicked = false;

public:
	personagem();
	~personagem();
	void loadImage(std::string path);
	void draw(ofVec2f cam);
	void setMouseCliked(bool mouse);
	void setDestination(ofVec2f destination);
	void getSizeXY();


	void setPos(ofVec2f pos) {
		m_Position = pos;
	}
	void setAnchor();
	void setTime(float time);
	float getX();
	float getY();
	float getSpeed();
	float getTime();
	float getVelX();
	float getVelY();
	void moveTo(ofVec2f target);
	void moveToWayPoint(ofVec2f target);
	//ofVec2f getPos();
	ofVec2f getPosition();
	ofVec2f getVel();
	
	
};



