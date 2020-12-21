#include "Car.h"
#include <iostream>
using namespace std;
void Car::setPower(const double& power)
{
	if (power < 0)
		return;
	this->power = power;
}

double Car::getPower() const
{
	return power;
}

Car::Car(const string& licence, const size_t& speed, const double& power)
	:Vehicle(licence, speed)
{
	cout << "CTOR FOR CAR " << licence << " works" << endl;
	setPower(power);
}

void Car::print() const
{
	//Vehicle::print(); //call method from parent class
	cout <<"Car "<<getLicencePlate()<<"\nSpeed: "<<speed<< "\nPower: " << power << endl;
}

Car::~Car()
{
	cout << "DTOR FOR CAR " << getLicencePlate() << endl;
}
