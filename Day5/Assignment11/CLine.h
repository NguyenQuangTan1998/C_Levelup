#pragma once
#include "CShape.h"

class CLine : public CShape 
{
private:
	int m_lenght;
public:
	CLine();
	CLine(int value);
	~CLine();
	virtual void draw(HDC device_context, int x, int y);
	void setLenght(int value);
	int getLenght();
};

