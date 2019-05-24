#pragma once
#include<iostream>
#include<string>
using namespace std;

class Human
{
protected:
	std::string name;
	int level;
	int HP;
	int atk;
public:
	Human() { name = ""; level = 1; HP = 100; atk = 10; }
	Human(std::string n, int lv = 1, int h = 100, int a = 10)
	{
		name = n;
		level = lv;
		HP = h;
		atk = a;
	}
	~Human() {}
	void StatusView()
	{
		cout << "Name: " << name << endl;
		cout << "Level:" << level << endl;
		cout << "HP: " << HP << endl;
		cout << "Atk: " << atk << endl;
	}
	int GetDam()
	{
		return atk;
	}
	void TakeDam(double dam)
	{
		HP -= dam;
	}

};


