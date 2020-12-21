#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Passport
{
public:
	Passport(const string& name, const string& series, const size_t& number, const Date& birthday, const Date& issuance);
	void setName(const string& name);
	void setSeries(const string& series);
	void setNumber(const size_t& number);
	void setBirthday(const Date& birthday);
	void setDateOfIssuance(const Date& issuance);
	void print();

private:
	string name = "default";
	string series = "default";
	size_t number = 0;
	Date birthday = {1,1,2000};
	Date issuance = { 1,1,2000 };

};

