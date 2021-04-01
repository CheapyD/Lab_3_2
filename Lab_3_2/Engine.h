#pragma once
#pragma pack(1)
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Engine
{
private:
	int power;

public:
	int GetPower() const { return power; }
	void SetPower(int value) { power = value; }

	Engine();
	Engine(const int power);
	Engine(const Engine& s);

	Engine& operator = (const Engine& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Engine& s);
	friend istream& operator >> (istream& in, Engine& s);
};

