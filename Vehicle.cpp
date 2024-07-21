#include "Vehicle.h"
#include <iostream>

// A this pointer is set up to point to the manufacturer and year built memory in the vehicle class.

Vehicle::Vehicle(string manufacturer, int yearBuilt)
{
	this->manufacturer = manufacturer;
	this->yearBuilt = yearBuilt;
}

// Users can get the manufacturer of the vehicle

string Vehicle::getManufacturer()
{
	return manufacturer;
}

// Users can set the manufacturer for the vehicle

void Vehicle::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}

// Users can get the year the vehicle was built.

int Vehicle::getYearBuilt()
{
	return yearBuilt;
}

// Users can set the year the vehicle was built. 

void Vehicle::setYearBuilt(int yearBuilt)
{
	this->yearBuilt = yearBuilt;
}

// The manufacturer and year the vehicle was built can be displayed in the console. 

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}