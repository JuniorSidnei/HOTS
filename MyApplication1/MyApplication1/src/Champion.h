#pragma once
#include "personagem.h"

class Champion : public personagem
{
public:
	Champion();
	~Champion();
	void setRengar(float x, float y, float speed);
	void updateRengar(float gameTime, float time, ofVec2f positionWayPoint);
};

