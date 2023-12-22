#include "Bulletshot.h"
#include"NormalEnemy.h"
#include"functions_math.h"
#include"Player.h"
#include<DxLib.h>
#include<math.h>
NormalEnemy ne;
functions_math fm;
Player player;
Bulletshot::Bulletshot() 
{
	_x = ne.GetX();
	_y = ne.GetY();

}
void Bulletshot::Load()
{
	LoadDivGraph("E:\\Aseprite\\fire_1.png",4,4,1,32,32,_image);
}

void Bulletshot::update()
{
	_count++;
	if (_count == 4) {
		_count = 0;
		_count2++;
	}
	if (_count2 == 4) {
		_count2 = 0;
	}
}

void  Bulletshot::move()
{
	float angle = atan2((double)(player.GetY()-ne.GetY()), (double)(player.GetX() - ne.GetX()));
	
	_x += cos(angle)*3;
	_y += sin(angle)*3;
}
void Bulletshot::Draw()
{
	DrawGraph(_x, _y, _image[_count2], true);
}
