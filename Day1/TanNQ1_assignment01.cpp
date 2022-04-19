// Day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>

using namespace std;

bool IsNumber(char s[], int n);
bool CheckPalindrome(char s[], int n);

int main()
{
	char s[100];
	cout << "Nhap vao so n: ";
	fgets(s, 100, stdin);
	int n = strlen(s) - 1;
	while (!IsNumber(s, n)) {
		cout << "\nBan da nhap sai dinh dang so!\nMoi nhap lai so n: ";
		fgets(s, 100, stdin);
		n = strlen(s) - 1;
	}
	if (CheckPalindrome(s, n))
		cout << s << " la so doi xung\n";
	else
		cout << s << " khong la so doi xung\n";
	return 0;
}

bool IsNumber(char s[], int n) {
	if (s[0] == '0')
		return false;
	if (n == 0)
		return false;
	for (int i = 0; i < n; i++) {
		if (s[i] < '0' || s[i]>'9')
			return false;
	}
	return true;
}
bool CheckPalindrome(char s[], int n) {
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (s[i] != s[j])
			return false;
		else {
			i++;
			j--;
		}
	}
	return true;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
