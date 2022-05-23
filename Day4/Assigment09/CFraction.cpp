#include "CFraction.h"

//----------------------------------------------------------------.
// brief: Constructor
// param: nothing
//
// result: nothing
//----------------------------------------------------------------.
CFraction::CFraction() {
	this->m_num = 0;
	this->m_den = 1;
};

//----------------------------------------------------------------.
// brief: Constructor
// param: Numerator and Denominator of fraction
//
// result: nothing
//----------------------------------------------------------------.
CFraction::CFraction(int num, int den) {
	this->m_num = num;
	this->m_den = den;
};

//----------------------------------------------------------------.
// brief: Destructor
// param:
//
// result: nothing
//----------------------------------------------------------------.
CFraction::~CFraction(){

};

//----------------------------------------------------------------.
// brief: getNumerator
// param:
//
// result: int
//----------------------------------------------------------------.
int CFraction::getNumerator() {
	return m_num;
};

//----------------------------------------------------------------.
// brief: setNumerator
// param:
//
// result: void
//----------------------------------------------------------------.
void CFraction::setNumerator(int num) {
	this->m_num = num;
};

//----------------------------------------------------------------.
// brief: getDenominator
// param:
//
// result: int
//----------------------------------------------------------------.
int CFraction::getDenominator() {
	return m_den;
};

//----------------------------------------------------------------.
// brief: setDenominator
// param:
//
// result: void
//----------------------------------------------------------------.
void CFraction::setDenominator(int den) {
	this->m_den = den;
};

//----------------------------------------------------------------.
// brief: Overload operator +
// param:
//
// result: 
//----------------------------------------------------------------.
CFraction operator+ (const CFraction& tem_fraction1, const CFraction& tem_fraction2) {
	CFraction res_fraction;
	res_fraction.m_num = (tem_fraction1.m_num * tem_fraction2.m_den) + (tem_fraction1.m_den * tem_fraction2.m_num);
	res_fraction.m_den = tem_fraction1.m_den * tem_fraction2.m_den;
	return res_fraction;
};

//----------------------------------------------------------------.
// brief: Overload operator -
// param:
//
// result: 
//----------------------------------------------------------------.
CFraction operator- (const CFraction& tem_fraction1, const CFraction& tem_fraction2) {
	CFraction res_fraction;
	res_fraction.m_num = (tem_fraction1.m_num * tem_fraction2.m_den) - (tem_fraction1.m_den * tem_fraction2.m_num);
	res_fraction.m_den = tem_fraction1.m_den * tem_fraction2.m_den;
	return res_fraction;
};

//----------------------------------------------------------------.
// brief: Overload operator *
// param:
//
// result: nothing
//----------------------------------------------------------------.
CFraction operator* (const CFraction& tem_fraction1, const CFraction& tem_fraction2) {
	CFraction res_fraction;
	res_fraction.m_num = tem_fraction1.m_num * tem_fraction2.m_num;
	res_fraction.m_den = tem_fraction1.m_den * tem_fraction2.m_den;
	return res_fraction;
};

//----------------------------------------------------------------.
// brief: Overload operator /
// param:
//
// result: nothing
//----------------------------------------------------------------.
CFraction operator/ (const CFraction& tem_fraction1, const CFraction& tem_fraction2) {
	CFraction res_fraction;
	res_fraction.m_num = tem_fraction1.m_num * tem_fraction2.m_den;
	res_fraction.m_den = tem_fraction1.m_den * tem_fraction2.m_num;
	return res_fraction;
};