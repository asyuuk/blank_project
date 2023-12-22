#pragma once

class Player
{
public:
	Player();
	virtual ~Player()=default;
	void Loads();
	void Update();
	void Draw();
	void Move();
	int GetX() { return _x; }
	int GetY() { return _y; }
	void SetX(int x) { _x += x; }
	void SetY(int y) { _y += y; }
protected:
	float _x;
	float _y;
	int _image[40];
	int _image_walk[40];
	int _image_walkleft[40];
	int _image_idle[40];
	int _image_jump[40];
	int _walkcount;
	int _walkcount2;
	int _walkcountleft;
	int _walkcountleft2; 
	int _jump;
	int _jump2;
	int _count;
	int _count2;
	bool flag;
	bool flag2;
};

