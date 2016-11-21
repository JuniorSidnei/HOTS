#include "maps.h"



void maps::loadMap(std::string path)
{
	m_maps.loadImage(path);
}

void maps::draw(ofVec2f cam)
{
	m_maps.draw(0 - cam);
}

void maps::setSizeXY()
{
	this->m_SizeX = this->m_maps.getWidth();
	this->m_SizeY = this->m_maps.getHeight();
}

float maps::getSizeX()
{
	return this->m_SizeX;
}

float maps::getSizeY()
{
	return this->m_SizeY;
}

maps::maps()
{
}


maps::~maps()
{
}
