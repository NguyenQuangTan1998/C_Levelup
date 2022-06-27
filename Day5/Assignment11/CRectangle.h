#pragma once
#include "CShape.h"
#include <Windows.h>

class CRectangle : public CShape
{
private:
	int m_width;
	int m_height;
public:
	CRectangle();
	CRectangle(int width, int height);
	~CRectangle();
	virtual void draw(HDC device_context, int x, int y);
};

