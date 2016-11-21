#include "personagem.h"


personagem::personagem()
{
}


personagem::~personagem()
{
}

void personagem::loadImage(std::string path)
{
	this->sprite.loadImage(path);
}

void personagem::draw(ofVec2f cam)
{
	ofPopMatrix();
	ofTranslate(this->m_Position - cam);
	ofRotateZ(this->m_angle - 180);
	this->sprite.draw(0,0);
	ofPopMatrix();
}



void personagem::setMouseCliked(bool mouse)
{
	this->mouseClicked = mouse;
}

void personagem::setDestination(ofVec2f destination)
{
	this->m_destination = destination;
}

void personagem::getSizeXY()
{
	this->m_sizeX = sprite.getWidth();
	this->m_sizeY = sprite.getHeight();
}

void personagem::setAnchor()
{
	this->sprite.setAnchorPoint(m_sizeX, m_sizeY);
}

float personagem::getX()
{
	return m_Position.x;
}

float personagem::getY()
{
	return m_Position.y;
}

float personagem::getSpeed()
{
	return m_Speed;
}

float personagem::getVelX()
{
	return m_Vel.x;
}

float personagem::getVelY()
{
	return m_Vel.y;
}


void personagem::moveTo(ofVec2f target)
{
		ofVec2f  temp = target - this->m_Position;
		temp.normalize();
		this->m_Vel = this->m_Speed * temp;
		this->m_angle = atan2f(m_Vel.y, m_Vel.x) * RAD_TO_DEG;
}
void personagem::moveToWayPoint(ofVec2f target)
{
	ofVec2f temp = target - this->m_Position;
	temp.normalize();
	this->m_Vel = this->m_Speed * temp;
}
ofVec2f personagem::getPosition()
{
	return m_Position;
}

ofVec2f personagem::getVel()
{
	return m_Vel;
}
void personagem::setTime(float time)
{
	this->m_gameTime = time;
}
float personagem::getTime()
{
	return this->m_gameTime;
}



