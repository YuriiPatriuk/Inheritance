#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Visa
{
	string country;
	Date date;
public:
	Visa(const string& country, const Date& date)
		:country(country), date(date)
	{}
	void print() const
	{
		cout << "Visa in " << country << " was issued in ";
		date.print();
	}
};

