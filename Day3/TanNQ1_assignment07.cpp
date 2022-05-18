#include <iostream>

using namespace std;

//----------------------------------------------------------------.
// brief: plus two number
// param:  
//
// return: float
//----------------------------------------------------------------.
float Plus(float a, float b) {
	return a + b;
}

//----------------------------------------------------------------.
// brief: minus two number
// param:  
//
// return: float
//----------------------------------------------------------------.
float Minus(float a, float b) {
	return a - b;
}

//----------------------------------------------------------------.
// brief: multiply two number
// param:  
//
// return: float
//----------------------------------------------------------------.
float Multiply(float a, float b) {
	return a * b;
}

//----------------------------------------------------------------.
// brief: devide two number
// param:  
//
// return: float
//----------------------------------------------------------------.
float Devide(float a, float b) {
	return a / b;
}

//----------------------------------------------------------------.
// brief: 
// param:  
//
// return: void
//----------------------------------------------------------------.
void operation(float a, float b, float(*p2Func)(float, float)) {
	float result = p2Func(a, b);
	cout << result;
}

int main()
{
	float a, b;
	cout << "Please input number 1 (a): ";
	cin >> a;
	cout << "Please input number 2 (b): ";
	cin >> b;
	cout << "a + b = ";
	operation(a, b, &Plus);
	cout << "\na - b = ";
	operation(a, b, &Minus);
	cout << "\na x b = ";
	operation(a, b, &Multiply);
	cout << "\na : b = ";
	operation(a, b, &Devide);
}

