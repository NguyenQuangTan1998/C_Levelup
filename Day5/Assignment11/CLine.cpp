#include "CLine.h"
#include <Windows.h>

CLine::CLine() {
	m_lenght = 0;
};

CLine::CLine(int lenght) {
	m_lenght = lenght;
};

CLine::~CLine() {
};

void CLine::draw(HDC device_context, int x, int y) {

	LineTo(device_context, x, y);

};

void CLine::setLenght(int lenght) {
	m_lenght = lenght;
};

int CLine::getLenght() {
	return m_lenght;
};
