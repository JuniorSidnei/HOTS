#include "minions.h"



minions::minions()
{
}


minions::~minions()
{
}

void minions::updateMinion(float gameTime)
{
	//this->m_angle = atan2f(m_Vel.y, m_Vel.x) * RAD_TO_DEG;
	//this->m_Position += this->m_Vel * gameTime;
}

void minions::setMinion(float x, float y, float speed)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
	this->m_Speed = speed;
	this->m_Vel.set(0, 0);
}





