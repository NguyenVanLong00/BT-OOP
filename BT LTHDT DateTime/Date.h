#pragma once
#include<iostream>
class Date
{
protected:
	int day;
	int month;
	int year;
public:
	Date(int,int,int);
	Date();
	~Date();
	void NextNDay(int);
	bool IsLeapYear();
	int MaxDayOfMonth();
	void NextNMonth(int);
	void PrintDate();
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);
};

