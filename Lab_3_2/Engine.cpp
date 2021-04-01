#include "Engine.h"

Engine::Engine()
	: power(0)
{}

Engine::Engine(const int power)
{
	power > 0 ? SetPower(power) : SetPower(0);
}

Engine::Engine(const Engine& v)
	: power(v.power)
{}

Engine& Engine::operator = (const Engine& n)
{
	power = n.power;
	return *this;
}

Engine::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "power = " << GetPower() << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Engine& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Engine& s)
{
	int power;
	cout << "power = "; in >> power;
	power > 0 ? s.SetPower(power) : s.SetPower(0);
	return in;
}