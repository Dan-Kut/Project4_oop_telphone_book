#include "Date.h"
#include "iostream"

using namespace std;

Date::Date(int day1, int month1, int year1)
{
	day = day1;
	month = month1;
	year = year1;
}

void Date::printDate()
{
	cout << this->day << "." << this->month << "." << this->year;
}
