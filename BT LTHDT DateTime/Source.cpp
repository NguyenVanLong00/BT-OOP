#include<iostream>
#include"Date.h"
#include"DayTime.h"
using namespace std;

int main()
{
	DayTime today;
	today.PrintDateTime();
	today.NextNSecond(60 * 60 * 24 * 365);// 1 year
	today.PrintDateTime();

	
	
	system("pause");
	return 0;
}