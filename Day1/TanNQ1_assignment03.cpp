// TanNQ1_assignment03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool isLeapYear(int year);

int numberOfMonth(int month, int year);

void nextDay(int date, int month, int year);

void previousDay(int date, int month, int year);

int main()
{
    int date, month, year;
    cout << " CALENDAR";
    cout << "\n\n\n Input dd/mm/yyyy\n";
    cout << " date: ";
    cin >> date;
    cout << " month: ";
    cin >> month;
    cout << " year:";
    cin >> year;
    while (year < 0 || month < 0 || month>12 || date<0 || date>numberOfMonth(month, year)) {
        cout << "\nNhap sai ngay thang nam. Moi nhap lai\n";
        cout << " date: ";
        cin >> date;
        cout << " month: ";
        cin >> month;
        cout << " year:";
        cin >> year;
    }
    cout << "\n\n\n =========MENU=========\n";
    cout << " 1.Find the number of month\n";
    cout << " 2.Show next day (dd/mm/yyyy)\n";
    cout << " 3.Show previous day (dd/mm/yyy)\n";
    int option;
    cin >> option;
    switch (option) {
    case 1:
        cout << "Number of month: " << numberOfMonth(month, year);
        //break;
    case 2:
        cout << "\nThe next day: ";
        nextDay(date, month, year);
        //break;
    case 3:
        cout << "\nThe previous day: ";
        previousDay(date, month, year);
        //break;
    default:
        break;
    }
}

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    if (year % 400 == 0)
        return true;
    return false;
}

int numberOfMonth(int month, int year) {
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    }
}

void nextDay(int date, int month, int year) {
    int nextDay = 0, nextMonth = 0, nextYear = 0;
    if (date == numberOfMonth(month, year)) {
        if (month == 12) {
            nextYear = year + 1;
            nextMonth = 1;
            nextDay = 1;
        }
        else {
            nextYear = year;
            nextMonth = month +1;
            nextDay = 1;
        }
    }
    else {
        nextDay = date + 1;
        nextMonth = month;
        nextYear = year;
    }
    cout << nextDay << "/" << nextMonth << "/" << nextYear;
}

void previousDay(int date, int month, int year) {
    int previousDay = 0, previousMonth = 0, previousYear = 0;
    if (date == 1) {
        if (month == 1) {
            previousYear = year - 1;
            previousMonth = 12;
            previousDay = 31;
        }
        else {
            previousYear = year;
            previousMonth = month - 1;
            previousDay = numberOfMonth(previousMonth, previousYear);
        }
    }
    else {
        previousDay = date - 1;
        previousMonth = month;
        previousYear = year;
    }
    cout << previousDay << "/" << previousMonth << "/" << previousYear;
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
