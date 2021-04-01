#pragma once
#include "Engine.h"

class Car
{
private:
	Engine engine;
	string brand;
	int price;

public:
	Engine GetEngine() const { return engine; }
	string GetBrand() const { return brand; }
	int GetPrice() const { return price; }

	void SetEngine(Engine value) { engine = value; }
	void SetBrand(string value) { brand = value; }
	void SetPrice(int value) { price = value; }

	Car();
	Car(const int power, const string brand, const int price);
	Car(const  Car& s);

	Car& operator = (const  Car& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const  Car& s);
	friend istream& operator >> (istream& in, Car& s);
};

