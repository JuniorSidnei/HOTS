#pragma once
#include "ofMain.h"
class cam
{
private:

	ofVec2f m_Position;

public:
	cam();
	~cam();
	ofVec2f getPosition();
	void setPosition(ofVec2f position);
	float getPosX();
	float getPosY();
};

