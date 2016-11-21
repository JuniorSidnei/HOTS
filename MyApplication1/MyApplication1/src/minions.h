#pragma once
#include "personagem.h"

class minions : public personagem
{

public:
	minions();
	~minions();
	void updateMinion(float gameTime);
	void setMinion(float x, float y, float speed);
	
	
};

