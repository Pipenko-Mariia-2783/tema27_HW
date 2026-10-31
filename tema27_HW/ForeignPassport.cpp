#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
    seria = 0;
    number = 0;
    lastname = "underfined";
    name = "underfined";
    birth = "01.01.01";
    cityborned = "underfined";
    issuedate = "01.01.01";
    employee = "underfined";
}

ForeignPassport::ForeignPassport(int seria, int number, string lastname,
    string name, string birth, string cityborned, 
    string issuedate, string employee)
{
    this->seria = seria;
    this->number = number;
    this->lastname = lastname;
    this->name = name;
    this->birth = birth;
    this->cityborned = cityborned;
    this->issuedate = issuedate;
    this->employee = employee;
}

void ForeignPassport::addVisa(const Visa& obj)
{
    visas.push_back(obj);
}

void ForeignPassport::showAllVises() const
{
    for (int i = 0; i < visas.size(); i++) {
        visas[i].showVisa();
    }
    
}

void ForeignPassport::showInfo() const
{
    cout << "----------UKRAINE FOREIGN PASSPORT----------" << endl;
    cout << "Seria: " << seria << endl;
    cout << "Number: " << number << endl;
    cout << "Last Name: " << lastname << endl;
    cout << "Name: " << name << endl;
    cout << "Birth date: " << birth << endl;
    cout << "Place of birth: " << cityborned << endl;
    cout << "Date of passport issuance: " << issuedate << endl;
    cout << "Issued by: " << employee << endl;
}
