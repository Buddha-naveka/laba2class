#pragma once
#include "CVehicle.h"

class CShip : public CVehicle {
private:
    double m_x;
    double m_y;
    double m_price;
    double m_speed;
    int m_year;
    int m_passengers;
    string m_nameport;
public:
    CShip(double x, double y, double price, double speed, int year, int passengers, string nameport) : m_x(x), m_y(y), m_price(price), m_speed(speed), m_year(year), m_passengers(passengers), m_nameport(nameport) {};
    void info() override;
   
};