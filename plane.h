#pragma once
#include<iostream>
#include<string>
#include"mainclass.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

class CPlane : public CVecihle
{
public:
	
	void setheight();
	void setpeople();
	void coutistplanea();
	double getheight() { return height; }
	double getpeople() { return people; }
	/*CPlane() : height(0), people(0), CVecihle(0, 0, 0, 0, 0) {};
	CPlane(double x, double y, double price1, double speed1, double year1, double height1, double people1 ) :
		height(height1), people(people1), CVecihle(x, y, price1, speed1, year1){}*/
private:
	double height;
	double people;

	

};