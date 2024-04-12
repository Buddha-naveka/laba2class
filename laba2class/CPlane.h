#pragma once
#include "CVehicle.h"

class CPlane : public CVehicle {
private:
    double m_x;
    double m_y;
    double m_price;
    double m_speed;
    int m_year;
    double m_height;
    int m_passengers;
public:
  
    CPlane(double x, double y, double price, double speed, int year, int passengers, double height) : m_x(x), m_y(y), m_price(price), m_speed(speed), m_year(year), m_passengers(passengers), m_height(height) {};
    void info() override;
   


};