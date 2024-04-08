#include"car.h"
#include"mainclass.h"

void CCar::coutistcara()
{
	cout << "The car is heading to the coordinates " << getgox() << " , " << getgoy() << " . " << endl;
	cout << "Ticket price: " << getprice() << " rub.." << endl;
	cout << "The speed of the car: " << getspeed() << " km/h." << endl;
	cout << "Car release date: " << getyear() << " year." << endl;
}