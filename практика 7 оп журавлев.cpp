#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
class Car
{
protected:
	string CarModel;
public:
	Car() { CarModel = "Tesla"; }
};

class Bus
{
protected:
	string BusModel;
public:
	Bus() { BusModel = "Kia Granbird"; }
};

class Bike
{
protected:
	string BikeModel;
public:
	Bike() { BikeModel = "Stels"; }
};

struct Transport : public Car, public Bus, public Bike
{
	void printNames()
	{
		cout << "Model of the car - " << CarModel << endl;
		cout << "Model of the bus - " << BusModel << endl;
		cout << "Model of the bike - " << BikeModel << endl;
	}
	~Transport() {}
};

int main()
{
	Transport transports;
	transports.printNames();
	system("PAUSE");
	return 0;
}