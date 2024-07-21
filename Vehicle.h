#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

// Header file for the base Vehicle class. The get and set manufacturer information, year built, and the displayinfo variables will be passed to any derived classes. 

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle(string manufacturer, int yearBuilt);
	string getManufacturer();
	void setManufacturer(string manufacturer);
	int getYearBuilt();
	void setYearBuilt(int yearBuilt);
	virtual void displayInfo();
};

#endif