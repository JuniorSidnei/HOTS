#pragma once
#include "personagem.h"

class Champion : public personagem
{
private:
	int m_life;
	bool skillActive[3];
	float skillCd[3];

	float m_damage;
	float m_atkSpeed;

public:
	Champion();
	~Champion();
	void setRengar(float x, float y, float speed, float dano, float atkspeed, int life);
	void updateRengar(float gameTime, float time);
	void setSkill(int index, bool active);
	bool getskillDeactived(int index);
	void setCd(int index, float cd);
	float getCd(int index);

};