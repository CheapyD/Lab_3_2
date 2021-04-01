#pragma once
#include "Car.h"

class Truck : public Car
{
private:
	int LoadCapac;

public:
	int GetLoadCapac() const { return LoadCapac; }
	void SetLoadCapac(int value) { LoadCapac = value; }

	Truck();
	Truck(const int power, const string brand, const int price, const int LoadCapac);
	Truck(const Truck& s);

	Truck& operator = (const Truck& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Truck& s);
	friend istream& operator >> (istream& in, Truck& s);
};

