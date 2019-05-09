#include "DayTime.h"




DayTime::DayTime(int s=6,int m=6,int h=6)
{
	SetHour(h);
	SetMinute(m);
	SetSecond(s);
}
DayTime::DayTime()
{
	SetHour(6);
	SetMinute(6);
	SetSecond(6);
}
DayTime::~DayTime()
{
	
}

void DayTime::SetHour(int n)
{
	hour = 0;
	NextNHour(n);
}
void DayTime::SetMinute(int n) 
{
	minute = 0;
	NextNMinute(n);
}
void DayTime::SetSecond(int n)
{
	second = 0;
	NextNSecond(n);
}

void DayTime::NextNHour(int n)
{
	while (n+ hour > 23)
	{
		n = n - 24 + hour;
		NextNDay(1);
		hour = 0;
	}
	hour = hour + n;
}
void DayTime::NextNMinute(int n)
{
	while (n + minute > 59)
	{
		n = n - 60 + minute;
		NextNHour(1);
		minute = 0;
	}
	minute = minute + n;
}
void DayTime::NextNSecond(int n)
{
	while (n + second > 59)
	{
		n = n - 60 + second;
		NextNMinute(1);
		second = 0;
	}
	second = second + n;
}

void DayTime::PrintTime()
{
	std::cout << hour << ':' << minute << ':' << second<<' ';
}
void DayTime::PrintDateTime()
{
	PrintTime();
	PrintDate();
}