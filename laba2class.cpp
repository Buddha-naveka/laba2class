
#include"mainclass.h"
#include <iostream>
#include"plane.h"
#include"ship.h"
#include"car.h"
#include <vector>

int main()
{
    std::vector<CPlane> planes;
    std::vector<CShip> ships;
    std::vector<CCar> cars;
    CVecihle v;
    CPlane p;
    CShip s;
    CCar c;
    int number = 0;
    int number1 = 0;
    while (number != 5)
    {
        cout << "Select a means of transportation!\n";
        cout << "1.Plane" << endl;
        cout << "2.Ship" << endl;
        cout << "3.Car" << endl;
        cout << "4.Cout" << endl;
        cout << "5.End" << endl;

        cin >> number;
        switch (number)
        {
        case 1:
          //  CVecihle * plane = new CPlane(0, 0, 0, 0, 0, 0, 0);
            p.setgox();
            p.setgoy();
            p.setprice();
            p.setspeed();
            p.setyear();
            p.setpeople();
            p.setheight();
            cout << endl;
           // p.coutistplanea(p);
            cout << endl;
            planes.push_back(p);
            break;
        case 2:
            s.setgox();
            s.setgoy();
            s.setprice();
            s.setspeed();
            s.setyear();
            s.setpeople();
            s.setnameport();
            cout << endl;
           // s.coutistshipa(s);
            cout << endl;
            ships.push_back(s);
            break;
        case 3:
            c.setgox();
            c.setgoy();
            c.setprice();
            c.setspeed();
            c.setyear();
            cout << endl;
          // c.coutistcara(c);
            cout << endl;
            cars.push_back(c);
            break;
        case 4:
            while (number1 != 4)
            {
                cout << "Select transport!\n";
                cout << "1.Plane" << endl;
                cout << "2.Ship" << endl;
                cout << "3.Car" << endl;
                cout << "4.End" << endl;
                cin >> number1;
                switch (number1)
                {
                case 1:
                    cout << "Information about the plane in the list." << endl;
                    for (int i = 0; i < planes.size(); i++)
                    {
                        cout << i + 1 << ") ";
                        planes[i].coutistplanea();
                    }
                    break;
                case 2:
                    cout << "Information about the ship in the list." << endl;
                    for (int i = 0; i < ships.size(); i++)
                    {
                        cout << i + 1 << ") ";
                        ships[i].coutistshipa();
                    }
                    break;
                case 3:
                    cout << "Information about the car in the list." << endl;
                    for (int i = 0; i < cars.size(); i++)
                    {
                        cout << i + 1 << ") ";
                        cars[i].coutistcara();
                    }
                    break;
                }

            }
            break;
        }
    }
}



