#include "Date.h"



Date::Date(int day=1, int month=1, int year=1970)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
}
Date::Date()
{
	SetYear(1970);
	SetMonth(1);
	SetDay(1);
}
Date::~Date()
{
}
void Date::SetDay(int n)
{
	day = 0;
	NextNDay(n);
}
void Date::SetMonth(int n)
{
	month = 0;
	NextNMonth(n);
}
void Date::SetYear(int n)
{
	year = n;
}
void Date::PrintDate()
{
	std::cout << day << '/' << month << '/' << year << std::endl;
}
bool Date::IsLeapYear()
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	return false;
}
int Date::MaxDayOfMonth()
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else if (month == 2)
	{
		if (IsLeapYear())
			return 29;
		return 28;
	}
	else
		return 31;
}
void Date::NextNMonth(int n)
{
	while (month+n > 12)
	{
		n = n - 12 + month-1;
		year = year + 1;
		month = 1;
	}
	month = month + n;
}
void Date::NextNDay(int n)
{
	while (day + n > MaxDayOfMonth())
	{
		n = n - MaxDayOfMonth() + day-1;
		day = 1;
		NextNMonth(1);
	}
	day = day + n;


}