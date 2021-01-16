#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>
class ForeingPassport :
    public Passport
{
    vector<Visa> visas;
public:
    ForeingPassport(const string& seria, const string& name, const size_t& num, const Date& birth, const Date& datePut)
        :Passport(name,seria,num,birth, datePut)
    {}
    ForeingPassport(const Passport& passport, const string& seria, const int& number, const Date& datePut)
        :ForeingPassport(seria,passport.getName(),number, passport.getBirth(),datePut)
    {}
    void addVisa(const string& country, const Date& date)
    {
        Visa v(country, date);
        visas.push_back(v);
    }
    void print() const
    {
        Passport::print();
        for (size_t i = 0; i < visas.size(); i++)
        {
            visas[i].print();
        }
    }

};

