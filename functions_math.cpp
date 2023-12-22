#include "functions_math.h"
#include<math.h>
#include<DxLib.h>


float functions_math::Angleshot_A_x(float x,float y,float ex,float ey)
{
	float Speedx=0;
	double x_ = (ex - x);
	double y_ = (ey - y);
	float Angle = atan2(x_ , y_);
	
	
	Speedx += cos(Angle) * 2;
	
	return Speedx;
}


float functions_math::Angleshot_A_y(float x, float y, float ex, float ey)
{
	float Speedy=0;
	double  x_ = (ex - x);
	double y_ = (ey - y);
	float Angle = atan2(x_ , y_);
	
	Speedy += sin(Angle) * 2;
	
	return Speedy;
}



