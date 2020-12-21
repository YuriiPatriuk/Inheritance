#include "Vehicle.h"
#include <iostream>
void Vehicle::setSpeed(const size_t& speed)
{
	this->speed = speed;
}

void Vehicle::setLicencePlate(const string& plate)
{
	if (plate.size() != 8)
		return;
	this->licencePlate = plate;

}

Vehicle::Vehicle(const string& licencePlate, const size_t& speed)
{
	setLicencePlate(licencePlate);
	setSpeed(speed);
	cout << "CTOR WORKED FOR CAR "<<licencePlate << endl;
}

Vehicle::~Vehicle()
{
	cout << "DTOR FOR VEHICLE " << licencePlate << endl;
}

void Vehicle::print() const
{
	cout << "Vehicle: " << licencePlate << endl;
	cout<<"Current speed: " << speed << endl;
}
