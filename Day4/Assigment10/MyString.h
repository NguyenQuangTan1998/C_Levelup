#pragma once
#include<iostream>
class MyString
{
public:
	MyString();
	MyString(char* str);
	~MyString();
private:
	char* m_string;
	friend MyString operator+ (const MyString&, const MyString&);
	friend std::ostream& operator << (std::ostream&, MyString&);
	friend std::istream& operator >> (std::istream&, MyString&);
};


