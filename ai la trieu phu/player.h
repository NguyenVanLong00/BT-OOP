#pragma once
#include "people.h"


class player : public people
{
public:
	player();
	player(std::string n,int a,bool s,int cm, int i,int sc,int chp,int ils);
	bool Answer(int da);

private:
	int id;
	int score;
	int chapter;
	bool isLose;
};

player::player()
{
	people::people()
	id=0;
	score=0;
	chapter=0;
	isLose=0;
}
player::playerplayer(std::string n,int a,bool s,int cm, int i,int sc,int chp,int ils)
{
	people::people(n,a,s,cm);
	id=i;
	score=sc;
	chapter=chp;
	isLose=ils;	
}

bool people::Answer(int da)
{
	int x;
	cout<<endl<<"your finel answer is:";
	std::cin>>x;
	cout<<endl;
	if(x==da)
	{
		score+=100;
		return true;
	}
	return false;
}