#pragma once
#include "Human.h"
class Bot :
	public Human
{
private:
	double atkR;
public:
	Bot()
		:Human() {}
	Bot(std::string n, int lv = 1, int h = 100, int atk = 10, double R = 1.1)
		:Human(n, lv, h, atk), atkR(R) {}
	~Bot() {}
	void Attack(Human &enemy)
	{
		enemy.TakeDam(GetDam()*atkR);
	}
};
