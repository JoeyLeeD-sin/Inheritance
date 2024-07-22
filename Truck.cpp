#include "Truck.h"
#include <iostream>

// A this pointer is set up to point to the towing capacity member in the truck class.

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt)
{
	this->towingCapacity = towingCapacity;
}

// Users can get the towing capacity of the truck

int Truck::getTowingCapacity()
{
	return towingCapacity;
}

// Users can set the towing capacity of the truck

void Truck::setTowingCapacity(int towingCapacity)
{
	this->towingCapacity = towingCapacity;
}

// Users can display the trucks infomration to the console, including the manufacturer and year built from the inherited members

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}