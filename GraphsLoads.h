#pragma once
#include<DxLib.h>

class Graphs {
public:
	
	Graphs();
	~Graphs();
	virtual void Loads();
	void Release();
	void Draw(int x);
private:
	int _x;
	int _y;
	int _canon[10];
};