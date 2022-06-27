#pragma once
#include<Windows.h>
class CShape
{
private:
	int color;
public:
	virtual void draw(HDC device_context, int x, int y) = 0;
};

