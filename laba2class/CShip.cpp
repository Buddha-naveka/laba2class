#include "CShip.h"
void CShip::info()
{
	cout << "Coordinates: " << m_x << "; " << m_y << endl;
	cout << "Price: " << m_price << endl;
	cout << "Speed: " << m_speed << endl;
	cout << "Year of release: " << m_year << endl;
	cout << "Port name: " << m_nameport << endl;
	cout << "Number of passengers: " << m_passengers << endl;
}
