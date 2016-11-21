#pragma once
#include "ofMain.h"

class wayPoints
{
private:
	ofVec2f m_Position;
	//ofVec2f m_WayPointPath[15];
	ofImage m_wayPoint;
	bool m_active = false;

public:
	//void setPathCoordenates(int index, float x, float y);
	void loadWayPoint(std::string path);
	void drawWayPoint(ofVec2f camera);
	ofVec2f getPosXY();
	void setActive(bool active);
	void setPos(float x, float y);
	wayPoints();
	~wayPoints();
};

