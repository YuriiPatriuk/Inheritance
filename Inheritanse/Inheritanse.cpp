#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
using namespace std;

int main()
{
    Vehicle vehicle("VK5438LD", 200);
    vehicle.print();

    cout <<"Start------------>"<< endl;

    Car car("12345678", 123, 100.6);
    //car.setLicencePlate("aabbggvvff"); //coz private inheritance to Vehicle
    car.print();
    cout << "----------------------------" << endl;
    Bus bus("10000001", 150, 28);
    bus.print();

    //cout <<"Cast from Car to Vehicle------>"<< endl;
    //Vehicle v = car; //неявне перетворення існує від дочірнього до базового ЯКЩО PUBLIC
    //v.print();
    //cout <<"Cast from Car& to Vehicle &------>"<< endl;

    //Vehicle& refCar = (Vehicle&)car;
    //refCar.setSpeed(100);
    //refCar.print();

    //cout << "Cast from Car* to Vehicle *------>" << endl;

    //Vehicle* reffCar = (Vehicle*)&car;
    //reffCar->setSpeed(100);
    //reffCar->print();

    //Car* ptr = (Car*)&vehicle;
    //ptr->print();

    //cout << "Cast from vehicle to car(unsafe method)------>" << endl;
    //Car testCar = *((Car*)&vehicle);
    //testCar.print();




}
