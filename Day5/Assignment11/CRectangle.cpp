#include "CRectangle.h"

CRectangle::CRectangle() {
	m_width = 0;
	m_height = 0;
};

CRectangle::CRectangle(int width, int height) {
	m_width = width;
	m_height = height;
};

CRectangle::~CRectangle() {

};

void CRectangle::draw(HDC device_context, int x, int y) {

	Rectangle(device_context, x, y,  m_width + x,  m_height );

};