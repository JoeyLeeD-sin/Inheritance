#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string manufacturer, int yearBuilt)
{
	this->manufacturer = manufacturer;
	this->yearBuilt = yearBuilt;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

void Vehicle::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt()
{
	return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt)
{
	this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}