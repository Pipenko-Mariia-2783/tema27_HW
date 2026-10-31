#include "Passport.h"

Passport::Passport()
{
    seria = 0;
    number = 0;
    lastname = "underfined";
    name = "underfined";
    birth = "01.01.01";
    cityborned = "underfined";
    issuedate = "01.01.01";
    employee = "underfined";
    middlename = "underfined";
    registration = "underfined";
}

Passport::Passport(int seria, int number, string lastname, string name, 
    string birth, string cityborned, string issuedate, string employee,
    string middlename, string registration)
{
    this->seria = seria;
    this->number = number;
    this->lastname = lastname;
    this->name = name;
    this->birth = birth;
    this->cityborned = cityborned;
    this->issuedate = issuedate;
    this->employee = employee;
    this->middlename = middlename;
    this->registration = registration;

}

void Passport::setName(string name)
{
    this->name = name;
}

void Passport::setLastname(string lastname)
{
    this->lastname = lastname;
}

void Passport::setRegistration(string registration)
{
    this->registration = registration;
}

int Passport::getSeria() const
{
    return seria;
}

int Passport::getNumber() const
{
    return number;
}

string Passport::getLastname() const
{
    return lastname;
}

string Passport::getName() const
{
    return name;
}

string Passport::getBirth() const
{
    return birth;
}

string Passport::getCityborned() const
{
    return cityborned;
}

string Passport::getIssueday() const
{
    return issuedate;
}

string Passport::getEmployee() const
{
    return employee;
}

string Passport::getMiddlename() const
{
    return middlename;
}

string Passport::getRegistration() const
{
    return registration;
}

void Passport::showInfo()const
{
    cout << "----------UKRAINE PASSPORT----------" << endl;
    cout << "Seria: " << seria << endl;
    cout << "Number: " << number << endl;
    cout << "Last Name: " << lastname << endl;
    cout << "Name: " << name << endl;
    cout << "Middle Name: " << middlename << endl;
    cout << "Birth date: " << birth << endl;
    cout << "Place of birth: " << cityborned << endl;
    cout << "Date of passport issuance: " << issuedate << endl;
    cout << "Issued by: " << employee << endl;
    cout << "Registration: " << registration << endl;

}
