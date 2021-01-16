#include <iostream>
#include "Passport.h"
#include "Date.h"
using namespace std;

Passport::Passport(const string& name, const string& series, const size_t& number, const Date& birthday, const Date& issuance)
{
    setName(name);
    setSeries(series);
    setNumber(number);
    setBirthday(birthday);
    setDateOfIssuance(issuance);
}

void Passport::setName(const string& name)
{
    if (sizeof(name) != 0)
        this->name = name;
}

void Passport::setSeries(const string& series)
{
    if (sizeof(series) != 0)
        this->series = series;
}

void Passport::setNumber(const size_t& number)
{
    this->number = number;
}

void Passport::setBirthday(const Date& birthday)
{
    this->birthday = birthday;
}

void Passport::setDateOfIssuance(const Date& issuance)
{
    this->issuance = issuance;
}

void Passport::print() const
{
    cout <<"Name: "<< name << endl;
    cout <<"Series: "<< series << endl;
    cout <<"Number: "<< number << endl;
    cout << "Date of birthday: ";
    birthday.print();
    cout << "Date of issuance: ";
    issuance.print();
}
