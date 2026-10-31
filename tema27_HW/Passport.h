#pragma once
#include <iostream>
#include <string>
using namespace std;

class Passport
{
protected:
	int seria;
	int number;
	string lastname;
	string name;
	string birth;
	string cityborned;
	string issuedate;
	string employee;
private:
	string middlename;
	string registration;
public:
	Passport();
	Passport(int seria,int number, string lastname, string name, string birth,
		string cityborned, string issuedate, string employee, string middlename,
		string registration);

	void setName(string name);
	void setLastname(string lastname);
	void setRegistration(string registration);

	int getSeria()const;
	int getNumber()const;
	string getLastname()const;
	string getName()const;
	string getBirth()const;
	string getCityborned()const;
	string getIssueday()const;
	string getEmployee()const;
	string getMiddlename()const;
	string getRegistration()const;

	void showInfo()const;

};

