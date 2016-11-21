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
	
	this->m_Position += this->m_Vel * gameTime;
}

void Champion::setSkill(int index, bool active)
{
	skillActive[index] = active;
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

//void Champion::setQSkill(bool qSkill)
//{
//	this->m_QSkill = qSkill;
//}
//
//void Champion::setWSkill(bool wSkill)
//{
//	this->m_WSkill = wSkill;
//}
//
//void Champion::setESkill(bool eSkill)
//{
//	m_ESkill = eSkill;
//}
//
//void Champion::setRSkill(bool rskill)
//{
//	m_RSkill = rskill;
//}
//
//bool Champion::getQSkill()
//{
//	return m_QSkill;
//}
//
//bool Champion::getWSkill()
//{
//	return m_WSkill;
//}
//
//bool Champion::getESkill()
//{
//	return m_ESkill;
//}
//
//bool Champion::getRSkill()
//{
//	return m_RSkill;
//}
//
//float Champion::getQCd()
//{
//	return m_Qcd;
//}
//
//float Champion::getWCd()
//{
//	return m_Wcd;
//}
//
//float Champion::getECd()
//{
//	return m_Ecd;
//}
//
//float Champion::getRCd()
//{
//	return m_Rcd;
//}


void Champion::setRengar(float x, float y, float speed, float dano, float atkspeed, int life)
{
	this->m_Position.x = x;
	this->m_Position.y = y;
	this->m_Speed = speed;
	this->m_damage = dano;
	this->m_atkSpeed = atkspeed;
	this->m_life = life;
}
