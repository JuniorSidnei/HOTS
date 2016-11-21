#include "cam.h"



cam::cam()
{
}


cam::~cam()
{
}

ofVec2f cam::getPosition()
{
	return m_Position;
}

void cam::setPosition(ofVec2f position)
{
	m_Position = position;
}
float cam::getPosX()
{
	return this->m_Position.x;
}

float cam::getPosY()
{
	return this->m_Position.y;
}

