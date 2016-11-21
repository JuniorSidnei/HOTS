#include "Champion.h"



Champion::Champion()
{
}


Champion::~Champion()
{
}
void Champion::updateRengar(float gameTime, float time, ofVec2f positionWayPoint)
{
	this->m_gameTime = time;
	

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
	if (time >= 30)
	{
		moveToWayPoint(positionWayPoint);
		if (this->m_Position == positionWayPoint)
			this->m_Vel.set(0, 0);
	}

	this->m_Position += this->m_Vel * gameTime;
}
void Champion::setRengar(float x, float y, float speed)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
	this->m_Speed = speed;
}
