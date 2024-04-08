#pragma once
#include<iostream>
#include<string>
//#include"plane.h"
//#include"ship.h"
//#include"car.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;



class CVecihle
{
public:
	 void setgox() ;
	 void setgoy() ;
	 void setprice() ;
	 void setspeed() ;
	void setyear() ;
	//void coutistplane(const CPlane& vivod);
	//void coutistship(const CShip& vivod);
	//void coutistcar(const CCar& vivod);
	double getgox() { return gox; }
	double getgoy() { return goy; }
	double getprice() { return price; }
	double getspeed() { return speed; }
	double getyear() { return year; }

	/*CVecihle() :
		gox(0), goy(0), price(0), speed(0), year(0) {}
	CVecihle(double x, double y, double price1, double speed1, double year1) :
		gox(x), goy(y), price(price1), speed(speed1), year(year1) {}*/

private:
	double gox;
	double goy;
	double price;
	double speed;
	double year;
	

};