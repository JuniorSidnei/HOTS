#include "mouse.h"



mouse::mouse()
{
}


mouse::~mouse()
{
}

void mouse::setPosition(ofVec2f position)
{
	m_Position.x = position.x;
	m_Position.y = position.y;
}

void mouse::setPosX(float x)
{
	this->m_Position.x = x;
}

void mouse::setPosY(float y)
{
	this->m_Position.y = y;
}

ofVec2f mouse::getPos()
{
	return m_Position;
}

float mouse::getPosX()
{
	return this->m_Position.x;
}

float mouse::getPosY()
{
	return this->m_Position.y;
}

void mouse::mousePress(personagem& rengar)
{
	rengar.setMouseCliked(true);
	rengar.setDestination(m_Position);

}


