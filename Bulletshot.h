#pragma once
#include"characters.h"
class Bulletshot final:public characters
{
public:
	Bulletshot();
	virtual ~Bulletshot() = default;
	void Load()override;
	void update()override;
	void move()override;
	void Draw()override;
};

