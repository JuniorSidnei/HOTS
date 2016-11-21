#include "minions.h"



minions::minions()
{
}


minions::~minions()
{
}

void minions::updateMinion(float gameTime, float spawnTime, ofVec2f position)
{
	this->m_gameTime = spawnTime;
	this->m_angle = atan2f(m_Vel.y, m_Vel.x) * RAD_TO_DEG;
	this->m_Position += this->m_Vel * gameTime;

	if (spawnTime >= 30)
	{
		this->m_Position = position;
	}
}

void minions::setMinion(float x, float y, float speed)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
	this->m_Speed = speed;
}





