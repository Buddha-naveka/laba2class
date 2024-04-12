#include "CVehicle.h"
#include "CShip.h"
#include "CPlane.h"
#include "CCar.h"
int main() {
   /* setlocale(LC_ALL, "");
    system("chcp 1251");*/
    std::vector<CVehicle*> planes;
    std::vector<CVehicle*> ships;
    std::vector<CVehicle*> cars;
    CVehicle* transport;
    double x;
    double y;
    double price;
    double speed;
    int year;
    double height;
    int passengers;
    string port;
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
            
            cout << "Enter the data: " << endl;
            cout << "The coordinate x:";
            cin >> x;
            cout << "The coordinate y:";
            cin >> y;
            cout << "Price:";
            cin >> price;
            cout << "Speed:";
            cin >> speed;
            cout << "Year:";
            cin >> year;
            cout << "Passagir:";
            cin >> passengers;
            cout << "Height:";
            cin >> height;
            transport = new CPlane(x, y, price, speed, year, passengers, height);
            planes.push_back(transport);

            break;
        case 2:
            
            cout << "The coordinate x:";
            cin >> x;
            cout << "The coordinate y:";
            cin >> y;
            cout << "Price:";
            cin >> price;
            cout << "Speed:";
            cin >> speed;
            cout << "Year:";
            cin >> year;
            cout << "Passagir:";
            cin >> passengers;
            cout << "Name port:";
            cin >> port;
            transport = new CShip(x, y, price, speed, year, passengers, port);
            ships.push_back(transport);
            break;
        case 3:
            cout << "The coordinate x:";
            cin >> x;
            cout << "The coordinate y:";
            cin >> y;
            cout << "Price:";
            cin >> price;
            cout << "Speed:";
            cin >> speed;
            cout << "Year:";
            cin >> year;
            transport = new CCar(x, y, price, speed, year);
            cars.push_back(transport);
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
                        planes[i]->info();
                    }
                    if (planes.size() == 0)
                    {
                        cout << "No information found." << endl;
                    }
                    break;
                case 2:
                    cout << "Information about the ship in the list." << endl;
                    for (int i = 0; i < ships.size(); i++)
                    {
                        cout << i + 1 << ") ";
                        ships[i]->info();
                    }
                    if (ships.size() == 0)
                    {
                        cout << "No information found." << endl;
                    }
                    break;
                case 3:
                    cout << "Information about the car in the list." << endl;
                    for (int i = 0; i < cars.size(); i++)
                    {
                        cout << i + 1 << ") ";
                        cars[i]->info();
                    }
                    if (cars.size() == 0)
                    {
                        cout << "No information found." << endl;
                    }
                    break;
                }

            }
            break;
        }
    }
};