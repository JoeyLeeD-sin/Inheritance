#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

// A derived class, Car, has been created from the base class, Vehicle. The Car class includes the addition of the numberOfDoors member and inherits the other public members from the Vehicle class.

class Car : public Vehicle
{
private:
	int numberOfDoors;

public:
	Car(string manufacturer, int yearBuilt, int numberOfDoors);
	int getNumberOfDoors();
	void setNumberOfDoors(int numberOfDoors);
	void displayInfo();
};

#endif