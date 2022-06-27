#pragma once

#include "CRectangle.h"

class CSquare : public CRectangle
{
private:
	int m_size;
public:
	CSquare();
	CSquare(int size);
	~CSquare();
	int getSize();
	void setSize(int size);
	virtual void draw(HDC device_context, int x, int y);
};

