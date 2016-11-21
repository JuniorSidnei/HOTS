#pragma once
#include "ofMain.h"

class maps
{
private:
	ofImage m_maps;
	float m_SizeX, m_SizeY;

public:
	void loadMap(std::string path);
	void draw(ofVec2f cam);
	void setSizeXY();
	float getSizeX();
	float getSizeY();
	maps();
	~maps();
};

