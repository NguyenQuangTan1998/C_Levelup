#pragma once
#include<iostream>
class CFraction
{
public:
	CFraction();
	CFraction(int num, int den);
	~CFraction();
	int getNumerator();
	void setNumerator(int num);
	int getDenominator();
	void setDenominator(int den);

private:
	int m_num, m_den;
	friend CFraction operator+ ( const CFraction&, const CFraction&);
	friend CFraction operator- (const CFraction&, const CFraction&);
	friend CFraction operator* (const CFraction&, const CFraction&);
	friend CFraction operator/ (const CFraction&, const CFraction&);
};

