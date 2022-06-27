#pragma once

#include "CShape.h"
#include "CSquare.h"
#include "CCircle.h"
#include "CLine.h"
#include "CRectangle.h"

class Picture
{
public: 
	Picture();
	~Picture();
	CShape* Arr[4];
	void draw(int x, int y);
};

