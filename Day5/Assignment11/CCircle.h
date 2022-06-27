#pragma once

#include "CShape.h"

class CCircle : public CShape
{
private:
	int m_radium;
public:
	CCircle();
	CCircle(int radium);
	~CCircle();
	virtual void draw(HDC device_context, int x, int y);
	int getRadium();
	void setRadium(int radium);
};

