#include "MyString.h"

//----------------------------------------------------------------.
// brief: Constructor
// param: nothing
//
// result: nothing
//----------------------------------------------------------------.
MyString::MyString():m_string() {

};

//----------------------------------------------------------------.
// brief: Constructor
// param: char*
//
// result: nothing
//----------------------------------------------------------------.
MyString::MyString(char* str) {
	this->m_string = str;
};


//----------------------------------------------------------------.
// brief: Destructor
// param: nothing
//
// result: nothing
//----------------------------------------------------------------.
MyString::~MyString() {
	//delete m_string;
};

//----------------------------------------------------------------.
// brief: Overload operator +
// param:
//
// result: 
//----------------------------------------------------------------.
MyString operator+ (const MyString& string1, const MyString& string2) {
	MyString res_str;
	int i = 0;
	res_str = string1;
	while (res_str.m_string[i] != '\0') {
		i++;
	}
	for (int j = 0; string2.m_string[j] != '\0'; j++) {
		res_str.m_string[i] = string2.m_string[j];
		++i;
	}
	res_str.m_string[i] = '\0';
	return res_str;
};

//----------------------------------------------------------------.
// brief: Overload operator <<
// param:
//
// result: 
//----------------------------------------------------------------.
std::ostream& operator<< (std::ostream& out, MyString& string) {
	out << string.m_string;
	return out;
};

//----------------------------------------------------------------.
// brief: Overload operator >>
// param:
//
// result: 
//----------------------------------------------------------------.
std::istream& operator>> (std::istream& in, MyString& string) {
	fflush(stdin);
	char* buff = new char(100);
	in.get(buff, 100, '\n');
	string.m_string = buff;
	in.clear();
	in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return in;
};