#include"plane.h"
#include"mainclass.h"



void CPlane::setheight()
{
	cout << "Flying height: ";
	cin >> height;
}
void CPlane::setpeople()
{
	cout << "Number of passengers on the Plane: ";
	cin >> people;
}
void CPlane::coutistplanea()
{
	cout << "The plane is heading to the coordinates " << getgox() << " , " << getgoy() << " . " << endl;
	cout << "Ticket price: " << getprice() << " rub.." << endl;
	cout << "The speed of the plane: " << getspeed() << " km/h." << endl;
	cout << "Plane release date: " << getyear() << " year." << endl;
	cout << "Flying height: " << height << " km." << endl;
	cout << "Number of passengers: " << people << endl;
}
