#pragma once
#include <iostream>
#include <vector>
//using namespace std;
using std::endl;
using std::cout;
using std::vector;
using std::string;
using std::cin;
class CVehicle {
private:
    double m_x;
    double m_y;
    double m_price;
    double m_speed;
    int m_year;
public:
    CVehicle() : m_x(0), m_y(0), m_price(0), m_speed(0), m_year(0) {};

    virtual void info() {};
    
};
