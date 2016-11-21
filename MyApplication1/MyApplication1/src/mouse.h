#pragma once
#include "ofMain.h"
#include "personagem.h"

class mouse
{
private:
	ofVec2f m_Position;

public:
	mouse();
	~mouse();
	void setPosition(ofVec2f position);
	void setPosX(float x);
	void setPosY(float y);
	ofVec2f getPos();
	float getPosX();
	float getPosY();
	void mousePress(personagem& rengar, ofVec2f mouse);
};

