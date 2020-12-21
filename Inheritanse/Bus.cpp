#include "Bus.h"
#include <iostream>
using namespace std;

void Bus::setSeats(const size_t& count)
{
	if (count <= 5 || count > 32)
		return;
	seats = count;
}

Bus::Bus(const string& licence, const size_t& speed, const size_t& count)
	:Vehicle(licence, speed)
{
	setSeats(count);
}

void Bus::print() const
{
	cout <<"Licence: "<< getLicencePlate() << endl;
	cout <<"Speed: "<< speed << endl;
	cout <<"Seats: "<< seats << endl;
}
