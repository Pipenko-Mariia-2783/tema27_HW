#include "Visa.h"

Visa::Visa()
{
	country = "underfined";
	openDate = "01.01.01";
	closeDate = "01.01.01";
}

Visa::Visa(string country, string openDate, string closeDate)
{
	this->country = country;
	this->openDate = openDate;
	this->closeDate = closeDate;

}

void Visa::showVisa() const
{
	cout << "----------VISA----------" << endl;
	cout << "Name of country: " << country << endl;
	cout << "Start visa from: " << openDate << endl;
	cout << "Finish visa to: " << closeDate << endl;
}
