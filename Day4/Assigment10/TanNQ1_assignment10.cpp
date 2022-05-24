#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString string1, string2, stringpls;
    cout << "Please input fisrt string: ";
    cin >> string1;
    cout << string1 << "\n";
    cout << "Please input second string: ";
    cin >> string2;
    cout << string2 << "\n";
    stringpls = string1 + string2;
    cout << stringpls;
}

