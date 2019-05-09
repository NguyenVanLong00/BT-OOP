#pragma once
#include"Date.h"
#include<iostream>
class DayTime:private Date
{
private:
	int second;
	int minute;
	int hour;
public:
	DayTime(int,int,int);
	DayTime();
	~DayTime();
	void SetSecond(int);
	void SetMinute(int);
	void SetHour(int);
	void NextNSecond(int);
	void NextNMinute(int);
	void NextNHour(int);
	void PrintTime();
	void PrintDateTime();

};

