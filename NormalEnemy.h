#pragma once
#include"characters.h"
#include"GraphsLoads.h"
class NormalEnemy final: public characters 
{
public:
	NormalEnemy();
	virtual ~NormalEnemy()=default;
	void Load()override;
	void update()override;
	void move()override;
	void Draw() override;
	//void HitArea() override;


};

