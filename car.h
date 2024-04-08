#pragma once
#include<iostream>
#include<string>
#include"mainclass.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

class CCar : public CVecihle
{
public:
	void coutistcara();
	/*CCar() : CVecihle(0, 0, 0, 0, 0) {};
	CCar(double x, double y, double price1, double speed1, double year1) :
		 CVecihle(x, y, price1, speed1, year1) {}*/
};