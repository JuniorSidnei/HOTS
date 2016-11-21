#include "Champion.h"



Champion::Champion()
{
}


Champion::~Champion()
{
}
void Champion::updateRengar(float gameTime, float time)
{
	//this->m_gameTime = time;
	

	if (mouseClicked)
	{
		moveTo(m_destination);
		if (this->m_Position.distanceSquared(m_destination) < 36)
		{
			this->m_Position = m_destination;
			this->m_Vel.set(0, 0);
			this->mouseClicked = false;
		}
	}
	//if (time >= 30)
	//{
	//	setWayPoint1(true);
	//	if (getWayPoint1() == true)
	//		moveToWayPoint(position);
	//	
	//	/*moveToWayPoint(positionWayPoint);
	//	if (this->m_Position == positionWayPoint)
	//		this->m_Vel.set(0, 0);*/
	//}

	this->m_Position += this->m_Vel * gameTime;
}
void Champion::setWayPoint1(bool waypoint1)
{
	this->m_wayPoint1 = waypoint1;
}
void Champion::setWayPoint2(bool waypoint2)
{
	this->m_wayPoint2 = waypoint2;
}
void Champion::setWayPoint3(bool waypoint3)
{
	this->m_wayPoint3 = waypoint3;
}
void Champion::setWayPoint4(bool waypoint4)
{
	this->m_wayPoint4 = waypoint4;
}
void Champion::setIndex(int index)
{
	this->index = index;
}
int Champion::getIndex()
{
	return this->index;
}
bool Champion::getWayPoint1()
{
	return this->m_wayPoint1;
}
bool Champion::getWayPoint2()
{
	return this->m_wayPoint2;
}
bool Champion::getWayPoint3()
{
	return this->m_wayPoint3;
}
bool Champion::getWayPoint4()
{
	return this->m_wayPoint4;
}

void Champion::setRengar(float x, float y, float speed)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
	this->m_Speed = speed;
}
