#include "CCircle.h"
#include <Windows.h>
CCircle::CCircle() {
	m_radium = 0;
};

CCircle::CCircle(int radium) {
	m_radium = radium;
};

CCircle::~CCircle() {

};

void CCircle::draw(HDC device_context, int x, int y) {

	Ellipse(device_context, x, y, 2 * m_radium, 2 * m_radium);

};

int CCircle::getRadium() {
	return m_radium;
};

void CCircle::setRadium(int radium) {
	m_radium = radium;
};