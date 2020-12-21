#pragma once
#include "Vehicle.h"
class Car : private Vehicle
{
public:
	void setPower(const double& power);
	double getPower() const;
	Car(const string& licence = "AA0000AA", const size_t& speed = 0, const double& power = 0);
	void print() const;
	~Car();


private:
	double power;

};

