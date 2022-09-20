#include "carriage.hpp"

void TCarriage::Move(char left, char right, float borderL, float borderR) 
{
	if (GetKeyState(left) < 0) x -= dx;
	else if (GetKeyState(right) < 0) x += dx;

	if (x - length < borderL) x = borderL + length; 
	if (x + length > borderR) x = borderR - length;
}