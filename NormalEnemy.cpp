#include "NormalEnemy.h"
#include<DxLib.h>

NormalEnemy::NormalEnemy() :characters()
{
	_x = 600;

}

void NormalEnemy::Load()
{
	LoadDivGraph("E:\\Aseprite\\enemygirlfire.png", 8, 8, 1, 64, 64, _image);
	LoadDivGraph("E:\\Aseprite\\fire_1.png", 4, 4, 1, 32, 32, _fireimage);
}

void NormalEnemy::update()
{
	_count++;
	_firecount++;
	if (_count == 8)
	{
		_count = 0;
		_count2++;
	}
	if (_count2 == 8)
	{
		_count2 = 0;
	}
	if (_firecount == 4) {
		_firecount2++;
		_firecount = 0;
	}
	if (_firecount2 == 4)
	{
		_firecount2 = 0;
	}
}
void NormalEnemy::move()
{
	
	_x -= 5;

}
void NormalEnemy::Draw()
{
	DrawGraph(_x, _y, _image[_count2], true);
}
