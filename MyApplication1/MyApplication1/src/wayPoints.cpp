#include "wayPoints.h"



wayPoints::wayPoints()
{
}


wayPoints::~wayPoints()
{
}
//void wayPoints::setPathCoordenates(int index, float x, float y)
//{
	//this->m_WayPointPath[index].x = x;
	//this->m_WayPointPath[index].y = y;
//}
void wayPoints::loadWayPoint(std::string path)
{
	this->m_wayPoint.loadImage(path);
}

void wayPoints::drawWayPoint(ofVec2f camera)
{
	if(this->m_active == true)
		this->m_wayPoint.draw(0 - camera.x, 0 - camera.y);
}

ofVec2f wayPoints::getPosXY()
{
	return this->m_Position;
}

void wayPoints::setActive(bool active)
{
	this->m_active = active;
}

void wayPoints::setPos(float x, float y)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
}




