#include "Car.h"

Car::Car()
	: engine(0), price(0), brand("")
{}

Car::Car(const int apower, const string abrand, const int aprice)
	: engine(apower), brand(abrand)
{
	aprice > 0 ? SetPrice(aprice) : SetPrice(0);
}

Car::Car(const Car& v)
	: engine(v.engine), brand(v.brand), price(v.price)
{}

Car& Car::operator = (const Car& n)
{
	engine = n.engine;
	brand = n.brand;
	price = n.price;
	return *this;
}

Car::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "power = " << GetEngine().GetPower() << endl;
	ss << "brand = " << GetBrand() << endl;
	ss << "price = " << GetPrice() << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Car& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Car& s)
{
	string brand;
	int price;
	cout << "power = "; in >> s.engine;
	cout << "brand = "; in >> brand;
	cout << "price = "; in >> price;
	price > 0 ? s.SetPrice(price) : s.SetPrice(0);
	return in;
}