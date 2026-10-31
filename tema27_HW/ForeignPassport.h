#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>
class ForeignPassport :
    public Passport
{
    vector<Visa> visas;
public:
    ForeignPassport();
    ForeignPassport(int seria, int number, string lastname, string name, string birth,
        string cityborned, string issuedate, string employee);
    void addVisa(const Visa&obj);
    void showAllVises()const;
    void showInfo()const;
};

