#pragma once
#include "personagem.h"

class Champion : public personagem
{
private:
	int m_life;
	bool skillActive[3];
	/*bool m_QSkill = false;
	bool m_WSkill = false;
	bool m_ESkill = false;
	bool m_RSkill = false;*/
	float skillCd[3];
	/*float m_Qcd = 5.0f;
	float m_Wcd;
	float m_Ecd;
	float m_Rcd;*/
	float m_damage;
	float m_atkSpeed;

public:
	Champion();
	~Champion();
	void setRengar(float x, float y, float speed, float dano, float atkspeed, int life);
	void updateRengar(float gameTime, float time);
	/*void setQSkill(bool qSkill);
	void setWSkill(bool wSkill);
	void setESkill(bool eSkill);
	void setRSkill(bool rskill);
	bool getQSkill();
	bool getWSkill();
	bool getESkill();
	bool getRSkill();
	float getQCd();
	float getWCd();
	float getECd();
	float getRCd();*/
	void setSkill(int index, bool active);
	bool getskillDeactived(int index);
	void setCd(int index, float cd);
	float getCd(int index);

};