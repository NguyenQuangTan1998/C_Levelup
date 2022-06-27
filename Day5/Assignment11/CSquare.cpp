#include "CSquare.h"

CSquare::CSquare() {
	m_size = 0;
};

CSquare::CSquare(int size) {
	m_size = size;
};

CSquare::~CSquare() {

};

int CSquare::getSize() {
	return m_size;
};

void CSquare::setSize(int size) {
	m_size = size;
};

void CSquare::draw(HDC device_context, int x, int y) {

	Rectangle(device_context, x, y, m_size + x, m_size);

};