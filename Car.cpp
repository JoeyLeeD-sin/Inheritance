#include "Car.h"
#include <iostream>

// A this pointer is set up to point to the number of doors in the car class.

Car::Car(string manufacturer, int yearBuilt, int numberOfDoors) : Vehicle(manufacturer, yearBuilt)
{
	this->numberOfDoors = numberOfDoors;
}

// Users can get the number of doors of the car

int Car::getNumberOfDoors()
{
	return numberOfDoors;
}

// Users can set the number of doors on the car

void Car::setNumberOfDoors(int numberOfDoors)
{
	this->numberOfDoors = numberOfDoors;
}

// Users can display the cars infomration to the console, including the manufacturer and year built from the inherited members

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of doors: " << numberOfDoors << endl;
}