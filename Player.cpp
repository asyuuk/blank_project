#include "Player.h"
#include<DxLib.h>
Player::Player() :_x(10.0), _y(10.0), _count(0), _count2(0), _walkcount(0), _walkcount2(0), _walkcountleft(0), _walkcountleft2(0),flag(1),_jump(0),_jump2(0),flag2(0){
}

void Player::Loads()
{
	LoadDivGraph("E:\\Aseprite\\witchmili.png", 4, 4, 1, 64, 64, _image);
	LoadDivGraph("E:\\Aseprite\\walkwitchmili.png", 6, 6, 1, 64, 64, _image_walk);
	LoadDivGraph("E:\\Aseprite\\walkwitchmili_walkleft.png", 6, 6, 1, 64, 64, _image_walkleft);
	LoadDivGraph("E:\\Aseprite\\witchmili_left.png", 4, 4, 1, 64, 64, _image_idle);
	LoadDivGraph("E:\\Aseprite\\witchmili_right_Rotate.png", 5, 5, 1, 64, 64, _image_jump);

}

void Player::Move()
{
	if (CheckHitKey(KEY_INPUT_SPACE)!=0) {
		Player::SetY(5);
	}
	
	if (CheckHitKey(KEY_INPUT_W)) {
		Player::SetY(-5);
		
	}
	if (CheckHitKey(KEY_INPUT_S))
	{
		
		Player::SetY(5);
	}
	if (CheckHitKey(KEY_INPUT_D)) {

		Player::SetX(5);
		
	}
	if (CheckHitKey(KEY_INPUT_A)) {
		
		Player::SetX(-5);
	}
}

void Player::Update()
{
	
	_count++;
	if (CheckHitKey(KEY_INPUT_SPACE) ){
		_jump++;
		if (_jump == 5) {
			_jump = 0;
			_jump2++;
		}
		if (_jump2 == 5) {
			_jump2 = 0;
		}
	}
	if (CheckHitKey(KEY_INPUT_W)) {
		
	}
	if (CheckHitKey(KEY_INPUT_S))
	{
		
	}
	if (CheckHitKey(KEY_INPUT_D) == 1) {
		_walkcount++;
		if (_walkcount == 6) {
			_walkcount = 0;
			_walkcount2++;
		}
		if (_walkcount2 == 6)_walkcount2 = 0;
	}
	if (CheckHitKey(KEY_INPUT_A)) {
		_walkcountleft++;
		if (_walkcountleft == 6) {
			_walkcountleft = 0;
			_walkcountleft2++;
		}
		if (_walkcountleft2 == 6)_walkcountleft2 = 0;
	}
	if (_count == 4) {
		_count = 0;
		_count2++;
	}
	if (_count2 == 4)_count2 = 0;

}

void Player::Draw()
{
	if (CheckHitKey(KEY_INPUT_SPACE)!=0) {
		DrawGraph(_x, _y, _image_jump[_jump2], true);

	}
	else if (CheckHitKey(KEY_INPUT_D)!=0) {
		
		DrawGraph(_x, _y, _image_walk[_walkcount2], true);
		flag2 = 0;
		flag = 1;
	}
	else if (CheckHitKey(KEY_INPUT_A)!=0) {
		
		DrawGraph(_x, _y, _image_walkleft[_walkcountleft2], true);
		flag = 0;
		flag2 = 1;
	}
	else if (flag == 1) {
		DrawGraph(_x, _y, _image[_count2], true);
		
	}
	else if(flag2==1){
		DrawTurnGraph(_x, _y, _image[_count2], true);

	}
	
}