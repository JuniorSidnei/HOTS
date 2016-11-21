#pragma once
#include "personagem.h"

class Champion : public personagem
{
private:
	bool m_wayPoint1, m_wayPoint2, m_wayPoint3, m_wayPoint4;
	int index;

public:
	Champion();
	~Champion();
	void setRengar(float x, float y, float speed);
	void updateRengar(float gameTime, float time);
	void setWayPoint1(bool waypoint1);
	void setWayPoint2(bool waypoint2);
	void setWayPoint3(bool waypoint3);
	void setWayPoint4(bool waypoint4);
	void setIndex(int index);
	int getIndex();
	bool getWayPoint1();
	bool getWayPoint2();
	bool getWayPoint3();
	bool getWayPoint4();
};

