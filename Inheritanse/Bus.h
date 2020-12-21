#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
	//places print ctor
public:
	void setSeats(const size_t& count);
	Bus(const string& licence = "AA0000AA", const size_t& speed = 0, const size_t& count = 0);
	void print() const;

private:
	size_t seats;
};

