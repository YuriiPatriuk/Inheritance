#pragma once
#include <string>
using namespace std;

class Vehicle
{
public:
	void setSpeed(const size_t& speed);
	void setLicencePlate(const string& plate);
	const string& getLicencePlate() const;
	const size_t& getSpeed() const;
	Vehicle(const string& licencePlate = "AA0000AA", const size_t& speed = 0);
	~Vehicle(); //spec for demo
	void print() const;
	

private:
	string licencePlate;

protected:
	size_t speed;
};

inline const size_t& Vehicle::getSpeed() const
{
	return speed;
}

inline const string& Vehicle::getLicencePlate() const
{
	return licencePlate;
}

