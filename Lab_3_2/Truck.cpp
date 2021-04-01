#include "Truck.h"

Truck::Truck()
	: Car(), LoadCapac(0)
{}

Truck::Truck(const int power, const string brand, const int price, const int LoadCapac)
	: Car(power, brand, price)
{
	LoadCapac > 0 ? SetLoadCapac(LoadCapac) : SetLoadCapac(0);
}

Truck::Truck(const Truck& v)
	: Car(v), LoadCapac(v.LoadCapac)
{}

Truck& Truck::operator = (const Truck& n)
{
	Car::operator = (n);
	LoadCapac = n.LoadCapac;
	return *this;
}

Truck::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "power = " << (this->GetEngine()).GetPower() << endl;
	ss << "brand = " << GetBrand() << endl;
	ss << "price = " << GetPrice() << endl;
	ss << "Load capacity = " << GetLoadCapac() << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Truck& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Truck& s)
{
	string brand;
	int power, price, LoadCapac;
	cout << "power = "; in >> power;
	cout << "brand = "; in >> brand;
	cout << "price = "; in >> price;
	cout << "Load capacity = "; in >> LoadCapac;
	power > 0 ? s.SetEngine(power) : s.SetEngine(0);
	s.SetBrand(brand);
	price > 0 ? s.SetPrice(price) : s.SetPrice(0);
	LoadCapac > 0 ? s.SetLoadCapac(LoadCapac) : s.SetLoadCapac(0);
	return in;
}
