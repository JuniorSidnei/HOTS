#include "Champion.h"



Champion::Champion()
{
}


Champion::~Champion()
{
}
void Champion::updateRengar(float gameTime, float time)
{
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
	///Without ferocity ability
	//Q
	if (getSkill(0) == true)
	{
		m_damage = 60.0f;
		m_atkSpeed += 5.0f;
		setCd(0, 6.0f);
		setSkill(0, false);
	}
	//W
	if (getSkill(1) == true)
	{
		m_armor += 10.0f;
		m_magicResist += 5.0f;
		setCd(1, 15.0f);
	}
	//E

	//R
	if (getSkill(3) == true)
	{
		m_Speed = 450.0f;
		setCd(2, 120.0f);
	}
	
	this->m_Position += this->m_Vel * gameTime;
}

void Champion::setSkill(int index, bool active)
{
	skillActive[index] = active;
}

float Champion::getDamage()
{
	return m_damage;
}

float Champion::getArmor()
{
	return m_armor;
}

float Champion::getMResist()
{
	return m_magicResist;
}

float Champion::getPosX()
{
	return m_Position.x;
}

float Champion::getPosY()
{
	return m_Position.y;
}

int Champion::getSkill(int index)
{
	return skillActive[index];
}

bool Champion::getskillDeactived(int index)
{
	return skillActive[index];
}

void Champion::setCd(int index, float cd)
{
	skillCd[index] = cd;
}

float Champion::getCd(int index)
{
	return skillCd[index];
}

void Champion::setFerocity(int ferocity)
{
	m_ferocity = ferocity;
}

int Champion::getFerocity()
{
	return m_ferocity;
}
void Champion::setRengar(float x, float y, float speed, float dano, float atkspeed, int life, float armor, float mresist)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
	this->m_Speed = speed;
	this->m_damage = dano;
	this->m_atkSpeed = atkspeed;
	this->m_life = life;
	this->m_armor = armor;
	this->m_magicResist = mresist;
}
