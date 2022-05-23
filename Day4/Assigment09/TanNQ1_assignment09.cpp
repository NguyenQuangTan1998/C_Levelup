#include <iostream>
#include "CFraction.h"

using namespace std;

//----------------------------------------------------------------.
// brief: Print a fraction
// param:
//
// result: 
//----------------------------------------------------------------.
void printFraction(CFraction c_fraction) {
    cout << c_fraction.getNumerator() << "/" << c_fraction.getDenominator();
};

int main()
{
    int num1, den1, num2, den2;
    // initialize two fraction
    cout << "Please input numerator of fraction1: ";
    cin >> num1;
    cout << "\nPlease input denominator of fraction1: ";
    cin >> den1;
    cout << "\nPlease input numerator of fraction2: ";
    cin >> num2;
    cout << "\nPlease input denominator of fraction2: ";
    cin >> den2;
    CFraction c_fraction1(num1,den1), c_fraction2(num2,den2);

    // plus two fraction
    cout << "\nResult of plus two fraction: ";
    printFraction(c_fraction1 + c_fraction2);
    // minus two fraction
    cout << "\nResult of minus two fraction: ";
    printFraction(c_fraction1 - c_fraction2);
    // multiply two fraction
    cout << "\nResult of multiply two fraction: ";
    printFraction(c_fraction1 * c_fraction2);
    //divide two fraction
    cout << "\nResult of divide two fraction: ";
    printFraction(c_fraction1 / c_fraction2);
}

