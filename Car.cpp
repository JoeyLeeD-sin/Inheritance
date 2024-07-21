#include "Car.h"
#include <iostream>

Car::Car(string manufacturer, int yearBuilt, int numberOfDoors) : Vehicle(manufacturer, yearBuilt)
{
	this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors()
{
	return numberOfDoors;
}

void Car::setNumberOfDoors(int numberOfDoors)
{
	this->numberOfDoors = numberOfDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of doors: " << numberOfDoors << endl;
}