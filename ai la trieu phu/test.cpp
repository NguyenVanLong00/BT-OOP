
#include <iostream>
#include <string>
using namespace std;

class people
{
public:
	people(){name="";
	age=0;
	sex=0;
	CMND =000000;}
	people(std::string n,int a,bool s,int cm){name=n;
	age=a;
	sex=s;
	CMND=cm;}
	std::string getName(){
	return name;
}
protected:
	std::string name;
	int age;
	bool sex;
	int CMND;
};


class player : public people
{
public:
	player(){
	people::people();
	id=0;
	score=0;
	chapter=0;
	isLose=0;
}
	player(std::string n,int a,bool s,int cm, int i,int sc,int chp,int ils){
	people::people(n,a,s,cm);
	id=i;
	score=sc;
	chapter=chp;
	isLose=ils;	
}

	bool Answer(int da){
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


private:
	int id;
	int score;
	int chapter;
	bool isLose;
};

int main()
{
	people x;
	player y;
	return 0;

}

/*

/////////////// MC

class MC :public people
{
public:
	MC();
	MC(std::string n,int a,bool s,int cm);

	void AskQuestion(std::string qes,int as,player *plr);
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
	people::people(n,a,s,cm);
}

void MC::AskQuestion(std::string qes,int as, player *plr)
{
	bool crr[4];
	cout<<endl<<qes<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<endl<<(plr+i)->getName()<<" turn!";
		crr[i]=(plr+i)->Answer(as);
	}
	for(int i=0;i<4;i++)
	{
		cout<< endl<<" Correct anser is: "<<as;
		if(crr[i])
		{
			cout<<endl<<(plr+i)->getName()<<" Anser correct!";
		}
		else
		{
			cout<<endl<<(plr+i)->getName()<<" Anser incorrect!";
		}
	}
}






int main()
{
	//people x;
	//player y;
	MC z;
}
//////////// player
/*
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
	people::people();
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


/////////////// MC

class MC :public people
{
public:
	MC();
	MC(std::string n,int a,bool s,int cm);

	void AskQuestion(std::string qes,int as,player *plr);
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
	people::people(n,a,s,cm);
}

void MC::AskQuestion(std::string qes,int as, player *plr)
{
	bool crr[4];
	cout<<endl<<qes<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<endl<<(plr+i)->getName()<<" turn!";
		crr[i]=(plr+i)->Answer(as);
	}
	for(int i=0;i<4;i++)
	{
		cout<< endl<<" Correct anser is: "<<as;
		if(crr[i])
		{
			cout<<endl<<(plr+i)->getName()<<" Anser correct!";
		}
		else
		{
			cout<<endl<<(plr+i)->getName()<<" Anser incorrect!";
		}
	}
}*/