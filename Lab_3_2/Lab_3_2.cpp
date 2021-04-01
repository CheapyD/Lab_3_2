#include "Truck.h"

Truck ReturnObj(Truck c)
{
	return c;
}

int main()
{
	cout << "Characteristics of Truck1:" << endl;
	Truck N(180, "BMV", 6000, 10);
	cout << N << endl; 
	
	Truck M;
	cin >> M;
	cout << "Characteristics of Truck2:" << endl;
	cout << M;

	cout << "Characteristics of Car:" << endl;
	Car K(180, "BMV", 6000);
	cout << K << endl;

	cout << "Characteristics of Engine:" << endl;
	Engine L(180);
	cout << L << endl;

	cout << "Return Object" << endl;
	cout << ReturnObj(N) << endl;
}