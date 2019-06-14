#ifndef PEOPLE_H
#define PEOPLE_H
#include <iostream>
#include <string>
using namespace std;
class people
{
public:
	people();
	people(std::string n,int a,bool s,int cm);

	std::string getName();
protected:
	std::string name;
	int age;
	bool sex;
	int CMND;
};

people::people()
{
	name="";
	age=0;
	sex=0;
	CMND =000000;
}
people::people(std::string n,int a,bool s,int cm)
{
	name=n;
	age=a;
	sex=s;
	CMND=cm;
}
std::string people::getName()
{
	return name;
}
#endif