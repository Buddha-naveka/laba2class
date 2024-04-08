#pragma once
#include<iostream>
#include<string>
#include"mainclass.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

class CShip : public CVecihle
{
public:
	void setnameport();
	void setpeople();
	void coutistshipa();
	string getnameport() { return nameport; }
	double getpeople() { return people; }
	/*CShip() : nameport(""), people(0), CVecihle(0, 0, 0, 0, 0) {};
	CShip(double x, double y, double price1, double speed1, double year1, string nameport1, double people1) :
		nameport(nameport1), people(people1), CVecihle(x, y, price1, speed1, year1) {}*/
private:
	string nameport;
	double people;


};