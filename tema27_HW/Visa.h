#pragma once
#include <iostream>
#include <string>
using namespace std;

class Visa
{
protected:
	string country;
	string openDate;
	string closeDate;
public:
	Visa();
	Visa(string country, string openDate, string closeDate);
	void showVisa()const;
};

