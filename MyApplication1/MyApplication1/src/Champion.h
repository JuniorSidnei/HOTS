#pragma once
#include "personagem.h"

class Champion : public personagem
{
private:
	int m_life;
	bool skillActive[3];
	float skillCd[3];
	float m_damage, m_armor, m_magicResist;
	float m_atkSpeed;
	int m_ferocity;

public:
	Champion();
	~Champion();
	void setRengar(float x, float y, float speed, float dano, float atkspeed, int life, float armor, float mresist);
	void updateRengar(float gameTime, float time);
	void setSkill(int index, bool active);
	float getDamage();
	float getArmor();
	float getMResist();
	float getPosX();
	float getPosY();
	int getSkill(int index);
	bool getskillDeactived(int index);
	void setCd(int index, float cd);
	float getCd(int index);
	void setFerocity(int ferocity);
	int getFerocity();

};