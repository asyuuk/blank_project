#pragma once
class functions_math
{
public:
	float Angleshot_A_x(float x, float y, float ex, float ey);//相手との角度を出してcos sinで弾を出す。その際弾は追跡しない。
	float Angleshot_A_y(float x, float y, float ex, float ey);//相手との角度を出してcos sinで弾を出す。その際弾は追跡しない。

	int Angleshot_B(int x, int y, int ex, int ey);//相手との角度を出してcos sinで弾を出す。徐々に弾は追跡する。
};

