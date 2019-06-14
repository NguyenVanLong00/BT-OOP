#pragma once
#include "people"
#include <player.h>

class MC
{
public:
	MC();
	MC(std::string n,int a,bool s,int cm)

	void AskQuestion(std::string qes,int as,bool isCorrect);
private:
	int time;
	int cachet;
};


MC::MC()
{
	people::people();
}

MC::MC(std::string n,int a,bool s,int cm)
{
	people::people(std::string n,int a,bool s,int cm)
}

void MC::AskQuestion(std::string qes,int as, player *plr)
{
	bool crr[4];
	cout<<endl<<qes<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<endl<<(plr+i)->getName()<<"turn!";
		crr[i]=(plr+i)->Answer(as);
	}
}