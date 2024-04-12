#pragma once
#include "CVehicle.h"

class CCar : public CVehicle {
public:

    CCar(double x, double y, double price, double speed, int year) : m_x(x), m_y(y), m_price(price), m_speed(speed), m_year(year) {};
    void info() override;
private:
    double m_x;
    double m_y;
    double m_price;
    double m_speed;
    int m_year;
};