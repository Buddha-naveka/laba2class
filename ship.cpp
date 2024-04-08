#include"ship.h"
#include"mainclass.h"

void CShip::setnameport()
{
	cout << "Enter the name of the port: ";
	cin >> nameport;
	
}
void CShip::setpeople()
{
	cout << "Number of passengers on the ship: ";
	cin >> people;
}
void CShip::coutistshipa()
{
	cout << "The ship is heading to the coordinates " << getgox() << " , " << getgoy() << " . " << endl;
	cout << "Ticket price: " << getprice() << " rub.." << endl;
	cout << "The speed of the ship: " << getspeed() << " km/h." << endl;
	cout << "Ship release date: " << getyear() << " year." << endl;
	cout << "Name port: " << nameport << " ." << endl;
	cout << "Number of passengers: " << people << " ." << endl;
}