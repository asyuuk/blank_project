#pragma once
class characters
{
public:

//値の初期化	
	characters();
	virtual ~characters()=default;
	virtual void Load()=0;
	virtual void update()=0;
	virtual void move()=0;
	virtual void Draw()=0;
	//virtual void HitArea() = 0;

//値の返値、設定値
	void SetX(int x) { x = _x; }
	int GetX() { return _x; }
	void SetY(int y) { y = _y; }
	int GetY() { return _y; }


protected:
	float _x;
	float _y;
	int _image[40];
	int _fireimage[40];
	int _firecount;
	int _firecount2;
	int _count;
	int _count2;
	int _encount;
	int _encount2;
	bool visible;

	
};

