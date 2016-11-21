#pragma once
#include "personagem.h"

class minions : public personagem
{

public:
	minions();
	~minions();
	void updateMinion(float gameTime, float spawnTime, ofVec2f position);
	void setMinion(float x, float y, float speed);
	
	
};

