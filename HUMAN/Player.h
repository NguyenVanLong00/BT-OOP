#pragma once
#include"Human.h"
class Player :public Human
{
protected:
	int score;
public:
	Player()
		:Human(), score(0)
	{}
	Player(std::string n, int lv = 1, int h = 100, int a = 10)
		:Human(n, lv, h, a), score(0)
	{}
	~Player() {}

	void Attack(Human &enemy)
	{
		enemy.TakeDam(GetDam());
	}
};
