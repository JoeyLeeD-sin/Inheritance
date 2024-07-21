#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

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