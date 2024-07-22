#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

// A derived class, Truck, has been created from the base class, Vehicle. The Truck class includes the addition of the towingCapacity member and inherits the other public members from the Vehicle class.

class Truck : public Vehicle
{
private:
	int towingCapacity;

public:
	Truck(string manufacturer, int yearBuilt, int towingCapacity);
	int getTowingCapacity();
	void setTowingCapacity(int towingCapacity);
	void displayInfo();
};

#endif