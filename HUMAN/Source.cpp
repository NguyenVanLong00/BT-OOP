#pragma once
#include<iostream>
#include"Player.h"
#include"Bot.h"
using namespace std;

int main()
{
	Human human1("human");
	Player pl1("player");
	Bot bot1("bot");

	for (int i = 0; i < 5; i++)
	{
		bot1.Attack(human1);
		pl1.Attack(bot1);
	}
	human1.StatusView();
	pl1.StatusView();
	bot1.StatusView();
	
	
	
	system("pause");
	return 0;
}
