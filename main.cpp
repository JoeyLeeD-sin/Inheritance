/*
	Name: Joe Davudson
	Class: CIS1202
	Date: 07/21/2024
	Project Name: Inheritance
	Project Description: Develop a base and derived classes to represent different types of vehicles. Then program a short driver to these classes.
*/





#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	string manufacturer;
	int yearBuilt, numberOfDoors, towingCapacity;

	// Vehicle

	cout << "Eneter the vehicle's manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year the vehicle was built: ";
	cin >> yearBuilt;
	Vehicle vehicle(manufacturer, yearBuilt);
	cout << "\nVehicle Information:\n";
	vehicle.displayInfo();

	// Car


	cout << "\nEnter the car's manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year the car was built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors on the car: ";
	cin >> numberOfDoors;
	Car car(manufacturer, yearBuilt, numberOfDoors);
	cout << "\nCar Information:\n";
	car.displayInfo();

	// Truck


	cout << "\nEnter the manufacturer of the truck: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year the truck was built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity in pounds: ";
	cin >> towingCapacity;
	Truck truck(manufacturer, yearBuilt, towingCapacity);
	cout << "\nTruck Information:\n";
	truck.displayInfo();

	return 0;
}